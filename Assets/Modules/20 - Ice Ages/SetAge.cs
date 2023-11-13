using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SetAge : MonoBehaviour
{
    public MeshRenderer mr;
    // Start is called before the first frame update
    void Start()
    {
        SetAgeMethod(0);
    }

    // Update is called once per frame
    void Update()
    {

    }
    public TMP_Text text;
    public string[] values;
    public void SetAgeMethod(float val)
    {
        mr.materials[0].SetFloat("_Age",val);
        text.text = values[Mathf.RoundToInt(val)];

    }
}
