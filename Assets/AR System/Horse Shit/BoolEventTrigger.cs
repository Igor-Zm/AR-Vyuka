using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class BoolEventTrigger : MonoBehaviour
{
    public UnityEvent OnTrueRecived;
    public UnityEvent OnFalseRecived;

    public void Trigger(bool value)
    {
        if(value) OnTrueRecived.Invoke();
        else OnFalseRecived.Invoke();
    }
}
