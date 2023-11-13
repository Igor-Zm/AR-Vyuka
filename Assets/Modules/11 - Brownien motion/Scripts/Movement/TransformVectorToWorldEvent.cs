using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class TransformVectorToWorldEvent : MonoBehaviour
{
    public Transform InputPOV;

    public UnityEvent<Vector3> OnTransformedVector3;


    public void TransformToWorld(Vector3 input)
    {
        Vector3 transformedVector = Quaternion.Euler(new Vector3(0f, InputPOV.eulerAngles.y, 0f)) * input;
        //transformedVector -= Quaternion.Euler(InputPOV.eulerAngles.x, 0, 0) * transformedVector;

        OnTransformedVector3?.Invoke(transformedVector);
    }

    
}
