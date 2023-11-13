using System;
using UnityEngine;

[Serializable]
public class LoopCounter : Counter
{
    [SerializeField] protected int _max = 1;
    [SerializeField] protected int _min = 0;

    public int Max
    {
        get => _max; 
        set
        {
            _max = value;
            if(_counter > _max)
                _counter = _min;

            if(_counter < _min)
                _counter = _max;
        }
    }

    public override void CountUp()
    {
        base.CountUp();
        if (_counter > _max)
            _counter = _min;
    }

    public override void CountDown()
    {
        base.CountDown();
        if (_counter < _min)
            _counter = _max;
    }



}