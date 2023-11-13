using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class MovementBase
{
    public Transform Target {get; private set;}
    public bool UseLocalTrans;

    public MovementBase(Transform target, bool useLocalTrans = false)
    {
        this.Target = target;
        this.UseLocalTrans = useLocalTrans;
    }

    public abstract void MoveTo(Vector3 newPosition);

    public abstract void MoveBy(Vector3 offset);

}
