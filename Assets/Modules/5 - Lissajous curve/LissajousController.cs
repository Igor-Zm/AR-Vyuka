using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LissajousController : MonoBehaviour
{

    public float t = 0.0f;
    public Function[] function = new Function[3];
    public Transform[] transform = new Transform[3];
    public Transform final;
    public float[] axis = new float[3];

    [Range(1,16)]
    int[] ratio = { 1, 1, 1 };
    private float[] ratioMult = { 1.0f, 1.0f, 1.0f };
    [Range(0.0f,1.0f)]
    public float rotation = 0;

    public TrailRenderer trail;
    public LineRenderer prerender;
    public Text ratioText;
    public Text[] functionText = new Text[3];
    


    private bool resetDraw;
    private int speed = 0;

    public int detail = 0;

    [System.Serializable]
    public enum Function
    {
        Sin,
        Cos,
        Tan
    }

    float GetValue(Function func, float time)
    {
        switch(func)
        {
            case Function.Sin:
                return Mathf.Sin(time);
            case Function.Cos:
                return Mathf.Cos(time);
            case Function.Tan:
                return Mathf.Tan(time);
        }
        return 0.0f;
    }

    // Update is called once per frame
    void Update()
    {
        t += Time.deltaTime * 3 * (speed + 1);
        UpdateRatio();

        // Update axis
        for (int i = 0; i < 3; i++)
                axis[i] = GetValue(function[i], t * ratioMult[i] + rotation);

        // Draw
        transform[0].localPosition = new Vector3(axis[0], 0, 0);
        transform[1].localPosition = new Vector3(0, axis[1], 0);
        transform[2].localPosition = new Vector3(0, 0, axis[2]);

        final.localPosition = new Vector3(axis[0], axis[1], axis[2]);

        if(resetDraw)
            trail.Clear();
        resetDraw = false;

        //Debug.Log("T is " + t);
    }

    public void RatioButtonIncrement(int axis)
    {
        ratio[(int)axis] = Mathf.Clamp(ratio[(int)axis] + 1, 1, 16);
        ratioText.text = ratio[0] + " : " + ratio[1] + " : " + ratio[2];
        UpdatePrerender();
    }

    public void RatioButtonDecrement(int axis)
    {
        ratio[(int)axis] = Mathf.Clamp(ratio[(int)axis] - 1, 1, 16);
        ratioText.text = ratio[0] + " : " + ratio[1] + " : " + ratio[2];
        UpdatePrerender();
    }

    public void ChangeFunction(int axis)
    {
        // Cycle between axis
        function[axis] = (Function)(((int)function[axis] + 1) % 3);

        functionText[axis].text = 
            function[axis] == Function.Sin ? "SIN" :
            function[axis] == Function.Cos ? "COS" :
            function[axis] == Function.Tan ? "TAN" : "ERROR";

        UpdatePrerender();
    }

    public void ChangeSpeed()
    {
        speed = ((speed + 1) % 3);
    }

    public void ResetDraw()
    {
        trail.Clear();
        resetDraw = true;
        return;
    }
    public Transform camera;
    public void UpdatePrerender()
    {
        UpdateRatio();
        prerender.positionCount = 512;

        float biggest = Mathf.Max(ratio[0],Mathf.Max(ratio[1], ratio[2]));

        Vector3 trick = Vector3.zero - camera.position; // A tiny offset to prevent Z fighting
        for (int d = 0; d < 512; d++)
        {
            float t = d * 8.0f / 512.0f * biggest;

            float x = GetValue(function[0], t * ratioMult[0] + rotation);
            float y = GetValue(function[1], t * ratioMult[1] + rotation);
            float z = GetValue(function[2], t * ratioMult[2] + rotation);

            prerender.SetPosition(d, new Vector3(x, y, z) + trick.normalized * 0.005f);
        }

        ResetDraw();
    }

    private void UpdateRatio()
    {
        float biggest = Mathf.Max(ratio[0], Mathf.Max(ratio[1], ratio[2]));
        ratioMult = new float[]{ ratio[0] , ratio[1] , ratio[2] };
        ratioMult[0] /= biggest;
        ratioMult[1] /= biggest;
        ratioMult[2] /= biggest;
    }
}