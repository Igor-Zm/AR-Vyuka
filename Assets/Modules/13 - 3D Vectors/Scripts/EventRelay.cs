using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class EventRelay : MonoBehaviour
{
    public UnityEvent OnTrigger;
    public void Trigger() => OnTrigger.Invoke();
}
