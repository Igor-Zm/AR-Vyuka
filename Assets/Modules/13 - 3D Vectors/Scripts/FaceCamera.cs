using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceCamera : MonoBehaviour
{
    Camera cam;
    private void Start()
    {
        cam = FindObjectOfType<Camera>();
    }

    void Update()
    {
        // Find the direction to the camera
        Vector3 directionToCamera =  cam.transform.position - transform.position;

        // Calculate the rotation needed to look at the camera with the desired offset
        Quaternion lookRotation = Quaternion.LookRotation(directionToCamera) * Quaternion.Euler(0, 180, 0);

        // Apply the rotation to the object
        transform.rotation = lookRotation;
    }

}
