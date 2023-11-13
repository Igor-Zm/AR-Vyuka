using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARMaterialSetter : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }
    public Material planeMat;
    public Material goneMaterial;
    void Update()
    {
        
        foreach (MeshRenderer mr in GetComponentsInChildren<MeshRenderer>())
        {
            mr.sharedMaterial = planeMat;
            mr.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;

        }

        LineRenderer[] lines = FindObjectsOfType<LineRenderer>();
        foreach (var item in lines)
        {
            item.material = goneMaterial;
        }
    }
}
