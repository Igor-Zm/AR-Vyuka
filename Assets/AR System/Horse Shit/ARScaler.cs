using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

[RequireComponent(typeof(ARSimManager))]
public class ARScaler : MonoBehaviour
{
    public float MaxScale;
    public float MinScale;

    private float Scale {get => transform.localScale.x;}

    [Space()]
    [SerializeField] private ARSessionOrigin origin;
    [SerializeField] private Transform arCursor;
    private GameObject simGO;

    void Start() =>  simGO = GetComponent<ARSimManager>().SimGO;

    public void ScaleBy(float input) => SetScale(input+Scale); 
    public void SetScale(float input)
    {
        float newScale = Mathf.Clamp(MinScale, MaxScale, input);
        transform.localScale = Vector3.one * newScale;
        simGO.transform.position = simGO.transform.position.normalized * (newScale/MaxScale);
        //origin.MakeContentAppearAt(simGO.transform,arCursor.position);
    }
}
