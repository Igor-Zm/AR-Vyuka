using UnityEngine;
using TMPro;
using System.Drawing;
using System.Reflection;

public class EllipseDrawer : MonoBehaviour
{
    [Header("Ellipse Parameters")]
    public float ellipseWidth = 5.0f;
    public float ellipseHeight = 3.0f;
    public int segments = 100;

    public LineRenderer lineRenderer;

    public TMP_Text aText;
    public TMP_Text bText;

    public TMP_Text eText;
    public TMP_Text fText;

    private string orgA;
    private string orgB;

    public Transform E;
    public Transform F;

    private void Start()
    {
        orgA = aText.text;
        orgB = bText.text;

        if (lineRenderer == null)
        {
            Debug.LogError("No LineRenderer component attached!");
            return;
        }

    }

    public void FixedUpdate()
    {

        DrawEllipse();
    }

    public void SetA(float val)
    {
        ellipseWidth = val;

    }


    public void SetB(float val)
    {
        ellipseHeight = val;

    }

    public string ReplaceText(string letter, string value, string org) {
        
        return  org.Replace(letter, value);
    
    }
    private void DrawEllipse()
    {
        if (segments < 3) segments = 3; // Need at least 3 segments to form an ellipse

        Vector3[] ellipsePoints = new Vector3[segments + 1]; // +1 to close the loop

        for (int i = 0; i <= segments; i++)
        {
            float angle = ((float)i / segments) * 2 * Mathf.PI;
            float x = ellipseWidth * Mathf.Cos(angle);
            float y = ellipseHeight * Mathf.Sin(angle);
            ellipsePoints[i] = new Vector3(x, y, 0);
        }

        lineRenderer.positionCount = segments + 1;
        lineRenderer.SetPositions(ellipsePoints);

        aText.text = ReplaceText("a",ellipseWidth.ToString("0.00"), orgA);
        bText.text = ReplaceText("b", ellipseHeight.ToString("0.00"), orgB);

        float a = Mathf.Max(Mathf.Abs(ellipseWidth) / 2, Mathf.Abs(ellipseHeight) / 2);
        float b = Mathf.Min(Mathf.Abs(ellipseWidth) / 2, Mathf.Abs(ellipseHeight) / 2);

        float c = Mathf.Sqrt(Mathf.Abs(a * a - b * b));

        if (ellipseWidth >= ellipseHeight)
        {
            E.position = new Vector3(-c, 0, 0);
            F.position = new Vector3(c, 0, 0);
        }
        else
        {
            E.position = new Vector3(0,-c, 0);
            F.position = new Vector3(0,c,  0);
        }
        eText.text = $"E = [{E.position.x.ToString("0.00")}, {E.position.y.ToString("0.00")}]";
        fText.text = $"F = [{F.position.x.ToString("0.00")}, {F.position.y.ToString("0.00")}]";



    }
}
