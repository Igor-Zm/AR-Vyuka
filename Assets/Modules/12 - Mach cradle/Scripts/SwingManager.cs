using System.Collections;
using UnityEngine;
using UnityEngine.Events;

public class SwingManager : MonoBehaviour
{
    [field:SerializeField] public float BallSpeed {get; private set;}
    [SerializeField] GameObject _parent;
    [SerializeField] SpeedController[] _speedControls;

    public UnityEvent OnPreparing = new UnityEvent();
    public UnityEvent OnReady = new UnityEvent();

    Coroutine _stopLoop;

    public void Init()
    {
        _speedControls = _parent.GetComponentsInChildren<SpeedController>();
        StartSim();
    }

    public void SetSpeed(float desiredSpeed)
    {
        BallSpeed = desiredSpeed;
        //Reset();
    }

    public void Reset()
    {
        if(_stopLoop==null)
            _stopLoop = StartCoroutine(ResetSimualtion());
    }

    // void OnDisable()
    // {
    //     StopAllCoroutines();
    // }

    IEnumerator ResetSimualtion()
    {
        OnPreparing.Invoke();

        StopSim();

        while(!SimIsReady())
            yield return new WaitForFixedUpdate();

        _stopLoop = null;

        OnReady.Invoke();
        StartSim();
    }

    void StopSim()
    {
        foreach(var speedControl in _speedControls)
            speedControl.StopSwing();
    }

    void StartSim()
    {
        foreach(var speedControl in _speedControls)
            speedControl.StartSwing(BallSpeed);
    }

    private bool SimIsReady()
    {
        for (int i = 0; i < _speedControls.Length; i++)
            if(!_speedControls[i].Ready)
                return false;

        return true;
    }
}
