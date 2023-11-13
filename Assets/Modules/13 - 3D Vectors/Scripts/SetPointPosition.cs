using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SetPointPosition : MonoBehaviour
{
    public Transform point;
    public List<TMP_InputField> inputs;
    VectorRenderer vectorRenderer;

    private void Start()
    {
        vectorRenderer = FindObjectOfType<VectorRenderer>();
        vectorRenderer.Refresh();
        inputs = new List<TMP_InputField>(transform.GetComponentsInChildren<TMP_InputField>());

        Invoke(nameof(OnChanged), 0.3f);
    }

    public void OnChanged() 
    {
        float x = 0f, y = 0f, z = 0f;

        if (!string.IsNullOrEmpty(inputs[0].text) && float.TryParse(inputs[0].text, out float xValue))
        {
            x = xValue;
        }

        if (!string.IsNullOrEmpty(inputs[1].text) && float.TryParse(inputs[1].text, out float yValue))
        {
            y = yValue;
        }

        if (!string.IsNullOrEmpty(inputs[2].text) && float.TryParse(inputs[2].text, out float zValue))
        {
            z = zValue;
        }

        point.position = new Vector3(x, y, z);
        vectorRenderer.Refresh();
    }
}