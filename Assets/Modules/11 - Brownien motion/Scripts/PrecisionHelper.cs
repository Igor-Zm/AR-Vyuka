using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

[Serializable]
public class PrecisionHelper
{
    [Range(0.00001f, 2f)] public float Threshold;

    public PrecisionHelper(float desiredThreshold)
    {
        Threshold = desiredThreshold;
    }
    
    public bool WithinThreshold(float input, float control)
    {
        return WithinThreshold(input, control, Threshold);
    }
    
    public bool WithinThreshold(Vector3 input, Vector3 control)
    {
        return WithinThreshold(input, control, Threshold);
    }

    public bool WithinThreshold(Quaternion input, Quaternion control)
    {
        return WithinThreshold(input, control, Threshold);
    }
    


    public static bool WithinThreshold(Quaternion input, Quaternion control, float threshold)
    {
        if (!WithinThreshold(input.x, control.x, threshold))
            return false;
        if (!WithinThreshold(input.y, control.y, threshold))
            return false;
        if (!WithinThreshold(input.z, control.z, threshold))
            return false;
        if (!WithinThreshold(input.w, control.w, threshold))
            return false;

        return true;
    }


    public static bool WithinThreshold(Vector3 input, Vector3 control, float threshold)
    {
        if (!WithinThreshold(input.x, control.x, threshold))
            return false;
        if (!WithinThreshold(input.y, control.y, threshold))
            return false;
        if (!WithinThreshold(input.z, control.z, threshold))
            return false;

        return true;
    }

    public static bool WithinThreshold(float input, float control, float threshold)
    {
        if (Mathf.Abs(input-control) <= threshold)
            return true;

        return false;
    }
}
