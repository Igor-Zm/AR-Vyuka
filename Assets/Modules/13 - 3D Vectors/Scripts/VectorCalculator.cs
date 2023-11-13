using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class VectorCalculator : MonoBehaviour
{
    [SerializeField] VectorSlider sliderA;
    [SerializeField] VectorSlider sliderB;
    [SerializeField] SetPointPosition inputHolderA;
    [SerializeField] SetPointPosition inputHolderB;


    public UnityEvent<Vector3> OnCalculation;


    public void Add() => OnCalculation.Invoke(new Vector3(float.Parse(inputHolderA.inputs[0].text), float.Parse(inputHolderA.inputs[1].text), float.Parse(inputHolderA.inputs[2].text)) + new Vector3(float.Parse(inputHolderB.inputs[0].text), float.Parse(inputHolderB.inputs[1].text), float.Parse(inputHolderB.inputs[2].text)));
    public void CrossProduct() => OnCalculation.Invoke(Vector3.Cross(new Vector3(float.Parse(inputHolderA.inputs[0].text), float.Parse(inputHolderA.inputs[1].text), float.Parse(inputHolderA.inputs[2].text)), new Vector3(float.Parse(inputHolderB.inputs[0].text), float.Parse(inputHolderB.inputs[1].text), float.Parse(inputHolderB.inputs[2].text))));
}
