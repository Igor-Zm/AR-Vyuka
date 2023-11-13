using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WeirdCanvasFix : MonoBehaviour
{
    public float dist = 0.1f;
    public Canvas canvas;
    // Start is called before the first frame update
    void Start()
    {
        canvas = GetComponent<Canvas>();   
    }

    bool wtf = false;
    void Update()
    {
        if (!wtf) { 
            wtf = true;
            canvas.renderMode = RenderMode.ScreenSpaceOverlay;
        }

        //if(!canvas.worldCamera.isActiveAndEnabled)
        //    canvas.worldCamera = Camera.allCameras[0];
        //
        //canvas.planeDistance = dist;
    }
}
