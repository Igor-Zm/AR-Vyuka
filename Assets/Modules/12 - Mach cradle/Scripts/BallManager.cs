using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class BallManager : MonoBehaviour
{
    [SerializeField] BallSpawner _spawner;
    [SerializeField] SwingManager _swingMan;
    [SerializeField] ColorGenerator _colorGen;
    [SerializeField] DetectorManager _detectorMan;
    [SerializeField]float minLength = .1f;

    
    

    void Start()
    {
        _spawner.Spawn();
        _colorGen.Init();
        SetLength();
        _detectorMan.Init();
        _swingMan.Init();
    }

    void SetLength()
    {
        LengthController[] controllers = new LengthController[_spawner.DesiredCount];
        float spacing = (1-minLength)/_spawner.DesiredCount;

        for(int i = 0; i < _spawner.DesiredCount; i++)
        {
            _spawner.SpawnedGO[i].GetComponent<LengthController>().Interpolate(minLength+spacing*(i));
        }
    }

    

    
}
