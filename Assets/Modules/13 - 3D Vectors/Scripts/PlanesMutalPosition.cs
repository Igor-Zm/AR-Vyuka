using TMPro;
using UnityEngine;

public class PlanesMutalPosition : MonoBehaviour
{
    [SerializeField] private Transform[] plane1Points = new Transform[3];
    [SerializeField] private Transform[] plane2Points = new Transform[3];
    [SerializeField] private TextMeshProUGUI infoText;

    private void Update()
    {
        // Calculate the normal vectors of the planes
        Vector3 plane1Normal = Vector3.Cross((plane1Points[1].position - plane1Points[0].position),
            (plane1Points[2].position - plane1Points[0].position)).normalized;
        Vector3 plane2Normal = Vector3.Cross((plane2Points[1].position - plane2Points[0].position),
            (plane2Points[2].position - plane2Points[0].position)).normalized;

        // Calculate the distances from the origin to each plane
        float plane1Distance = Vector3.Dot(-plane1Points[0].position, plane1Normal);
        float plane2Distance = Vector3.Dot(-plane2Points[0].position, plane2Normal);

        // Check if the planes are the same
        if (Mathf.Abs(Vector3.Dot(plane1Normal, plane2Normal)) > 1 - 0.0001f &&
            Mathf.Abs(plane1Distance - plane2Distance) < 0.0001f)
        {
            infoText.text = "Roviny jsou totožné";
        }
        // Check if the planes are parallel but different
        else if (Mathf.Abs(Vector3.Dot(plane1Normal, plane2Normal)) > 1 - 0.0001f)
        {
            infoText.text = "Roviny jsou rovnobìžné rùzné";
        }
        // Check if the planes intersect
        else
        {
            infoText.text = "Roviny jsou rùznobìžné";
        }
    }
}