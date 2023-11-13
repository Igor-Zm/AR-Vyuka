using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MonoLoopCounter : MonoBehaviour, ICounter
{
    [SerializeField] LoopCounter _counter = new LoopCounter();

    public UnityEngine.Events.UnityEvent<int> OnValueChanged = new UnityEngine.Events.UnityEvent<int>();

    public int Value => _counter.Value;

    public void CountDown()
    {
        _counter.CountDown();
        OnValueChanged.Invoke(_counter.Value);
    }

    public void CountUp()
    {
        _counter.CountUp();
        OnValueChanged.Invoke(_counter.Value);
    }

    public void Reset()
    {
        _counter.Reset();
        OnValueChanged.Invoke(_counter.Value);
    }
}
