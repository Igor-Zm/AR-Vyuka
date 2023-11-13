using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PlaneController : MonoBehaviour
{
    public GameObject planeObject;
    public List<TMP_InputField> inputs;

    private void Start()
    {
        inputs = new List<TMP_InputField>(transform.GetComponentsInChildren<TMP_InputField>());
    }
    // Update is called once per frame
    public void OnChanged()
    {
        float a = ParseFloat(inputs[0].text);
        float b = ParseFloat(inputs[1].text);
        float c = ParseFloat(inputs[2].text);
        float d = ParseFloat(inputs[3].text);

        Plane plane = new Plane(new Vector3(a, b, c), d);

        planeObject.transform.position = plane.normal * -plane.distance;
        planeObject.transform.rotation = Quaternion.LookRotation(plane.normal, Vector3.up);
    }

    private float ParseFloat(string value)
    {
        float result;
        if (string.IsNullOrEmpty(value) || !float.TryParse(value, out result))
        {
            result = 0f;
        }
        return result;
    }
}
