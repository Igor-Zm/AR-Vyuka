using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;


public class MouseInput : MonoBehaviour, IDragHandler, IPointerDownHandler, IPointerUpHandler
{
    public float MovementSens = 1;
    public float ZoomSens = 1;

    public bool InvertXAxis = false;
    public bool InvertYAxis = false;
    public bool InvertZoom = false;

    [SerializeField] private Vector2 _lastPos;

    public UnityEvent<float> OnZoom = new UnityEvent<float>();
    public UnityEvent<Vector2> OnMovement = new UnityEvent<Vector2>();

    private void Update()
    {
        if(!TryGetZoom(out float zoom))
            return;
        
        if(OnZoom!=null)
            OnZoom.Invoke(zoom);
    }


    private bool TryGetZoom(out float zoom)
    {
        zoom = 0;

        float output = Input.mouseScrollDelta.y;
        if (output == 0)
            return false;
        

        zoom = output;// * ZoomSens;
        if (InvertZoom)
            zoom *= -1;
        
        return true;
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (Input.touchCount != 0)
            return;


        Vector2 movement = ((Vector2)Input.mousePosition - _lastPos); //* MovementSens;
        _lastPos = Input.mousePosition;
        
        if (InvertXAxis)
            movement.x *= -1;
        if (InvertYAxis)
            movement.y *= -1;


        if (OnMovement != null)
            OnMovement.Invoke(movement * 1);;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (Input.touchCount != 0 && _lastPos == Vector2.zero)
            return;

        _lastPos = Input.mousePosition;
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        _lastPos = Vector2.zero;
    }
}