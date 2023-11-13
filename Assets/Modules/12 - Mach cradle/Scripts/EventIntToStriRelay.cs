using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class EventIntToStriRelay : MonoBehaviour
{
    public UnityEngine.Events.UnityEvent<string> OnRelay;

    public void ReciveInt(int input) => OnRelay.Invoke(input.ToString());
}
