using System;
using System.Security.Cryptography.X509Certificates;
using SolarSystem;
using Unity.Mathematics;
using UnityEngine;
using Object = UnityEngine.Object;


public class PlanetBehavior
{
    public GameObject Planet { get; private set; }
    public GameObject Center { get; private set; }
    private GameObject planet_prefab;
    private double[,] orbit_data;
    private readonly float scale;
    private float time;
    private float time_expo;
    private readonly float year_period;
    private readonly float rotation_period;
    private readonly bool counter_clock_spin;


    public PlanetBehavior(GameObject planet, GameObject center, double[,] orbit_data, float scale, float year_period,
        float rotation_period, bool counter_clock = true)
    {
        this.planet_prefab = planet;
        this.Center = center;
        this.orbit_data = orbit_data;
        this.year_period = year_period;
        this.time_expo = 365 / year_period;
        this.scale = scale;
        this.rotation_period = rotation_period;
        this.counter_clock_spin = counter_clock;
        this.Planet = Object.Instantiate(planet, GetStep(0), planet.transform.rotation);
        Stop();
    }

    ~PlanetBehavior()
    {
        Object.Destroy(Planet);
    }

    public void MoveInTime(float MoveBy)
    {
        time += MoveBy * time_expo;

        if (time > 2 * year_period)
            time %= year_period;

        UpdatePos();
        //UpdateRot();
    }


    private void UpdatePos()
    {
        float time_var = time % year_period;
        float calculated_index = (orbit_data.Length-1) / 100 * (time_var / year_period);

        if (calculated_index >= orbit_data.GetLength(0))
            calculated_index -= orbit_data.GetLength(0);
        
        if (planet_prefab.name=="MOON")
        {
            Debug.Log("Time: "+time_var+"| i -> "+ calculated_index);
            Debug.Log(orbit_data.GetLength(0));
        }

        float sub_time = calculated_index % 1;
        int curr_step = (int)(calculated_index - sub_time);
        

        Vector3 first_step = GetStep(curr_step);

        curr_step++;

        if (curr_step >= orbit_data.GetLength(0))
            curr_step = 0;
        
        
        Vector3 second_step = GetStep(curr_step);

        Vector3 desired_pos = Vector3.Lerp(first_step, second_step, sub_time);

        Planet.transform.position = Center.transform.position + desired_pos;
    }

    private void UpdateRot()
    {
        float rotation = 3.6f * (time % rotation_period * 100 / rotation_period);
        Planet.transform.Rotate((counter_clock_spin ? Vector3.back : Vector3.forward) * rotation);
    }

    private Vector3 GetStep(int index)
    {
        double x = (orbit_data[index, 0] * scale);
        double y = (orbit_data[index, 2] * scale);
        double z = (orbit_data[index, 1] * scale);

        return new Vector3((float)x, (float)y, (float)z);
    }

    public void Restart()
    {
        time = 0;
        UpdatePos();
    }

    public void Start()
    {
        Planet.SetActive(true);
    }

    public void Stop()
    {
        Planet.SetActive(false);
    }
}