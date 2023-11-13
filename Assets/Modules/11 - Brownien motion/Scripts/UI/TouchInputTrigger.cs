using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

//[RequireComponent(typeof(Image))]
public class TouchInputTrigger : MonoBehaviour, IDragHandler
{
    public float DragXSens = 1;
    public float DragYSens = 1;
    public bool InvertOneTouchXAxis = false;
    public bool InvertOneTouchYAxis = false;
    public bool InvertTwoTouchesXAxis = false;
    public bool InvertTwoTouchesYAxis = false;
    
    [Space()]
    public float ZoomSens = 1;
    public bool InvertZoom = false;
    [Min(0f)] [SerializeField] private float PinchToMovementRatioThreshold = 160;


    public UnityEvent<float> OnPinch = new UnityEvent<float>();
    public UnityEvent<Vector2> OnOneTouchDrag = new UnityEvent<Vector2>();
    public UnityEvent<Vector2> OnTwoTouchesDrag = new UnityEvent<Vector2>();



    private Vector2 Sens {get{return new Vector2(DragXSens, DragYSens);}}

    private float GetNormalizedPinch(float rawPinch) => (rawPinch/Screen.dpi) * ZoomSens;

    private float GetRawPinch()
    {
        Vector2[] lastPos = new[]
        {
            LastPos(Input.touches[0]),
            LastPos(Input.touches[1])
        };

        float lastDis = Vector2.Distance(lastPos[0], lastPos[1]);
        float currDis = Vector2.Distance(Input.touches[0].position, Input.touches[1].position);

        return (currDis - lastDis);
    }

    private void PinchInput()
    {
        float normalizedPinch = GetNormalizedPinch(GetRawPinch());

        if(InvertZoom)
            normalizedPinch *= -1f;

        OnPinch.Invoke(normalizedPinch);
    }


    private void OneFingerDragInput()
    {
        Vector2 dragInput = DragInputProcessing(Input.touches[0].deltaPosition);

        if (InvertOneTouchXAxis)
            dragInput.x *= -1;
        if (InvertOneTouchYAxis)
            dragInput.y *= -1;

        OnOneTouchDrag?.Invoke(dragInput);
    }

     private void TwoFingerDragInput()
    {
        
        Vector2 dragInput = DragInputProcessing(GetRawAvrageMovement(2));

        if (InvertTwoTouchesXAxis)
            dragInput.x *= -1;
        if (InvertTwoTouchesYAxis)
            dragInput.y *= -1;

        
        OnTwoTouchesDrag?.Invoke(dragInput);
    }

    private Vector2 GetRawAvrageMovement(int numberOfInputs)
    {
        Vector2 avrageDelta = Vector2.zero;
        for (int i = 0; i < numberOfInputs; i++)
            avrageDelta+=Input.touches[i].deltaPosition;
        
        avrageDelta /= numberOfInputs;
        return avrageDelta;
    }

    private Vector2 DragInputProcessing(Vector2 input)
    {
        input /=  Screen.dpi;
        input*= new Vector2(DragXSens, DragYSens);

        
        return input;
    }

    private Vector2 LastPos(Touch input) => input.position - input.deltaPosition;

    public void OnDrag(PointerEventData eventData)
    {
        if (Input.touchCount == 0)
            return;
        
        if (Input.touchCount == 1)
        {
            OneFingerDragInput();
            return;
        }

        Vector2 rawMovement = GetRawAvrageMovement(2);
        float rawPinch = GetRawPinch();


        //if(Mathf.Abs(rawPinch)  > rawMovement.magnitude*PinchToMovementRatioThreshold)
            PinchInput();
        //else
            TwoFingerDragInput();

    }

    private Vector2 GetScreenSize() => new Vector2(Screen.width, Screen.height);
}