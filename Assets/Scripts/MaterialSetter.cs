using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MaterialSetter : MonoBehaviour
{
    // Start is called before the first frame update

    public MeshRenderer mr;
    public Material material;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        mr.sharedMaterial = material;
    }
}
