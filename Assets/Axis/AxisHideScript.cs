using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AxisHideScript : MonoBehaviour
{
    public Transform camera;
    public float tolerance;

    public GameObject axisX;
    public GameObject axisY;
    public GameObject axisZ;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (camera == null)
            return;

            axisX.SetActive(!((1 - Mathf.Abs(Vector3.Dot(camera.forward, Vector3.right))) < tolerance));
            axisY.SetActive(!((1 - Mathf.Abs(Vector3.Dot(camera.forward, Vector3.up))) < tolerance));
            axisZ.SetActive(!((1 - Mathf.Abs(Vector3.Dot(camera.forward, Vector3.forward))) < tolerance));
        
    }
}
