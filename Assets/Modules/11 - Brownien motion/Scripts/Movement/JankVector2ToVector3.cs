using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;


public class JankVector2ToVector3 : AxisBehavior
{
    public Axis InputXTo = Axis.X;
    public Axis InputYTo = Axis.Y;
    public UnityEvent<Vector3> OnConvertToVector3;
    public void Convert(Vector2 input)
    {
        Vector3 output = Vector3.zero;
        SetValueToAxis(InputXTo, ref output, input.x);
        SetValueToAxis(InputYTo, ref output, input.y);
        OnConvertToVector3?.Invoke(output);
    }
}
