using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Unity.Mathematics;
using UnityEngine;


namespace NewCradle
{
    public class CamController : MonoBehaviour
    {
        public enum MoveMode
        {
            FollowAnchor,
            FollowGO
        }

        ///////////////////////////////////
        // Main GO
        public GameObject cam { get; private set; }
        public GameObject pivot { get; private set; }

        //////////////////////////////////
        // Pivot movement data
        [Space] [Header("Pivot Settings")] public Vector3 AnchorPos;
        public float Max_Pivot_Speed;
        [SerializeField] private bool use_damp = true;

        public bool Use_Damping
        {
            get { return use_damp; }
            set
            {
                use_damp = value;

                if (value)
                    move_behavior = MovePivot_B;
                else
                    move_behavior = TeleportPivot_B;
            }
        }

        [Range(0, 1)] public float Pivot_Damp;

        [Space] [Header("Object To follow")] [SerializeField]
        private MoveMode move_mode;

        public MoveMode Move_Mode
        {
            get { return move_mode; }
            set
            {
                if (value == MoveMode.FollowGO && GO_to_Follow != null)
                {
                    move_mode = value;
                }
                else
                    move_mode = MoveMode.FollowAnchor;
            }
        }

        public GameObject GO_to_Follow;
        public bool Local_Rotation = false;


        private Vector3 pivot_velo = Vector3.zero;

        //////////////////////////////////
        // Pivot rotation data
        [Space] [Header("Rotation Settings")] [SerializeField]
        private Vector2 desired_rot = Vector2.zero;

        [SerializeField] private Vector2 rot_speed = Vector2.zero;

        public Vector2 Desired_Rotation
        {
            get { return desired_rot; }
            set
            {
                desired_rot = ClampRotation(value);
                RotatePivotTo(desired_rot.x, desired_rot.y);
            }
        }

        public float Max_Rotation_Speed = 100f;
        [Range(0, 1)] public float Rotation_Damp;
        [Range(0, 90)] public float Angle_Clamp_Max;
        [Range(0, 90)] public float Angle_Clamp_Min;

        private Quaternion rotation_velo = new Quaternion();
        private Vector2 rot_speed_velo = Vector2.zero;

        //////////////////////////////////
        // Cam distance data
        [Space] [Header("Zoom Settings")] public float Desired_Zoom;
        public float Min_Zoom;
        public float Max_Zoom;
        [Range(0, 1)] public float Zoom_Damp;

        private Vector3 zoom_velo = Vector3.zero;

        //////////////////////////////////
        // Offsets
        [Space] [Header("Offsets")] public Vector2 CamAngleOffset = Vector2.zero;
        public Vector2 CamPosOffset = Vector2.zero;


        //////////////////////////////////
        //Cam methods
        private delegate void Behavior();

        private Behavior move_behavior;
        private Behavior pivot_behavior;
        private Behavior zoom_behavior;


        private void Start()
        {
            this.pivot = gameObject;
            this.cam = transform.GetChild(0).gameObject;

            PrepareMethods();
            ApplyOffset();
        }

        protected virtual void PrepareMethods()
        {
            if (use_damp)
                move_behavior = MovePivot_B;
            else
                move_behavior = TeleportPivot_B;

            pivot_behavior = RotatePivotTo_B;
            zoom_behavior = Zoom_B;
        }

        private void FixedUpdate()
        {
            RemoveOffset();
            move_behavior?.Invoke();
            pivot_behavior?.Invoke();
            zoom_behavior?.Invoke();
            ApplyOffset();
            cam.transform.LookAt(pivot.transform);
        }

        private void MovePivot_B()
        {
            pivot.transform.position = Vector3.SmoothDamp(pivot.transform.position,
                move_mode == MoveMode.FollowAnchor ? AnchorPos : GO_to_Follow.transform.position,
                ref pivot_velo, Pivot_Damp * Time.timeScale);
        }

        private void TeleportPivot_B()
        {
            pivot.transform.position = move_mode == MoveMode.FollowAnchor ? AnchorPos : GO_to_Follow.transform.position;
        }

        private void RotatePivotTo_B()
        {
            Vector3 curr_rot = pivot.transform.rotation.eulerAngles;

            Vector3 target = new Vector3((desired_rot.x < 0 ? 360 : 0) + desired_rot.x,
                (desired_rot.y < 0 ? 360 : 0) + desired_rot.y);
            Quaternion new_rot = SmoothDamp(pivot.transform.rotation, quaternion.Euler(target),
                ref rotation_velo, Rotation_Damp);
            pivot.transform.rotation = new_rot;

            //Debug.Log(new_rot.eulerAngles + "|"+target);

            // if (Quaternion.Euler(curr_rot) == Quaternion.Euler((Vector3)desired_rot))
            //     pivot_behavior = null;
        }

