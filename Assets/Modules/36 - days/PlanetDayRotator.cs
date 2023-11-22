using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlanetDayRotator : MonoBehaviour
{
    public float[] lenghts = new float[]{ 84480f,349920f,1440f,1480f,596f,642f,1032f,966f};
    public float speed = 0.1f;
    public List<Transform> transforms = new List<Transform>();
    public Vector3 axis;
    void Start()
    {
        
    }

    
    void Update()
    {
        for (int i = 0; i < lenghts.Length; i++) 
        {
            transforms[i].Rotate(axis, speed*Time.deltaTime* (1f/lenghts[i]));
        }
    }
}
