using TMPro;
using UnityEngine;

public class StraightLinesMutalPosition : MonoBehaviour
{
    [SerializeField] private Transform line1Point1;
    [SerializeField] private Transform line1Point2;
    [SerializeField] private Transform line2Point1;
    [SerializeField] private Transform line2Point2;
    [SerializeField] private TextMeshProUGUI lineInfo;
    [SerializeField] private GameObject prusecik;

    public string sameText;
    public string sameDirText;
    public string diffInterText;
    public string diffText;

    private void Update()
    {
        Vector3 line1Direction = (line1Point2.position - line1Point1.position).normalized;
        Vector3 line2Direction = (line2Point2.position - line2Point1.position).normalized;

        Vector3 crossProduct = Vector3.Cross(line1Direction, line2Direction);

        // Check if lines are parallel
        if (crossProduct.sqrMagnitude < 0.0001f)
        {
            // Check if lines are coincidental
            Vector3 line1PointToLine2Point = line2Point1.position - line1Point1.position;
            float t = Vector3.Dot(line1PointToLine2Point, line1Direction) / Vector3.Dot(line1Direction, line1Direction);
            Vector3 line2PointOnLine1 = line1Point1.position + line1Direction * t;
            if ((line2PointOnLine1 - line2Point1.position).sqrMagnitude < 0.0001f)
            {
                lineInfo.text = sameText;
                //"Pøímky jsou totožné";
            }
            else
            {
                lineInfo.text = sameDirText;
                    //"Pøímky jsou rovnobìžné rùzné";
            }
        }
        else
        {
            Vector3 line1PointToLine2Point = line2Point1.position - line1Point1.position;

            // Calculate t and s values using correct formula
            float t = Vector3.Dot(line1PointToLine2Point, Vector3.Cross(line2Direction, crossProduct)) / crossProduct.sqrMagnitude;
            float s = Vector3.Dot(line1PointToLine2Point, Vector3.Cross(line1Direction, crossProduct)) / crossProduct.sqrMagnitude;

            // Check if lines intersect at a point
            if (Mathf.Abs(t - s) < 0.0001f)
            {
                lineInfo.text = diffInterText;
                //"Pøímky jsou rùznobìžné (1 spoleèný bod)";
                prusecik.transform.position = line1Point1.position + line1Direction * t;
            }
            // Check if lines are skew (no intersection point)
            else
            {
                lineInfo.text = diffText;
                //"Pøímky jsou mimobìžné";
            }
        }
    }
}
