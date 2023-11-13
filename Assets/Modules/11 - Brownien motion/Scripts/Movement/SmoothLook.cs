using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;

public class SmoothLook : MonoBehaviour
{
    [Range(0, 1)] public float Damp;
    public Transform Target;
    [SerializeField] private bool UseDefaultRotAsLocal;
    [SerializeField] private bool UseCurrentRotAsDefault;
    public Vector3 DefaultRot = Vector3.zero;

    [SerializeField] private Quaternion _targetRot;


    void Start()
    {
        if (UseCurrentRotAsDefault)
            DefaultRot = UseDefaultRotAsLocal ? transform.localRotation.eulerAngles : transform.rotation.eulerAngles;
    }

    void Update()
    {
        if (Target)
            _targetRot = Quaternion.LookRotation(Target.position - transform.position);
        // else
        //     _targetRot = quaternion.Euler();

        RotateToTarget(_targetRot);
    }


    private void RotateToTarget(Quaternion _desiredRot)
    {
        transform.rotation = Quaternion.Slerp(transform.rotation, _desiredRot, Damp * Time.deltaTime);
    }
}