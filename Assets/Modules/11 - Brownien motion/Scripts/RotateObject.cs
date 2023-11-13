using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateObject : AxisBehavior
{
    public Transform GO;
    public Axis RotatationAxis;

    public void RotateBy(Vector2 amount)
    {
        GO.transform.Rotate(GetAxisVector(RotatationAxis),amount.x);
    }
}
