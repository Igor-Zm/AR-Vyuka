using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class SetWholeToggle : MonoBehaviour
{
    public Slider slider;
    void Start()
    {
        
    }


    public void Toggle(bool val) {

        slider.wholeNumbers = val;
    }
    void Update()
    {
        
    }
}
