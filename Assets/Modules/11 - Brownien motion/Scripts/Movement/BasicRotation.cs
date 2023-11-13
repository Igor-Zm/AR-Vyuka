using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

namespace AR_Project.Movement
{
    public class BasicRotation : AxisBehavior
    {
        [Header("Main Properties")] [SerializeField]
#if UNITY_EDITOR
        private Vector3 _editorInput = Vector3.zero;
#endif

        [Space] public Axis RotationAxis = Axis.Y;
        public bool RotUseLocal = false;
        public Axis PitchAxis = Axis.X;
        public bool PitchUseLocal = true;

        [Space] [SerializeField] [InspectorName("Rotation Damp")] [Range(0, 1)]
        private float _rotDamp = .15f;

        public float RotDamp
        {
            get { return _rotDamp; }
            set { _rotDamp = Mathf.Clamp01(value); }
        }

        [Header("Precision Helper")] [SerializeField]
        protected PrecisionHelper precision = new PrecisionHelper(.01f);

        [Space] [Header("Variables")] [SerializeField]
        private Vector3 _remainingDegrees = Vector3.zero;

        [SerializeField] private Vector3 _rotSpeed = Vector3.zero;

#if UNITY_EDITOR
        protected virtual void GetDegrees()
        {
            RotateBy(new Vector2(GetValueFromAxis(RotationAxis, _editorInput),
                GetValueFromAxis(PitchAxis, _editorInput)));
            _editorInput = Vector3.zero;
        }
#endif


        public virtual void RotateBy(Vector2 input)
        {
            AddValueToAxis(RotationAxis, ref _remainingDegrees, input.x);
            AddValueToAxis(PitchAxis, ref _remainingDegrees, input.y);
        }


#if UNITY_EDITOR
        protected virtual void Update() => GetDegrees();
#endif
        protected virtual void FixedUpdate() => Rotate();

        protected virtual bool IsSupposedToRotate()
        {
            return !precision.WithinThreshold(GetValueFromAxis(RotationAxis, _remainingDegrees), 0)
                   || !precision.WithinThreshold(GetValueFromAxis(PitchAxis, _remainingDegrees), 0);
        }

        protected void RotateAroundAxis(Axis rotAxis, float degrees, bool localRot = false)
        {
            Vector3 axis = GetAxisVector(rotAxis);
            transform.Rotate(axis, degrees, localRot ? Space.Self : Space.World);
        }

        protected void RotateSmoothAroundAxis(Axis rotAxis, bool localRot = false)
        {
            float BeforeRotDegrees = GetValueFromAxis(rotAxis, _remainingDegrees);
            float AfterRotation =
                SmoothDampVectorByAxis(rotAxis, _remainingDegrees, 0, ref _rotSpeed, _rotDamp * Time.timeScale);

            float rotateBy = AfterRotation - BeforeRotDegrees;
            RotateAroundAxis(rotAxis, rotateBy, localRot);
            SetValueToAxis(rotAxis, ref _remainingDegrees, AfterRotation);
        }


        protected void Rotate()
        {
            if (!IsSupposedToRotate())
                return;

            RotateSmoothAroundAxis(RotationAxis, RotUseLocal);
            RotateSmoothAroundAxis(PitchAxis, PitchUseLocal);
        }
    }
}