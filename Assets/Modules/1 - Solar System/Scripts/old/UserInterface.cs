using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;


namespace SolarSystem
{
    [Serializable]
    public class UserInterface : MonoBehaviour
    {
        [SerializeField] private CameraController cam_controller;

        [SerializeField] private GameObject[] info_box = new GameObject[2];
        [SerializeField] private Text[] info_box_name = new Text[2];
        [SerializeField] private Text[] info_box_text = new Text[2];
        [SerializeField] private GameObject[] nav_buttons = new GameObject[2];
        [SerializeField] private Text[] nav_btns_txt = new Text[2];
        [SerializeField] private Text mode_btn_txt;
        [SerializeField] private bool cam_side = false;

        [SerializeField] [Range(1f, 50f)] private float mouse_sens; //Mouse sens
        [SerializeField] [Range(1f, 50f)] private float finger_sens; //Mouse sens
        [SerializeField] [Range(1f, 50f)] private float zoom_sens;

        [Space] [SerializeField] private Vector2 input_start = Vector2.zero;
        [SerializeField] private Vector2 last_input = Vector2.zero;
        [SerializeField] private Vector2 input_movement = Vector2.zero;
        [SerializeField] private float last_touch_distance = 0f;


        private void Start()
        {
            cam_controller.zoom_sens = zoom_sens;
            mode_btn_txt.text = GameManager.Game_manager.GetCurrentModeName();
        }

        private void Update()
        {
            float scroll = Input.mouseScrollDelta.y;
            if (Mathf.Abs(scroll) > 0)
            {
                cam_controller.ZoomBy(-scroll);
            }


            float cam_rotation = cam_controller.GetPivot.rotation.eulerAngles.y;

            if (cam_rotation > 90 && cam_rotation < 270 && !cam_side)
            {
                cam_side = true;
                UpdateInterface();
            }
            else if (cam_rotation < 90 || cam_rotation > 270 && cam_side)
            {
                cam_side = false;
                UpdateInterface();
            }
        }

        public void UpdateInterface()
        {
            bool half = !nav_buttons[1].activeSelf && !info_box[1].activeSelf;
            
            int side = 0;
            if (half&&cam_side)
                side++;

            PlanetInfo[] info = GameManager.Game_manager.GetInfo();


            info_box_name[0 + side].text = info[0].Name;
            nav_btns_txt[0 + side].text = info[0].Name;
            //info_box_text[i].text = info[i].Info;
            
            if(half)
                return;

            info_box_name[1 - side].text = info[1].Name;
            nav_btns_txt[1 - side].text = info[1].Name;
            //info_box_text[i].text = info[i].Info;
        }


        private Vector2 CalculateInputDelta()
        {
            Vector2 delta;
            if (Input.touchCount > 0)
                delta = Input.touches[0].deltaPosition;
            else
            {
                Vector2 mouse_pos = Input.mousePosition;
                delta = mouse_pos - last_input; //TODO: Repair delta
                last_input = mouse_pos;
            }

            input_movement += delta;
            return delta;
        }


        public void LeftPlanetUp()
        {
            int side = 0;
            GetSide(ref side);
            Direction dir = Direction.Up;
            GameManager.Game_manager.Interact(new InteractArgs(side, dir));
            UpdateInterface();
        }

        public void LeftPlanetDown()
        {
            int side = 0;
            GetSide(ref side);
            Direction dir = Direction.Down;
            GameManager.Game_manager.Interact(new InteractArgs(side, dir));
            UpdateInterface();
        }

        public void RightPlanetUp()
        {
            int side = 1;
            GetSide(ref side);
            Direction dir = Direction.Up;
            GameManager.Game_manager.Interact(new InteractArgs(side, dir));
            UpdateInterface();
        }

        public void RightPlanetDown()
        {
            int side = 1;
            GetSide(ref side);
            Direction dir = Direction.Down;
            GameManager.Game_manager.Interact(new InteractArgs(side, dir));
            UpdateInterface();
        }

        public void CloseRight()
        {
            info_box[1].SetActive(false);
            nav_buttons[1].SetActive(true);
        }

        public void CloseLeft()
        {
            info_box[0].SetActive(false);
            nav_buttons[0].SetActive(true);
        }

        public void OpenLeft()
        {
            nav_buttons[0].SetActive(false);
            info_box[0].SetActive(true);
        }

        public void OpenRight()
        {
            nav_buttons[1].SetActive(false);
            info_box[1].SetActive(true);
        }

        void GetSide(ref int side)
        {
            if (cam_controller.GetPivot.rotation.eulerAngles.y > 90 &&
                cam_controller.GetPivot.rotation.eulerAngles.y < 270)
                side = 1 - side;
        }

        public void OnClick()
        {
            if (Input.touchCount > 0)
            {
                input_start = Input.touches[0].deltaPosition;
            }
            else
            {
                Vector3 mouse_pos = Input.mousePosition;
                input_start = (Vector2)mouse_pos;
                last_input = input_start;
            }
        }

        public void OnCanvasRelease()
        {
            Cursor.visible = true;
            Cursor.lockState = CursorLockMode.None;
        }

        public void OnCanvasDrag()
        {
            if (Input.touches.Length > 1)
            {
                float touch_distance = Vector2.Distance(Input.touches[0].position, Input.touches[1].position);

                if (last_touch_distance == 0)
                    last_touch_distance = touch_distance;

                cam_controller.ZoomBy((last_touch_distance - touch_distance) / 100);
                last_touch_distance = touch_distance;
            }
            else if (Input.touches.Length == 1)
            {
                last_touch_distance = 0;
                cam_controller.MoveCamera(CalculateInputDelta() * finger_sens);
            }
            else
                cam_controller.MoveCamera(CalculateInputDelta() * mouse_sens);
        }

        public void OnRelease()
        {
            last_input = Vector2.zero;
            input_movement = Vector2.zero;
            input_start = Vector2.zero;
            last_touch_distance = 0;
        }

        public void OnChangeModeClick()
        {
            GameMode state = GameManager.Game_manager.NextMode();
            if (state == GameMode.SizeCompar)
                nav_buttons[1].SetActive(true);
            else
            {
                nav_buttons[1].SetActive(false);
                info_box[1].SetActive(false);
            }


            mode_btn_txt.text = GameManager.Game_manager.GetCurrentModeName();
            UpdateInterface();
        }
    }
}