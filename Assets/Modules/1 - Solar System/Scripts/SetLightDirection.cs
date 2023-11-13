using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SetLightDirection : MonoBehaviour
{
    public Transform light;

    public Slider slider;
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if (slider != null)
        {
            Vector3 eulers = transform.localEulerAngles;
            eulers.y = slider.value * 360;
            transform.localEulerAngles = eulers;
        }


        Shader.SetGlobalVector("Directional_Light_Direction", light.forward);

    }

}
