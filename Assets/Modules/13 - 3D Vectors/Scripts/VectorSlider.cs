using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class VectorSlider : MonoBehaviour
{
    [field:SerializeField]public Text Label  {get; private set;}
    [SerializeField] Slider SliderX;
    [SerializeField] Slider SliderY;
    [SerializeField] Slider SliderZ;
    [field:SerializeField]public Vector3 Value  {get; private set;}
    [SerializeField] private bool SendValueOnInit = false;

    public UnityEvent<Vector3> ValueChanged;

    void Start()
    {
        SliderX.onValueChanged.AddListener(RegisterInput);
        SliderY.onValueChanged.AddListener(RegisterInput);
        SliderZ.onValueChanged.AddListener(RegisterInput);

        if(SendValueOnInit)
            RegisterInput(0);
    }

    private void RegisterInput(float useless)
    {
        Value = new Vector3(SliderX.value, SliderY.value, SliderZ.value);
        ValueChanged.Invoke(Value);
    }

}
