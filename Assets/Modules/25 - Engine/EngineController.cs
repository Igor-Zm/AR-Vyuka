using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EngineController : MonoBehaviour
{
    public float speed = 1f;


    public void SetSpeed(float val)
    {
        speed = val;

    }


    void Start()
    {
        
    }

    public Animator animator;
    void Update()
    {
        animator.speed = speed;
    }
}
