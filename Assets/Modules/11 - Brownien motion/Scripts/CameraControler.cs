using System;
using System.Collections;
using System.Collections.Generic;
using AR_Project.Movement;
using Unity.VisualScripting;
using UnityEngine;


namespace AR_Project.Controlers
{
    public class CameraControler : ClampedRotation
    {
        public Camera Cam {get; private set;}
        private BasicMovement _zoomMovement;

        [Header("Zoom")] public float MinDistClamp;
        public float MaxDistClamp;

        [SerializeField] private float _desiredCamDistance;

        public void ZoomBy(float zoom)
        {
            _desiredCamDistance = Mathf.Clamp(_desiredCamDistance + zoom, MinDistClamp, MaxDistClamp);
            _zoomMovement.SetPostion(Vector3.forward * _desiredCamDistance);
        }

        void Start()
        {
            _zoomMovement = transform.GetChild(0).GetComponent<BasicMovement>();
            _zoomMovement.useLocalTrans = true;

            PitchAxis = AxisBehavior.Axis.X;
            RotationAxis = AxisBehavior.Axis.Y;

            Cam = transform.GetComponentInChildren<Camera>();
        }

        protected override void FixedUpdate()
        {
            if(!precision.WithinThreshold( _desiredCamDistance,_zoomMovement.DesiredPos.z))
                ZoomBy(_desiredCamDistance-_zoomMovement.DesiredPos.z);
            
            base.FixedUpdate();
        }
    }
}