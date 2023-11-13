using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SpeedMeter : MonoBehaviour
{
    [SerializeField] private Rigidbody _targetRB;
    [SerializeField] private Transform _targetTrans;
    public UnityEvent OnSwing;
    public float VeloThreshold;
    bool ready = true;

    Vector3 startRot;

    void Start()
    {
        startRot = _targetTrans.rotation.eulerAngles;
    }


    void FixedUpdate()
    { 
        float speed = _targetRB.velocity.magnitude;

        //Vector3 ballPos = _targetTrans.position-startPos;
        
        if(ready&&speed <= VeloThreshold && _targetTrans.localEulerAngles.y > 0 && _targetTrans.localEulerAngles.y < 270)
        {
            OnSwing.Invoke();
            ready = false;
        }
        else if(!ready&&speed > VeloThreshold)
            ready = true;            
    }
    

}
