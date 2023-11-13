using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class PositonEvent : MonoBehaviour
{
    public Transform Target;
    public UnityEvent<string> OnPosChanged;
    [SerializeField] private Vector3 lastPos;
    [SerializeField] private PrecisionHelper _precision;

    void Start()
    {
        lastPos = Target.position;
    }

    void Update()
    {
        if(_precision.WithinThreshold(lastPos, Target.position))
            return;

        OnPosChanged.Invoke(Target.position.ToString());
        lastPos = Target.position;
    }
}
