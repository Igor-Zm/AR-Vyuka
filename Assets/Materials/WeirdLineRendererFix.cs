using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeirdLineRendererFix : MonoBehaviour
{
    private LineRenderer lr;
    private Material mat;

    
    void Awake()
    {

        lr = GetComponent<LineRenderer>();
        mat = lr.material;
    }

    // Update is called once per frame
    void Update()
    {
        lr.material = mat;
    }
}
