using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AR_Project.Controlers;

[Serializable]
public abstract class GenericScaler : MonoBehaviour
{
    [SerializeField] float MaxScale = 5f; 
    [SerializeField] float MinScale = 1f;
    [Space] 
    [SerializeField] Transform Camera;
    [SerializeField] Transform Target;
    [Space]
    [SerializeField] CameraControler camControl;
    protected float _lastScale;

    protected abstract void ApplyScale(float scale);

    protected float GetScale() => Mathf.Lerp(MinScale, MaxScale, Mathf.InverseLerp(camControl.MinDistClamp, camControl.MaxDistClamp, GetDistance()));
    protected float GetDistance() => Vector3.Distance(Camera.position, Target.position);

    void Update()
    {
        float scale = GetScale();
        if(_lastScale!=scale)
            ApplyScale(scale);
            
        _lastScale = scale;
    }
}
