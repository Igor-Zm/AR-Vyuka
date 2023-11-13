using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttemptAtAutoSize : MonoBehaviour
{


    // Start is called before the first frame update
    void Start()
    {
        Invoke("Setup",0.1f);
    }

    public float moduleHeight = 400;
    void Setup()
    {
        RectTransform rectTransform = GetComponent<RectTransform>();
        float y = ((transform.childCount/3f)*moduleHeight) + moduleHeight;
        rectTransform.sizeDelta = new Vector2(rectTransform.sizeDelta.x,y);
        
    }
}
