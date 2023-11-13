using System.Collections;
using System.Collections.Generic;
using UnityEngine;

abstract public class AxisBehavior : MonoBehaviour
{
    public enum Axis
    {
        X,
        Y,
        Z
    }

    protected Vector3 GetAxisVector(Axis axis)
    {
        switch (axis)
        {
            case Axis.X:
                return Vector3.right;
            case Axis.Y:
                return Vector3.up;
            case Axis.Z:
                return Vector3.forward;
        }

        return Vector3.zero;
    }

    protected float GetValueFromAxis(Axis axis, Vector3 input)
    {
        switch (axis)
        {
            case Axis.X:
                return input.x;
            case Axis.Y:
                return input.y;
            case Axis.Z:
                return input.z;
        }

        return 0;
    }

    protected void SetValueToAxis(Axis axis, ref Vector3 input, float value)
    {
        switch (axis)
        {
            case Axis.X:
                input.x = value;
                return;
            case Axis.Y:
                input.y = value;
                return;
            case Axis.Z:
                input.z = value;
                return;
        }
    }

    protected void AddValueToAxis(Axis axis, ref Vector3 input, float value)
    {
        SetValueToAxis(axis, ref input, GetValueFromAxis(axis, input) + value);
    }

    protected float SmoothDampVectorByAxis(Axis axis, Vector3 curr, float target, ref Vector3 speed, float damp)
    {
        switch (axis)
        {
            case Axis.X:
                return Mathf.SmoothDamp(curr.x, target, ref speed.x, damp);
            case Axis.Y:
                return Mathf.SmoothDamp(curr.y, target, ref speed.y, damp);
            case Axis.Z:
                return Mathf.SmoothDamp(curr.z, target, ref speed.z, damp);
        }

        return 0;
    }
}