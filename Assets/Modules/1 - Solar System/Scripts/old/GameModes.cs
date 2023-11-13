using System;
using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;
using Unity.Mathematics;
using UnityEngine;
using Object = UnityEngine.Object;

namespace SolarSystem
{
    [Serializable]
    public class OnePlanet : IGameModeBehavior
    {
        private float spawn_multi;
        private float despawn_mulit;
        private float spawn_speed;
        private float despawn_speed;
        private bool AnimDone = true;

        private GameObject[] space_objects;
        private GameObject spawned_obj;
        [SerializeField] private int current_i;
        private GameObject leaving_obj;
        private Direction direction;

        private float exponent;

        public OnePlanet(GameObject[] space_objects, InitArgs init_args)
        {
            this.space_objects = space_objects;

            this.spawn_multi = init_args.spawn_multi;
            this.despawn_mulit = init_args.despawn_multi;
            this.spawn_speed = init_args.spawn_speed;
            this.despawn_speed = init_args.despawn_speed;
        }

        public void Restart()
        {
            spawned_obj = Object.Instantiate(space_objects[2]);
            current_i = 2;
        }

        public void Stop()
        {
            Object.Destroy(spawned_obj);
        }

        public void Update()
        {
            if (!AnimDone)
            {
                float spawn_move_by = Mathf.SmoothStep(
                    spawned_obj.transform.position.y, 0,
                    spawn_speed) * 10 * Time.deltaTime;

                spawned_obj.transform.position -= Vector3.up * spawn_move_by;

                if (leaving_obj != null)
                {
                    float leaving_size = leaving_obj.GetComponent<Collider>().bounds.size.x;

                    float despawn_move_by = Mathf.SmoothStep(Mathf.Abs(leaving_obj.transform.position.y),
                        leaving_size * despawn_mulit, despawn_speed) * 10 * Time.deltaTime;
                    leaving_obj.transform.position += Vector3.up * despawn_move_by * (int)direction;

                    if (Mathf.Abs(leaving_obj.transform.position.y) >
                        leaving_size * spawn_multi)
                    {
                        Object.Destroy(leaving_obj);
                        leaving_obj = null;
                    }
                }

                if (spawned_obj.transform.position.y == 0 && leaving_obj == null)
                    AnimDone = true;
            }
        }

        public Vector3 GetAnchorPos()
        {
            return Vector3.zero;
        }

        public float GetDistance()
        {
            float planet_size = spawned_obj.GetComponent<Collider>().bounds.size.x;
            return planet_size + planet_size * .25f;
        }

        public void Interact(InteractArgs args)
        {
            current_i += (int)args.Direction;

            if (current_i > space_objects.Length - 1)
                current_i = 0;
            else if (current_i < 0)
                current_i = space_objects.Length - 1;

            direction = args.Direction;

            if (leaving_obj != null)
                Object.Destroy(leaving_obj);
            leaving_obj = spawned_obj;

            spawned_obj = Object.Instantiate(space_objects[current_i]);

            float spawn_distance = spawned_obj.GetComponent<Collider>().bounds.size.x * despawn_mulit;

            spawned_obj.transform.position += Vector3.up * spawn_distance * -(int)args.Direction;
            AnimDone = false;
        }

        public int[] GetPlanetIndex()
        {
            return new int[] { current_i };
        }
    }

    /// <summary>
    /// Size Comparison Behavior
    /// </summary>
    public class SizeComparison : IGameModeBehavior
    {
        private float spawn_multi, despawn_multi;
        private float spawn_speed, despawn_speed;
        private bool AnimDone = true;

        private GameObject[] space_objects;
        private GameObject[] SizeCompObj = new GameObject[2];
        private int[] current_i = new int [2];
        private GameObject[] LeavingObj = new GameObject[2];
        private Direction[] directions = new Direction[2];


