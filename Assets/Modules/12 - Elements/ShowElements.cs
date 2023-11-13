using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.UI;
using TMPro;

public class ShowElements : MonoBehaviour
{
    public float flipSpeed = 3f;
    public Slider slider;
    public TextMeshProUGUI handleText;
    private void Start()
    {
        slider.maxValue = transform.childCount - 1;
        slider.minValue = 0;
        //InvokeRepeating("HideAllButOne", 0f, flipSpeed);
        OnChanged();
    }
    void HideAllButOne(int showElementNum) 
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            transform.GetChild(i).gameObject.SetActive(false);
        }
        transform.GetChild(showElementNum).gameObject.SetActive(true);
    }

    public void OnChanged()
    {
        handleText.text = slider.value + 1 + "";
        HideAllButOne((int)slider.value);
    }

}
