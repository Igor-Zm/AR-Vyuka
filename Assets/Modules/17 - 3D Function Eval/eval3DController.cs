using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;
using TMPro;
using MathExpParser;
using System;
using org.mariuszgromada.math.mxparser;
using Unity.Burst.Intrinsics;

public class eval3DController : MonoBehaviour
{
    public LineRenderer lrPrefab;
    public List<LineRenderer> lrGrid;
    public int gridResolution = 10;

    public int baseResolution = 20;
    public int maxResolution = 400;

    public float range = 10f;

    private List<Vector3> positions;

    public TMP_InputField field;

    public Expression expression;
    public Argument argX;
    public Argument argY;

    void Start()
    {
        Spawn();
        InvokeRepeating("SetFunction", 1f, 1f);

        SetFunction();

        BeginRender();
    }

    void Spawn()
    {
        lrGrid = new List<LineRenderer>();
        for (int y = 0; y < gridResolution * 2; y++)
        {
            lrGrid.Add(Instantiate(lrPrefab, transform));

        }

    }
    float Eval()
    {

        double d = expression.calculate();
        return (float)d;

    }
    private string function = "";

    public void SetFunction()
    {
        function = field.text;

        argX = new Argument("x = 1");
        argY = new Argument("y = 1");
        expression = new Expression(function, argX,argY);

        BeginRender();

    }
    public bool refresh = false;
    private void Update()
    {
        if (refresh)
            Render();
    }

    void BeginRender() {
        refresh = true;
        x1 = 0;
        x2 = gridResolution;
    }

    int x1 = 0;
    int x2 = 0;

    [ContextMenu("Render")]
    void Render()
    {
        if (!function.Contains("y") || !function.Contains("x") || expression == null || argX == null || argY == null || !expression.checkSyntax())
            return;

        if (x1 < gridResolution)
        {
            Vector3[] positions = new Vector3[maxResolution];

            LineRenderer line = lrGrid[x1];
            line.positionCount = maxResolution;

            float gridXPos = Mathf.Lerp(-range, range, x1 / (float)(gridResolution - 1));

            for (int z = 0; z < maxResolution; z++)
            {
                float frac = ((float)z / (maxResolution - 1));
                float zPos = Mathf.Lerp(-range, range, frac);

                argX.setArgumentValue(gridXPos);
                argY.setArgumentValue(zPos);

                float y = Eval();
                positions[z] = new Vector3(gridXPos, y, zPos);
            }

            line.SetPositions(positions);

            x1++;
        }
        else if (x2 < gridResolution * 2)
        {
            Vector3[] positions = new Vector3[maxResolution];

            LineRenderer line = lrGrid[x2];
            line.positionCount = maxResolution;

            float gridXPos = Mathf.Lerp(-range, range, (x2 - gridResolution) / (float)(gridResolution - 1));

            for (int z = 0; z < maxResolution; z++)
            {
                float frac = ((float)z / (maxResolution - 1));
                float zPos = Mathf.Lerp(-range, range, frac);

                argY.setArgumentValue(gridXPos);
                argX.setArgumentValue(zPos);

                float y = Eval();
                positions[z] = new Vector3(zPos, y, gridXPos);
            }

            line.SetPositions(positions);
            x2++;
        }
        else {
            refresh = false;
        }
    }

}
