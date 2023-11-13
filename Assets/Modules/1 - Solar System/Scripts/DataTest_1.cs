using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataTest_1 : MonoBehaviour
{
    [Range(0,1f)]
    public float value = 0f;
    public float speed = 0.1f;

    public Transform target;
    public double divideBy = 1f;

    void Start()
    {
        
    }

    void Update()
    {
        value += speed*Time.deltaTime;
        if (value >= 1)
            value = 0;

        //int day = Mathf.RoundToInt(value * SolarSystemData.mars.Length/3);
        //day = Mathf.Clamp(day,0,(SolarSystemData.mars.Length/3)-1);
        //double x = SolarSystemData.mars[day,0] / divideBy;
        //double z = SolarSystemData.mars[day,1] / divideBy;
        //double y = SolarSystemData.mars[day,2] / divideBy;

        //target.transform.position = new Vector3((float)x, (float)y, (float)z);
        
    }
}
