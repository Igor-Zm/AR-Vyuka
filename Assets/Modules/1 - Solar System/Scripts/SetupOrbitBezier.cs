using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BezierSolution;

public class SetupOrbitBezier : MonoBehaviour
{
    public GameObject point;
    public Transform parent;
    [Range(0,7)]
    public int planet = 0;


    double[,] GetOrbit(int value) {
        switch (value)
        {
            case 0:
                return SolarSystemDoubles.Mercury_N;
            case 1:
                return SolarSystemDoubles.Venus_N;
            case 2:
                return SolarSystemDoubles.Earth_N;
            case 3:
                return SolarSystemDoubles.Mars_N;
            case 4:
                return SolarSystemDoubles.Jupiter_N;
            case 5:
                return SolarSystemDoubles.Saturn_N;
            case 6:
                return SolarSystemDoubles.Uran_N;
            case 7:
                return SolarSystemDoubles.Neptune_N;
            default:
                return null;
        }
    }
    int GetOrbitLength(int value) {
        switch (value)
        {
            case 0:
                return 88;
            case 1:
                return 225;                    
            case 2: 
                return 365;
            case 3:
                return 687;
            case 4:
                return 4333;
            case 5:
                return 10756;
            case 6:
                return 365 * 84;
            case 7:
                return 365 * 165;
            default:
                return 365;
        }
    }

    LineRenderer lr;

    public void Start()
    {
        foreach (Transform item in parent)
        {
            Destroy(item.gameObject);
        }


        OrbitData orbit = new OrbitData(GetOrbitLength(planet), GetOrbit(planet));

        //GetComponent<BezierSpline>().Initialize(orbit.sampleCount);
        lr = GetComponent<LineRenderer>(); 
        lr.positionCount = orbit.sampleCount;
        for (int i = 0; i < orbit.sampleCount; i++)
        {
            double x = orbit.samples[i, 0] / (iSolarSystem.GetDiv(planet) );
            double z = orbit.samples[i, 1] / (iSolarSystem.GetDiv(planet) );
            double y = orbit.samples[i, 2] / (iSolarSystem.GetDiv(planet) );

            Vector3 v = new Vector3((float)x, (float)y, (float)z) + transform.position;

            lr.SetPosition(i,v);
        }

        //GetComponent<BezierSpline>().AutoConstructSpline();
    }

    void Update()
    {
    }
}