        public SizeComparison(GameObject[] space_objects, InitArgs init_args)
        {
            this.space_objects = space_objects;

            this.spawn_multi = init_args.spawn_multi;
            this.despawn_multi = init_args.despawn_multi;
            this.spawn_speed = init_args.spawn_speed;
            this.despawn_speed = init_args.despawn_speed;
        }


        public void Restart()
        {
            SizeCompObj[0] = Object.Instantiate(space_objects[2]);
            SizeCompObj[1] = Object.Instantiate(space_objects[3]);
            current_i[0] = 2;
            current_i[1] = 3;
            CenterPlanets();
        }

        public void Stop()
        {
            Object.Destroy(SizeCompObj[0]);
            Object.Destroy(SizeCompObj[1]);
        }

        public void Update()
        {
            if (!AnimDone)
            {
                for (int i = 0; i < SizeCompObj.Length; i++)
                {
                    float spawn_move_by = Mathf.SmoothStep(
                        SizeCompObj[i].transform.position.y, 0,
                        spawn_speed) * 10 * Time.deltaTime;

                    SizeCompObj[i].transform.position -= Vector3.up * spawn_move_by;
                    if (LeavingObj[i] != null)
                    {
                        float leaving_size = LeavingObj[i].GetComponent<Collider>().bounds.size.x;
                        float despawn_move_by = Mathf.SmoothStep(Mathf.Abs(LeavingObj[i].transform.position.y),
                            leaving_size * despawn_multi, despawn_speed) * 10 * Time.deltaTime;
                        LeavingObj[i].transform.position += Vector3.up * despawn_move_by * (int)directions[i];

                        if (Mathf.Abs(LeavingObj[i].transform.position.y) >
                            leaving_size * spawn_multi)
                        {
                            GameManager.Destroy(LeavingObj[i]);
                            LeavingObj[i] = null;
                        }
                    }
                }

                if (SizeCompObj[0].transform.position.y != 0 && LeavingObj[0] == null &&
                    SizeCompObj[1].transform.position.y != 0 && LeavingObj[1] == null)
                    AnimDone = true;
            }
        }


        public Vector3 GetAnchorPos()
        {
            float L_width = SizeCompObj[0].GetComponent<Collider>().bounds.size.x;
            float R_width = SizeCompObj[1].GetComponent<Collider>().bounds.size.x;

            return new Vector3
            {
                x = (R_width - L_width) / 2f,
                y = 0,
                z = 0
            };
        }


        public float GetDistance()
        {
            float L = SizeCompObj[0].GetComponent<Collider>().bounds.size.x;
            float R = SizeCompObj[1].GetComponent<Collider>().bounds.size.x;
            return L + R;
        }

        public void Interact(InteractArgs args)
        {
            current_i[args.Side] += (int)args.Direction;

            if (current_i[args.Side] > space_objects.Length - 1)
                current_i[args.Side] = 0;
            else if (current_i[args.Side] < 0)
                current_i[args.Side] = space_objects.Length - 1;

            if (current_i[0] == current_i[1])
                current_i[args.Side] += (int)args.Direction;

            if (current_i[args.Side] > space_objects.Length - 1)
                current_i[args.Side] = 0;
            else if (current_i[args.Side] < 0)
                current_i[args.Side] = space_objects.Length - 1;


            directions[args.Side] = args.Direction;

            if (LeavingObj[args.Side] != null)
                Object.Destroy(LeavingObj[args.Side]);
            LeavingObj[args.Side] = SizeCompObj[args.Side];

            SizeCompObj[args.Side] = Object.Instantiate(space_objects[current_i[args.Side]]);
            CenterPlanets();
            SizeCompObj[args.Side].transform.position +=
                (Vector3.up * SizeCompObj[args.Side].GetComponent<Collider>().bounds.size.x * despawn_multi) *
                -(int)args.Direction;
            AnimDone = false;
        }

        public int[] GetPlanetIndex()
        {
            return new[] { current_i[0], current_i[1] };
        }

