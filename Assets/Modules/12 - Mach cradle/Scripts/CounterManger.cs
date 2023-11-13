using UnityEngine;
using System.Collections;

public class CounterManger : MonoBehaviour
{    
    [SerializeField] Transform _parent;
    [SerializeField] ICounter[] _counters;

    public ICounter[] GetCounters => _counters;

    void Awake()
    {
        _counters = _parent.GetComponentsInChildren<ICounter>();
    }

    public void ResetCounters()
    {
        foreach(var counter in _counters )
            counter.Reset();
    }
}
