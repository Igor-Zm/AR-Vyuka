using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cgpt_orbit : MonoBehaviour
{
    public GameObject sun;
    public float orbitSpeed = 1;
    public float orbitDistance = 1;
    public float semiMajorAxis = 1;
    public float orbitEccentricity = 0.0167f;
    public float axialTilt = 23.4f; // Earth's axial tilt in degrees
    public float orbitInclination = 7.155f; // Earth's orbit inclination in degrees

    void Start()
    {
        // set initial position of Earth based on orbit distance
        transform.position = new Vector3(orbitDistance, 0, 0);
    }

    void Update()
    {
        // calculate elliptical orbit
        float orbitPeriod = 365.25636f; // days
        float orbitProgress = Time.time / (orbitPeriod * 24 * 60 * 60); // convert days to seconds
        float angle = orbitProgress * 2 * Mathf.PI * orbitSpeed;
        float x = semiMajorAxis * (1 - orbitEccentricity * orbitEccentricity) / (1 + orbitEccentricity * Mathf.Cos(angle));
        float y = x * Mathf.Sin(angle) * Mathf.Sin(axialTilt);
        float z = x * Mathf.Cos(angle);
        transform.position = new Vector3(x, y, z);
        transform.LookAt(sun.transform);

    }
}