        private void RotatePivotSpeed_B()
        {
            pivot.transform.Rotate(Vector3.up, (rot_speed.y * Time.deltaTime) / Time.timeScale);
            pivot.transform.Rotate(Vector3.right, (rot_speed.x * Time.deltaTime) / Time.timeScale);
            pivot.transform.Rotate(Vector3.forward, -pivot.transform.rotation.eulerAngles.z);

            if (pivot.transform.rotation.eulerAngles.x > Angle_Clamp_Max &&
                pivot.transform.rotation.eulerAngles.x < 180)
                pivot.transform.Rotate(Vector3.right, Angle_Clamp_Max - pivot.transform.rotation.eulerAngles.x);
            else if (pivot.transform.rotation.eulerAngles.x < 360 - Angle_Clamp_Min &&
                     pivot.transform.rotation.eulerAngles.x > 180)
                pivot.transform.Rotate(Vector3.right, 360 - Angle_Clamp_Min - pivot.transform.rotation.eulerAngles.x);

            rot_speed = Vector2.SmoothDamp(rot_speed, Vector2.zero, ref rot_speed_velo, Rotation_Damp * Time.timeScale);

            if (rot_speed.magnitude == 0)
                pivot_behavior = null;
        }

        private Vector3 CalculateRotation(Vector3 current, Vector3 target, ref Vector3 currentVelocity,
            float smoothTime)
        {
            return new Vector3(
                Mathf.SmoothDampAngle(current.x, target.x, ref currentVelocity.x, smoothTime * Time.timeScale),
                Mathf.SmoothDampAngle(current.y, target.y, ref currentVelocity.y, smoothTime * Time.timeScale),
                0
            );
        }

        private Quaternion SmoothDamp(Quaternion rot, Quaternion target, ref Quaternion deriv, float time)
        {
            if (Time.deltaTime < Mathf.Epsilon) return rot;
            // account for double-cover
            var Dot = Quaternion.Dot(rot, target);
            var Multi = Dot > 0f ? 1f : -1f;
            target.x *= Multi;
            target.y *= Multi;
            target.z *= Multi;
            target.w *= Multi;
            // smooth damp (nlerp approx)
            var Result = new Vector4(
                Mathf.SmoothDamp(rot.x, target.x, ref deriv.x, time),
                Mathf.SmoothDamp(rot.y, target.y, ref deriv.y, time),
                Mathf.SmoothDamp(rot.z, target.z, ref deriv.z, time),
                Mathf.SmoothDamp(rot.w, target.w, ref deriv.w, time)
            ).normalized;

            // ensure deriv is tangent
            var derivError = Vector4.Project(new Vector4(deriv.x, deriv.y, deriv.z, deriv.w), Result);
            deriv.x -= derivError.x;
            deriv.y -= derivError.y;
            deriv.z -= derivError.z;
            deriv.w -= derivError.w;

            return new Quaternion(Result.x, Result.y, Result.z, Result.w);
        }


        private void Zoom_B()
        {
            cam.transform.localPosition = Vector3.SmoothDamp(cam.transform.localPosition,
                new Vector3(0, 0, -Desired_Zoom),
                ref zoom_velo, Zoom_Damp * Time.timeScale);

            if (cam.transform.localPosition.z == -Desired_Zoom)
                zoom_behavior = null;
        }

        private void ZoomClamp()
        {
            Desired_Zoom = Mathf.Clamp(Desired_Zoom, Min_Zoom, Max_Zoom);
        }

        private Vector2 ClampRotation(Vector2 input)
        {
            return new Vector2
            {
                x = Mathf.Clamp(input.x, -Angle_Clamp_Min, Angle_Clamp_Max),
                y = input.y
            };
        }

        private void ApplyOffset()
        {
            cam.transform.position += (Vector3)CamPosOffset;
            cam.transform.Rotate((Vector3)CamAngleOffset);
        }

        private void RemoveOffset()
        {
            cam.transform.position -= (Vector3)CamPosOffset;
            cam.transform.Rotate((Vector3)CamAngleOffset * -1);
        }

        public void RotatePivotBySpeed(float x, float y)
        {
            rotation_velo = new Quaternion();

            rot_speed.x += x;
            rot_speed.y += y;

            pivot_behavior = RotatePivotSpeed_B;
        }

        public void RotatePivotBySpeed(Vector2 input)
        {
            RotatePivotBySpeed(input.x, input.y);
        }

        public void RotatePivotTo(float x, float y)
        {
            rot_speed_velo = Vector3.zero;
            rot_speed = Vector2.zero;

            desired_rot.x = x;
            desired_rot.y = y;

            desired_rot = ClampRotation(desired_rot);

            pivot_behavior = RotatePivotTo_B;
        }

        public void RotatePivotTo(Vector2 desired_rot)
        {
            RotatePivotTo(desired_rot.x, desired_rot.y);
        }

        public void ZoomBy(float zoom_by)
        {
            Desired_Zoom += zoom_by;
            ZoomClamp();

            zoom_behavior = Zoom_B;
        }
    }
}