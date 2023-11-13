using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class DampedMovement : MovementBase, IUpdateable
{
    public Vector3 DesiredPos;
    public float Dampening = .5f;
    private Vector3 _speed;

    public DampedMovement(Transform target, float damp ,bool useLocalTrans = false) : base(target, useLocalTrans) 
    {
        Dampening = Mathf.Clamp01(damp);
        DesiredPos = target.position;
    }

    public override void MoveBy(Vector3 offset) => DesiredPos+=offset;

    public override void MoveTo(Vector3 newPosition) => DesiredPos = newPosition;

    public void Tick()
    {
        Target.position = Vector3.SmoothDamp(Target.position,
            DesiredPos, ref _speed, Dampening * Time.timeScale);
    }
}
