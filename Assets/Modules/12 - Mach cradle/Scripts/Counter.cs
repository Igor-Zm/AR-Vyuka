using System;

[Serializable]
public class Counter : ICounter
{
    protected int _counter = 0;

    public int Value => _counter;

    public virtual void Reset() => _counter = 0;

    public virtual void CountUp() => _counter++;

    public virtual void CountDown() => _counter--;
}
