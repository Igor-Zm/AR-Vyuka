using System.Collections;
using System.Collections.Generic;
using AR_Project.Movement;
using UnityEngine;

public class ClampedRotation : BasicRotation
{
    [Header("Clamps Properties")]
    [SerializeField] [Range(0, 90)] [InspectorName("High Pitch Clamp")]
    private float _highPitchClamp;

    [SerializeField] [Range(0, 90)] [InspectorName("Low Pitch Clamp")]
    private float _lowPitchClamp;
    
    public float LowPitchClamp
    {
        get => _lowPitchClamp;
        set => _lowPitchClamp = Mathf.Clamp(value, 0, 90);
    }

    public float HighPitchClamp
    {
        get => _highPitchClamp;
        set => _highPitchClamp = Mathf.Clamp(value, 0, 90);
    }
    
    //Variable
    [SerializeField] private float _pitchSoFar = 0;
    

    public override void RotateBy(Vector2 input)
    {
        float pitchBy = input.y;
        float desiredPitch = _pitchSoFar + input.y;
        input.y = Mathf.Clamp(input.y, -_lowPitchClamp - desiredPitch, _highPitchClamp - desiredPitch);
            
        _pitchSoFar += input.y;
        base.RotateBy(input);
    }
}
