using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Events;

namespace AR_Project.Movement
{
    public class BasicMovement : MonoBehaviour
    {
        [field:Header("Main Properties")]
        [field:SerializeField]public Vector3 DesiredPos {get; private set;}

        [SerializeField] [InspectorName("Use editor position")]
        private bool _stayOnSpawn = false;
        public bool useLocalTrans = false;

        [SerializeField] [InspectorName("Movement Damp")] [Range(0, 1)]
        private float _moveDamp = .15f;

        public float MoveDamp
        {
            get { return _moveDamp; }
            set { _moveDamp = Mathf.Clamp01(value); }
        }

        [SerializeField] private PrecisionHelper precison = new PrecisionHelper(0.01f);

        private Vector3 _moveSpeed = Vector3.zero;


        protected virtual void Start()
        {
            if (_stayOnSpawn)
                DesiredPos = useLocalTrans ? transform.localPosition : transform.position;
        }

        public virtual void MoveBy(Vector3 moveBy)
        {
            SetPostion(DesiredPos+moveBy);
        }

        public virtual void SetPostion(Vector3 newPos)
        {
            this.DesiredPos = newPos;
            _moveSpeed = Vector3.zero;

            StartCoroutine(Move());
        }

        protected virtual bool IsSupposedToMove()
        {
            return !PrecisionHelper.WithinThreshold(useLocalTrans ? transform.localPosition : transform.position,
                DesiredPos, precison.Threshold);
        }

        IEnumerator Move()
        {
            while(IsSupposedToMove())
            {
                transform.localPosition = Vector3.SmoothDamp(useLocalTrans ? transform.localPosition : transform.position,
                                        DesiredPos, ref _moveSpeed, _moveDamp * Time.timeScale);
                yield return new WaitForEndOfFrame();
            }
        } 
    }
}