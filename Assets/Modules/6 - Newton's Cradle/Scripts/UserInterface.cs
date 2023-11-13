using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;


namespace NewCradle
{
    public class UserInterface : MonoBehaviour
    {
        public static UserInterface Singleton;
        [Header("Controllers")]
        [SerializeField] private CamController cam_control;
        [SerializeField] private CradleController cradle_control;
        [Space]
        [Header("Sensitivity")] public float Mouse_Sens, Mouse_Zoom_Sens;
        public float Finger_Sens, Finger_Zoom_Sens;
        
        [Space]
        [Header("Objects")]
        [SerializeField] private Slider t_slider, f_slider;
        [Space] [SerializeField] private Text F_txt, T_txt;
        
        [Header("Variables")]
        [Space] [SerializeField] private Vector2 last_input;
        [SerializeField] private float last_touch_distance;
        
        //Temps
        private float max_angle_temp;
        private float fixed_timestamp_temp;


        void Start()
        {
            Singleton = this;
            max_angle_temp = cam_control.Angle_Clamp_Max;
            fixed_timestamp_temp = Time.fixedDeltaTime;
        }

        void Update()
        {
            float scroll = Input.mouseScrollDelta.y * Mouse_Zoom_Sens;
            if (Mathf.Abs(scroll) > 0)
            {
                cam_control.ZoomBy(-scroll);
            }
        }

        private Vector2 CalculateInputDelta()
        {
            Vector2 delta;

            if (Input.touchCount == 0)
            {
                if (last_input == Vector2.zero)
                {
                    last_input = Input.mousePosition;
                    return Vector2.zero;
                }

                Vector2 mouse_pos = Input.mousePosition;
                delta = mouse_pos - last_input;
                last_input = mouse_pos;
            }
            else
                delta = Input.touches[0].deltaPosition;


            return new Vector2(-delta.y, delta.x);
        }


        public void OnCanvasTouch()
        {
            last_input = Input.mousePosition;
        }

        public void OnCanvasRelease()
        {
            if (Input.touchCount < 2)
                last_touch_distance = 0;

            last_input = Vector2.zero;
        }

        public void OnCanvasDrag()
        {
            cam_control.Angle_Clamp_Max = max_angle_temp;

            if (Input.touchCount > 1)
            {
                float touch_distance = Vector2.Distance(Input.touches[0].position, Input.touches[1].position);

                if (last_touch_distance == 0)
                {
                    last_touch_distance = touch_distance;
                    return;
                }

                cam_control.ZoomBy((last_touch_distance - touch_distance) * Finger_Sens);
                last_touch_distance = touch_distance;
            }
            else
                cam_control.RotatePivotBySpeed(CalculateInputDelta() *
                                               (Input.touchCount == 0 ? Mouse_Sens : Finger_Sens));
        }

        public void Rotate(int dir)
        {
            Debug.Log(dir);

            if (dir == 0)
                cam_control.Desired_Rotation = Vector2.zero;
            else if (Mathf.Abs(dir) == 1)
            {
                cam_control.Desired_Rotation = Vector2.up * 90 * dir;
            }
            else if (dir == 2)
            {
                cam_control.Angle_Clamp_Max = 90;
                cam_control.Desired_Rotation = Vector2.right * 90;
            }
        }

        public void ChangeTimeSpeed()
        {
            Time.timeScale = t_slider.value;
            T_txt.text = $"t: {Math.Round(t_slider.value, 3)}";
            Time.fixedDeltaTime = fixed_timestamp_temp * t_slider.value;
        }

        public void ChangeFrequency()
        {
            cradle_control.PushDelayVar = f_slider.value;
            F_txt.text = F_txt.text.Substring(0, 4) + " / " +Convert.ToString(f_slider.value);
            cradle_control.Restart();
        }

        public void Restart()
        {
            cradle_control.Restart();
        }


    }
}