using System;
using System.Collections.Generic;
using UnityEngine;


public class EventSingleToStriRelay : MonoBehaviour
{
    public UnityEngine.Events.UnityEvent<string> OnRelay;
    [SerializeField] int roundToDecimal = 2;
    [SerializeField] char decimalSeparator = '.';

    public void ReciveSingle(float input)
    {
        string formated = String.Format("{0:0."+ new string('#',roundToDecimal) +"}", input);
        string output = formated.Replace(',', decimalSeparator);
        OnRelay.Invoke(output); 
    }
}
