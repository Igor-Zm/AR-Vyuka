using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Unity.Mathematics;

public class SliderShaderSetter : MonoBehaviour
{
    public string valueName;
    public MeshRenderer renderer;

    public float val;

    public TMP_Text text;
    public string[] texts;

    void Start()
    {
        SetVal(val);
    }

    public void SetVal(float _val) { 
        val = _val;
        renderer.materials[0].SetFloat(valueName,val);
        text.text = texts[Mathf.RoundToInt(val)];
    }



    void Update()
    {
        
    }
}
