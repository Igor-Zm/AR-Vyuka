using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorMixer : MonoBehaviour
{
    public string p1;
    public string p2;
    public string p3;
    public string p4;

    public MeshRenderer mr;
    private Material mat;

    public void Set1(float val) {
        mat.SetFloat(p1,val);
    }
    public void Set2(float val) {
        mat.SetFloat(p2,val);
    }
    public void Set3(float val) {
        mat.SetFloat(p3,val);
    }
    public void Set4(float val) {
        mat.SetFloat(p4,val);
    }

    
    void Start()
    {
        mat = mr.material;
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
