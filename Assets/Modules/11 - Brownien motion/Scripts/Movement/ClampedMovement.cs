using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AR_Project.Movement
{

    public class ClampedMovement : BasicMovement
    {
        [Header("Clamp properties")]
        [SerializeField] bool _clampEnabled = true;
        [property:SerializeField]public bool ClampEnabled {get
        {
            return _clampEnabled;
            }
            set {
                _clampEnabled = value;
                if(value)
                    SetPostion(DesiredPos);

        }}
        [Tooltip("Point from which the allowed distance is calculated")]
        public Vector3 ClampOrigin;
        [Tooltip("Max distance from origin allowed")]
        [Min(0f)] public float MaxDistance;

        // protected void Awake()
        // {
        //     SetPostion(DesiredPos);
        // }

        protected override void Start()
        {
            base.Start();
            ClampOrigin = DesiredPos;
        }

        public override void SetPostion(Vector3 newPos)
        {
            if(_clampEnabled)
                newPos = ClampedDistance(newPos);
            base.SetPostion(newPos);
        }

        protected virtual Vector3 ClampedDistance(Vector3 newPos)
        {
            Vector3 relativePos = newPos - ClampOrigin;

            if(Vector3.Distance(newPos, ClampOrigin) <= MaxDistance)
                 return newPos;
            
            return (relativePos.normalized * MaxDistance) + ClampOrigin;
        }

    }

}