        private void CenterPlanets()
        {
            SizeCompObj[0].transform.position =
                new Vector3(-SizeCompObj[0].GetComponent<Collider>().bounds.size.x / 2f, 0, 0);
            SizeCompObj[1].transform.position =
                new Vector3(SizeCompObj[1].GetComponent<Collider>().bounds.size.x / 2f, 0, 0);
        }
    }

    public partial class SolarSystem : IGameModeBehavior
    {
        private GameObject sun_object;
        private PlanetBehavior[] planet_scripts;
        private float time_speed = 0.4f;

        private float[] year_periods = new[] { 88f, 225f, 365.25f, 27.32f, 687f, 4333f, 10759f, 30687f, 60190f };
        private float[] rot_periods = new[] { 58.6f, 243f, 1f, 27.32f, 1.02f, .416f, .437f, .718f, 0.666f };

        private float orbit_scale = 15f;

        private int current_i = 2;


        public SolarSystem(GameObject[] space_objects, GameObject sun)
        {
            sun.SetActive(false);
            sun_object = Object.Instantiate(sun);

            List<double[,]> orbits_data = PrepareData();
            planet_scripts = new PlanetBehavior[orbits_data.Count];


            planet_scripts[0] = new PlanetBehavior(space_objects[0], sun_object, orbits_data[0], orbit_scale, year_periods[0], 
                    rot_periods[0]);
            planet_scripts[1] = new PlanetBehavior(space_objects[1], sun_object, orbits_data[1], orbit_scale, year_periods[1], 
                rot_periods[1],  false);
            planet_scripts[2] = new PlanetBehavior(space_objects[2], sun_object, orbits_data[2], orbit_scale, year_periods[2], 
                rot_periods[2]);
            planet_scripts[3] = new PlanetBehavior(space_objects[3], planet_scripts[2].Planet, orbits_data[3], orbit_scale, year_periods[3], 
                rot_periods[3]);
            planet_scripts[4] = new PlanetBehavior(space_objects[4], sun_object, orbits_data[4], orbit_scale, year_periods[4], 
                rot_periods[4]
                );
            planet_scripts[5] = new PlanetBehavior(space_objects[5], sun_object, orbits_data[5], orbit_scale, year_periods[5], 
                rot_periods[5]);            
            // planet_scripts[6] = new PlanetBehavior(space_objects[6], sun_object, orbits_data[6], orbit_scale, year_periods[6], 
            //     rot_periods[6]);
            // planet_scripts[7] = new PlanetBehavior(space_objects[7], sun_object, orbits_data[7], orbit_scale, year_periods[7], 
            //     rot_periods[7], false);
            // planet_scripts[8] = new PlanetBehavior(space_objects[8], sun_object, orbits_data[8], orbit_scale, year_periods[8], 
            //     rot_periods[8]);
            
            Stop();
        }


        public void Restart()
        {
            sun_object.SetActive(true);

            foreach (var planet in planet_scripts)
            {
                planet.Restart();
                planet.Start();
            }
        }

        public void Stop()
        {
            sun_object.SetActive(false);

            foreach (var planet in planet_scripts)
                planet.Stop();
        }

        public void Update()
        {
            for (int i = 0; i < planet_scripts.Length; i++)
            {
                planet_scripts[i].MoveInTime(time_speed * Time.deltaTime);
            }
        }

        public Vector3 GetAnchorPos()
        {
            return Vector3.zero;
        }

        public Transform GetPlanetTran()
        {
            return planet_scripts[current_i].Planet.transform;
        }

        public float GetDistance()
        {
            float planet_size = planet_scripts[current_i].Planet.GetComponent<Collider>().bounds.size.x;
            return planet_size + planet_size * .25f;
        }

        public void Interact(InteractArgs args)
        {
            current_i += (int)args.Direction;

            if (current_i > planet_scripts.Length - 1)
                current_i = 0;
            else if (current_i < 0)
                current_i = planet_scripts.Length - 1;
        }

        public int[] GetPlanetIndex()
        {
            return new[] { current_i };
        }
    }
}