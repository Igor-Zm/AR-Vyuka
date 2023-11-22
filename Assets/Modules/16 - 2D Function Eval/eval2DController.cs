using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;
using TMPro;
using MathExpParser;
using org.mariuszgromada.math.mxparser;
//using UniVRM10;


public class eval2DController : MonoBehaviour
{

    public LineRenderer lr;

    public int resolution = 100;

    public float range = 10f;


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
        arg = new Argument("x = 1");
        expression = new Expression(function,arg);


    }
    public void Update()
    {

        Render();
    }

    Vector3[] positions;
    int i = 0;
    public int calculationsPerFrame = 4;

    [ContextMenu("Render")]
    void Render()
    {
        if (!function.Contains("x") ||expression == null || arg == null  || !expression.checkSyntax())
            return;

        int c = calculationsPerFrame;

        while (c-- > 0)
        {


            if (i < resolution)
            {
                float frac = ((float)i / resolution);
                float x = Mathf.Lerp(-range, range, frac);

                arg.setArgumentValue(x);
                float y = Eval();



                positions[i] = new Vector3(x, y, 0);
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
