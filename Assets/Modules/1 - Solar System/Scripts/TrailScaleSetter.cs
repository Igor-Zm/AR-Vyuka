using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrailScaleSetter : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        for (int i = 0; i < tr.Length; i++)
        {

            baseValuestr.Add(tr[i].widthMultiplier);
        }
        for (int i = 0; i < lr.Length; i++)
        {

            baseValueslr.Add(lr[i].widthMultiplier);
        }

    }

    public TrailRenderer[] tr;
    public LineRenderer[] lr;
    List<float> baseValuestr = new List<float>();
    List<float> baseValueslr = new List<float>();
    void Update()
    {
        for (int i = 0; i < tr.Length; i++)
        {
            tr[i].widthMultiplier= baseValuestr[i]*transform.lossyScale.x;
        }
        
        for (int i = 0; i < lr.Length; i++)
        {
            lr[i].widthMultiplier = baseValueslr[i] * transform.lossyScale.x;
        }
        
    }
}
