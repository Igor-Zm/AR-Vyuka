using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;
using TMPro;
using MathExpParser;
using org.mariuszgromada.math.mxparser;

public class CustomFunctionEval : MonoBehaviour
{
    public LineRenderer lr1;
    public LineRenderer lr2;

    public int maxResolution = 400;

    public float range = 10f;

    private List<Vector3> positions;

    public TMP_InputField field;

    public float A= 1;
    public float B= 2;
    public float C= 0;

    public Expression expression;
    public Argument argA;
    public Argument argB;
    public Argument argC;
    public Argument argX;

    public void SetA(float val)
    {
        A = val;

    }


    public void SetB(float val)
    {
        B = val;

    }


    public void SetC(float val)
    {
        C = val;

    }
    void Start()
    {

        argX = new Argument($"x = 1");
        argA = new Argument($"a = {A}");
        argB = new Argument($"b = {B}");
        argC = new Argument($"c = {C}");
        expression = new Expression(function, argA, argB, argC, argX);

        Render();
    }
    float Eval()
    {
        double d = expression.calculate();
        return (float)d;

    }
    public string function  = "";

    public void FixedUpdate()
    {
        Render();


    }
    public static string RemovePlusBeforeMinus(string input)
    {
        if (string.IsNullOrEmpty(input))
        {
            return input;
        }

        while (input.Contains("+-"))
        {
            input = input.Replace("+-", "-");
        }

        return input;
    }
    bool LimitFloat(float val) {
        return !(val == float.MaxValue || val == float.MinValue || val == float.NegativeInfinity || val == float.PositiveInfinity || val == float.NaN) ;
    }
    [ContextMenu("Render")]
    void Render()
    {
        List<Vector3> positions1 = new List<Vector3>(maxResolution);
        List<Vector3> positions2 = new List<Vector3>(maxResolution);

      string replaced11 = function.Replace("a", $"{A.ToString("0.00")}");
      string replaced12 = replaced11.Replace("b", $"{B.ToString("0.00")}");
      string replaced13 = replaced12.Replace("c", $"{C.ToString("0.00")}");
      string replaced23 = string.Copy(replaced13);

        field.text ="y = " + RemovePlusBeforeMinus( replaced13);
        


        for (int i = 0; i < maxResolution; i++)
        {
            float frac = ((float)i / (maxResolution-1));
            float x1 = Mathf.Lerp(-range, 0, frac);
            float x2 = Mathf.Lerp(0, range, frac);
            if (i == 0)
                x2 = 0.001f;
            if (i == maxResolution - 1)
                x1 = -0.001f;


            argA.setArgumentValue(A);
            argB.setArgumentValue(B);
            argC.setArgumentValue(C);


            argX.setArgumentValue(x1);
            float y1 = Eval();
            argX.setArgumentValue(x2);
            float y2 = Eval();
            if (LimitFloat(y1)) {

                positions1.Add( new Vector3(x1, y1, 0));
            }
            if (LimitFloat(y2)) {

                positions2.Add( new Vector3(x2, y2, 0));
            }

        }
        lr1.positionCount = positions1.Count;
        lr2.positionCount = positions2.Count;
        lr1.SetPositions(positions1.ToArray());
        lr2.SetPositions(positions2.ToArray());
    } 

}
