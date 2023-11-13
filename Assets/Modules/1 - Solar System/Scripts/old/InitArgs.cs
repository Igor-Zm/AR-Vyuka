using System;
using System.Collections;
using System.Collections.Generic;
using SolarSystem;
using UnityEngine;

namespace SolarSystem
{
    [Serializable]
    public class InitArgs
    {
        [SerializeField] public float spawn_multi, despawn_multi ,spawn_speed, despawn_speed;

        public InitArgs(float spawn_multi, float despawn_multi, float spawn_speed, float despawn_speed)
        {
            this.spawn_multi = spawn_multi;
            this.despawn_multi = despawn_multi;
            this.spawn_speed = spawn_speed;
            this.despawn_speed = despawn_speed;
        }
    }
}