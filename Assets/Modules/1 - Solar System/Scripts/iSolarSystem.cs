using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using BezierSolution;

public class iSolarSystem : MonoBehaviour
{
    public static iSolarSystem inst;

    DateTime date;

    private float day;


    List<OrbitData> orbits;

    public List<Transform> transforms;

    public List<double> divideByTrue;
    public List<double> divideByCompressed;
    public float lerpSpeed = 1;


    public  bool compressed = false;

    public List<float> trueScales;
    public List<float> fakeScales;


    private DateTime begin = new DateTime(1800, 1, 1);

    public bool play;
    [Range(10,1000)]
    public float speed;

    public Text ModeText;
    public string[] modeStrings;

    public float GetScale(int i) {
        if (compressed)
            return fakeScales[i];
        else
            return trueScales[i];
    }
    public static double GetDiv(int i) {
        if (inst.compressed)
            return inst.divideByCompressed[i]*1000.0;
        else
            return inst.divideByTrue[i]*1000.0;
    }




    private void Awake() { 
        inst = this;
        SolarSystemDoubles.PrecalcOrbits();

        orbits = new List<OrbitData>();
        orbits.Add(new OrbitData(88, SolarSystemDoubles.Mercury));
        orbits.Add(new OrbitData(225, SolarSystemDoubles.Venus));
        orbits.Add(new OrbitData(365, SolarSystemDoubles.Earth));
        orbits.Add(new OrbitData(687, SolarSystemDoubles.Mars));
        orbits.Add(new OrbitData(4333, SolarSystemDoubles.Jupiter));
        orbits.Add(new OrbitData(10756, SolarSystemDoubles.Saturn));
        orbits.Add(new OrbitData(365 * 84, SolarSystemDoubles.Uran));
        orbits.Add(new OrbitData(365 * 165, SolarSystemDoubles.Neptune));

        ChangeSpeed(speed);
    }

    private void Start()
    {

        
        date = begin;




        InitLines();
    }

    int framesToResetTrails = 200;
    int trailReset = 0;
    private void ResetTrails() {


        for (int i = 0; i < orbits.Count; i++){

            var line = transforms[i].GetComponentInChildren<TrailRenderer>();
            if (line != null) {

                line.Clear();
            }

        }
    }
    
    private void InitLines() {
        trailReset = framesToResetTrails;

        var beziers = GetComponentsInChildren<SetupOrbitBezier>();
        foreach (var item in beziers)
        {
            item.Start();
        }

    }


    public void SwapMode() {

        compressed = !compressed;
        InitLines();
    }

    int speedMode = 0;
    public float[] speeds;
    public Text speedText;

    public void SwapSpeedMode() {
        if (speeds.Length == 0)
            return;

        speedMode++;
        speedMode %= speeds.Length;
        ChangeSpeed(speeds[speedMode]);
    }


    public void ChangeSpeed(float value) {
        speed = value;
        speedText.text = Mathf.RoundToInt( speeds[speedMode]).ToString() + "x";
    }


    private void Update()
    {
        if(play)
        day += Time.deltaTime * speed;


        if (Input.GetKeyDown(KeyCode.Space)) {
            play = !play;
        }
        if (Input.GetKeyDown(KeyCode.S)) {
            SwapMode();
        }


        UpdateTransforms();

        if (trailReset-- > 0) {
            ResetTrails();
        }

        if (ModeText && modeStrings.Length > 1) {
            if (compressed)
                ModeText.text = modeStrings[0];
            else 
                ModeText.text = modeStrings[1];
        }
    }

    void UpdateTransforms() {

        for (int i = 0; i < transforms.Count; i++) {


            Vector3 pos = GetSample(i);
            //Debug.Log(pos);
            transforms[i].localPosition = pos;

            float scale = GetScale(i);
            transforms[i].localScale = Vector3.Lerp(transforms[i].localScale, new Vector3(scale,scale,scale), lerpSpeed * Time.deltaTime);

        }
    }

    Vector3 GetSample(int i) {

        float modulled = (float)(day % Mathf.RoundToInt(orbits[i].days));
        float ratio = modulled / orbits[i].days;

        int closestIndex = Mathf.FloorToInt( ratio * orbits[i].sampleCount);
        float reminder = (ratio * orbits[i].sampleCount) - closestIndex;
        int nextIndex = ((closestIndex + 1) ) % orbits[i].sampleCount;
        Vector3 v1 = new Vector3((float)orbits[i].samples[closestIndex,0], (float)orbits[i].samples[closestIndex, 2], (float)orbits[i].samples[closestIndex, 1]);
        Vector3 v2 = new Vector3((float)orbits[i].samples[nextIndex, 0], (float)orbits[i].samples[nextIndex, 2], (float)orbits[i].samples[nextIndex, 1]);
        //Vector3 res = Vector3.Lerp(v1,v2,reminder);
        Vector3 res = Vector3.Slerp(v1,v2,reminder);
        res /= (float)iSolarSystem.GetDiv(i);
        return res;
    }
   // Vector3 GetSample2(int i) {
   //
   //     float modulled = (float)(day % Mathf.RoundToInt(orbits[i].days));
   //     float ratio = modulled / orbits[i].days;
   //     return splines[i].GetPoint(ratio);
   // }


}
