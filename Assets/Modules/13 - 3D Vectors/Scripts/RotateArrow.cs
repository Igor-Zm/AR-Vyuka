using UnityEngine;

public class RotateArrow : MonoBehaviour
{
    public LineRenderer lineRenderer; // the Line Renderer component to use
    public GameObject arrow; // the arrow object to rotate

    void Update()
    {
        arrow = gameObject;
        // get the direction vector from the first point of the line to the last point of the line
        Vector3 direction = lineRenderer.GetPosition(lineRenderer.positionCount - 1) - lineRenderer.GetPosition(0);

        // get the angle between the direction vector and the forward vector of the arrow object, plus 180 degrees
        float angle = Vector3.Angle(arrow.transform.forward, direction) + 180f;

        // get the axis of rotation by taking the cross product of the forward vector and direction vector
        Vector3 axis = Vector3.Cross(arrow.transform.forward, direction);

        // rotate the arrow object towards the direction of the line
        arrow.transform.Rotate(axis, angle, Space.World);
    }
}


