using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[Serializable]
public class SpeedController : MonoBehaviour
{
    [field:SerializeField] public bool Ready {get; private set; } = true;
    [Range(0, 1)] public float SpeedDump = .5f;
    [SerializeField] Rigidbody rb_sphere;
    [SerializeField] Transform joint;
    [SerializeField] Vector3 _startRot;
    [SerializeField] float _stopVelo = 0f;
    [SerializeField] PrecisionHelper _precision = new PrecisionHelper(.2f);


    void Start()
    {
        _startRot = /*joint.transform.localEulerAngles*/ Vector3.zero;
    }

    public void StartSwing(float Speed)
    {
        if(!Ready)
            return;
        rb_sphere.AddRelativeForce(Vector3.right * Speed, ForceMode.VelocityChange);
    }

    public void StopSwing()
    {
        if(!Ready)
            return;
        Ready = false;
        StartCoroutine(StopAnim());
    }

    IEnumerator StopAnim()
    {
        rb_sphere.useGravity = false;
        while (true)
        {
            Vector3 rotation = joint.transform.localEulerAngles;

            rotation.y = Mathf.SmoothDampAngle(rotation.y, _startRot.y, ref _stopVelo, SpeedDump);

            joint.transform.localRotation = Quaternion.Euler(rotation);

            ZeroVelo();

            if(_precision.WithinThreshold(rotation.y,_startRot.y))
            {
                rb_sphere.Sleep();
                break;
            }
            
            yield return new WaitForFixedUpdate();
        }
        ZeroVelo();
        ResetPos();
        rb_sphere.useGravity = true;
        Ready = true;
    }

    private void ZeroVelo()
    {
        rb_sphere.angularVelocity = Vector3.zero;
        rb_sphere.velocity = Vector3.zero;
    }

    private void ResetPos()
    {
        joint.transform.localRotation = Quaternion.Euler(_startRot);
        _stopVelo = 0;
    }



}
