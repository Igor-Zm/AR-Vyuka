using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiffuseBall : MonoBehaviour
{

    Rigidbody rb;
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.velocity = Random.onUnitSphere * DiffuseModule.Instance.temperature;
        
    }
    private void OnCollisionEnter(Collision collision)
    {
        if(rb != null)
        rb.velocity = Random.onUnitSphere * DiffuseModule.Instance.temperature;
    }
}
