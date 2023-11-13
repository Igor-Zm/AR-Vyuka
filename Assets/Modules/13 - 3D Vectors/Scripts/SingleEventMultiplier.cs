using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SingleEventMultiplier : MonoBehaviour
{
    public float Multiplier = 1f; 
    public UnityEvent<float> OnMultiplication;

    public void Multiply(float multiply) => OnMultiplication.Invoke(multiply*Multiplier);
}
