using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;
using TMPro;
using MathExpParser;
using org.mariuszgromada.math.mxparser;



public class evalPolarController : MonoBehaviour
{

    public LineRenderer lr;

    public int resolution = 100;

    public float range = 10f;

    public UnityEngine.UI.Slider rangeSlider;

    public TMP_InputField field;

    public Expression expression;
    public Argument arg;

    void Start()
    {
        if (resolution % 2 == 0)
            resolution++;
        positions = new Vector3[resolution];
        lr.positionCount = resolution;

        SetFunction();

        InvokeRepeating("SetFunction", 1f, 1f);

        Render();

    }
    float Eval()
    {
        double d = expression.calculate();
        return (float)d;

    }
    public string function = "";

    public void SetFunction()
    {
        function = field.text;
        arg = new Argument("theta = 1");
        expression = new Expression(function,arg);


    }
    public void Update()
    {
        range = rangeSlider.value;
        Render();
    }

    Vector3[] positions;
    int i = 0;
    public int calculationsPerFrame = 4;

    //public static (float r, float theta) CartesianToPolar(float x, float y)
    public static (float r, float theta) CartesianToPolar(float x, float y)
    {
        float r = Mathf.Sqrt(x * x + y * y);
        float theta = Mathf.Atan2(y, x);
        return (r, theta); // theta is in radians
    }

    // Convert Polar coordinates to Cartesian coordinates
    public static (float x, float y) PolarToCartesian(float r, float theta)
    {
        float x = r * Mathf.Cos(theta);
        float y = r * Mathf.Sin(theta);
        return (x, y);
    }


    [ContextMenu("Render")]
    void Render()
    {
        if (!function.Contains("theta") ||expression == null || arg == null  || !expression.checkSyntax())
            return;

        int c = calculationsPerFrame;

        while (c-- > 0)
        {


            if (i < resolution)
            {
                float frac = ((float)i / resolution);
                float x = Mathf.Lerp(0, range, frac);

                arg.setArgumentValue(x);
                float r = Eval();

                var converted = PolarToCartesian(r,x);

                positions[i] = new Vector3(converted.x,converted.y, 0);
                i++;
            }
            else
            {
                i = 0;
            }
        }

        lr.SetPositions(positions);
    }

}
