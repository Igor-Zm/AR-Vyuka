using System.Collections;
using System.Collections.Generic;
using SolarSystem;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;

namespace Telescope
{
    public class UserInterface : MonoBehaviour
    {
        public static UserInterface Singleton;

        [Header("Controllers")] [SerializeField]
        private NewCradle.CamController cam_control;

        public TelescopeBehavior telescopeKepler, telescopeGalileo;

        //[SerializeField] private CradleController cradle_control;
        [Space] [Header("Mouse")] public float Mouse_Sens;
        public float Mouse_Zoom_Sens;
        [Space] [Header("Touch")] public float Finger_Sens;
        public float Finger_Zoom_Sens;

        [Space] [Header("Objects")] [SerializeField]
        private GameObject OpenBtnGalileo, OpenBtnKepler;

        public GameObject visualizationKepler, visualizationGalileo;

        [SerializeField] private GameObject ExitScopeBtn;


        //[Space] [SerializeField] private Text F_txt, T_txt;

        [Header("Variables")] [Space] [SerializeField]
        private Vector2 last_input;

        [SerializeField] private float last_touch_distance;

        //Temps
        private float max_angle_temp;


        void Start()
        {
            Singleton = this;
            max_angle_temp = cam_control.Angle_Clamp_Max;
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

        public void OnScope(bool in_scope)
        {
            if (telescopeGalileo.isActiveAndEnabled) { 
                OpenBtnGalileo.SetActive(!in_scope);
            }
            else
            {
                OpenBtnKepler.SetActive(!in_scope);
            }
            ExitScopeBtn.SetActive(in_scope);
        }

        public void OnChangeBlur(Slider focus) => telescopeKepler.ChangeBlur(focus.value);

        public void OnChangeZoom(Slider zoom) => telescopeKepler.ChangeZoom(zoom.value);

        public void InteractDoorKepler()
        {
            visualizationKepler.SetActive(false);
            telescopeKepler.DoorState(!telescopeKepler.DoorIsOpen);
            OpenBtnKepler.transform.GetChild(0).GetComponent<Text>().text = telescopeKepler.DoorIsOpen ? "Zavøít" : "Otevøít";
            visualizationKepler.SetActive(true);
        }
        public void InteractDoorGalileo()
        {
            visualizationGalileo.SetActive(false);
            telescopeGalileo.DoorState(!telescopeGalileo.DoorIsOpen);
            OpenBtnGalileo.transform.GetChild(0).GetComponent<Text>().text = telescopeGalileo.DoorIsOpen ? "Zavøít" : "Otevøít";
            visualizationGalileo.SetActive(true);
        }
    }
}