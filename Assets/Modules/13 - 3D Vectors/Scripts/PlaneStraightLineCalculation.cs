using System.Reflection;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;

public class PlaneStraightLineCalculation : MonoBehaviour
{
    [SerializeField] private Transform linePoint1;
    [SerializeField] private Transform linePoint2;
    [SerializeField] private Transform planePoint;
    [SerializeField] private Vector3 planeNormal;
    [SerializeField] private Transform[] planePoints = new Transform[3];
    [SerializeField] private TextMeshProUGUI infoText;

    private void Update()
    {
        planeNormal = GetNormal();

        // Calculate the direction vector of the line
        Vector3 lineDirection = linePoint2.position - linePoint1.position;

        // Calculate the distance from the plane to the line
        float denominator = Vector3.Dot(lineDirection.normalized, planeNormal.normalized);
        if (Mathf.Abs(denominator) < 0.0001f)
        {
            // The line is parallel to the plane
            if (Mathf.Abs(Vector3.Dot((linePoint1.position - planePoint.position), planeNormal)) < 0.0001f)
            {
                // The line is contained in the plane
                infoText.text = "Přímka leží v rovině";
            }
            else
            {
                // The line does not intersect the plane
                infoText.text = "Přímka je rovnoběžná s rovinou, ale neleží v ní";
            }
        }
        else
        {
            // The line intersects the plane at one point
            /* - intersection point calculation
            float numerator = Vector3.Dot((planePoint.position - linePoint1.position), planeNormal);
            float distance = numerator / denominator;
            Vector3 intersectionPoint = linePoint1.position + lineDirection.normalized * distance;
            */
            infoText.text = "Přímka je různoběžná s rovinou";
        }
    }

    Vector3 GetNormal()
    {
        return Vector3.Cross(planePoints[1].position - planePoints[0].position, planePoints[2].position - planePoints[0].position).normalized;
    }
}






