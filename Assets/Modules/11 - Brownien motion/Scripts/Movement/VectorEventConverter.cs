using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class VectorEventConverter : AxisBehavior
{
    public enum ConvertOptions{
        Float,
        Vector2,
        Vector3,
    }

    public ConvertOptions ConvertTo = ConvertOptions.Vector3;

    public Axis InputXTo = Axis.X;
    public Axis InputYTo = Axis.Y;
    public Axis InputZTo = Axis.Z;

    public UnityEvent<float> OnConvertToFloat;
    public UnityEvent<Vector2> OnConvertToVector2;
    public UnityEvent<Vector3> OnConvertToVector3;

    public void Convert(object input)
    {   
        Vector3 output = Vector3.zero;

        Debug.Log(input.GetType());

        if(input.GetType()==typeof(float))
            output = ConvertFloat((float)input);
        else if(input.GetType()==typeof(Vector2))
            output = ConvertVector2((Vector2)input);
        else if(input.GetType()==typeof(Vector3))
            output = ConvertVector3((Vector3)input);
        else 
            Debug.LogWarning("Trying to convert invalid TYPE. You can input only flaot, Vector2 or Vector3!", this);

        switch(ConvertTo)
        {
            case ConvertOptions.Float:
                OnConvertToFloat?.Invoke(output.x);
                return;
            case ConvertOptions.Vector2:
                OnConvertToVector2?.Invoke((Vector2)output);
                return;
            case ConvertOptions.Vector3:
                OnConvertToVector2?.Invoke(output);
                return;
        }
    }


    protected virtual Vector3 ConvertFloat(float input) 
    => GetAxisVector(InputXTo) * input;
    

    protected virtual Vector3 ConvertVector2(Vector2 input)
    {
        Vector3 output = Vector3.zero;
        SetValueToAxis(InputXTo, ref output, input.x);
        SetValueToAxis(InputYTo, ref output, input.y);
        return output;
    }

    protected virtual Vector3 ConvertVector3(Vector3 input)
    {
        Vector3 output = Vector3.zero;
        SetValueToAxis(InputXTo, ref output, input.x);
        SetValueToAxis(InputYTo, ref output, input.y);
        SetValueToAxis(InputZTo, ref output, input.z);
        return output;
    }
}
