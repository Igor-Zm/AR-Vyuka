using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;


namespace SolarSystem
{
    public enum GameMode : int
    {
        SolarSystem = 0,
        SizeCompar = 1,
        OnePlanet = 2
    }

    public enum Direction
    {
        Up = 1,
        Down = -1
    }

    public class GameManager : MonoBehaviour
    {
        public static GameManager Game_manager;

        private Transform camera_anchor;
        [SerializeField] private CameraController controller;
        public UserInterface UI_controller;
        [SerializeField] private GameMode current_state;
        private IGameModeBehavior[] all_modes = new IGameModeBehavior[3];
        private IGameModeBehavior current_mode;

        [SerializeField] private InitArgs size_comp_init;
        [SerializeField] private InitArgs one_planet_init;

        [SerializeField] private GameObject[] space_objects;
        [SerializeField] private GameObject sun;
        [SerializeField] private PlanetInfo[] space_objects_info;

        [SerializeField] private string[] mode_names;


        void Start()
        {
            Game_manager = this;

            all_modes[(int)GameMode.SolarSystem] = new SolarSystem(space_objects, sun);
            all_modes[(int)GameMode.SizeCompar] = new SizeComparison(space_objects, size_comp_init);
            all_modes[(int)GameMode.OnePlanet] = new OnePlanet(space_objects, one_planet_init);

            ChangeMode();
        }

        void Update()
        {
            current_mode.Update();
        }

        public void Interact(InteractArgs event_args)
        {
            current_mode.Interact(event_args);
            controller.Cam_distance = current_mode.GetDistance();
            controller.Anchor = current_mode.GetAnchorPos();
            
            if (current_state == GameMode.SolarSystem)
                controller.SetFollowObject(((SolarSystem)current_mode).GetPlanetTran());
            else
                controller.DisableFollow();
        }

        public GameMode NextMode()
        {
            current_state += 1;
            if ((int)current_state > 2)
                current_state = 0;

            ChangeMode();
            return current_state;
        }

        public String GetCurrentModeName()
        {
            return mode_names[(int)current_state];
        }

        void ChangeMode()
        {
            if (current_mode != null)
                current_mode.Stop();

            current_mode = all_modes[(int)current_state];
            current_mode.Restart();

            controller.Anchor = current_mode.GetAnchorPos();

            if (current_state == GameMode.SolarSystem)
                controller.SetFollowObject(((SolarSystem)current_mode).GetPlanetTran());
            else
                controller.DisableFollow();

            controller.Cam_distance = current_mode.GetDistance();
        }

        public PlanetInfo[] GetInfo()
        {
            int[] indexes = current_mode.GetPlanetIndex();
            PlanetInfo[] info = new PlanetInfo[indexes.Length];

            for (int i = 0; i < indexes.Length; i++)
                info[i] = space_objects_info[indexes[i]];

            return info;
        }
    }
}