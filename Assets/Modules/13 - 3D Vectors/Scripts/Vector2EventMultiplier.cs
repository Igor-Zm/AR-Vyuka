using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Vector2EventMultiplier : MonoBehaviour
{
    public Vector2 Multiplier = Vector2.one; 
    public UnityEvent<Vector2> OnMultiplication;

    public void Multiply(Vector2 multiply) => OnMultiplication.Invoke(multiply*Multiplier);
}
