using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AR_Project.Movement
{
    public class FollowMovement : BasicMovement
    {
        public bool FollowEnabled = true;
        public GameObject ObjectToFollow;

        void Update()
        {
            if (ObjectToFollow)
                SetPostion(ObjectToFollow.transform.position);
        }
        
    }
}