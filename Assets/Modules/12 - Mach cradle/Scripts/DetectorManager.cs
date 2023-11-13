using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;


public class DetectorManager : MonoBehaviour, Initializable
{
    [SerializeField] CounterManger _counterMan;
    [SerializeField] GameObject _targetDetectors;
    [SerializeField] List<SpeedMeter> _detectors;

    public void Init()
    {
        _detectors = new List<SpeedMeter>(_targetDetectors.GetComponentsInChildren<SpeedMeter>());

        for(int i = 0; i < _detectors.Count; i++)
            _detectors[i].OnSwing.AddListener(_counterMan.GetCounters[i].CountUp);
    }

}
