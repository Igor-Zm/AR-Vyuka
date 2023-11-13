using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.XR.ARFoundation;

public class SimpleARControll2 : MonoBehaviour
{
    [SerializeField]
    private ARRaycastManager arRaycastManager;

    [SerializeField]
    private Camera arCamera;

    [SerializeField]
    private Transform modelTransform;


    [SerializeField]
    private float movementSpeed = 1.0f;

    public void SetPosition( Vector3 pos, bool resetScale = true)
    {
        modelTransform.localScale = Vector3.one;
        modelTransform.position = pos;
    }
    void Update()
    {

        // Check for touch input
        if (Input.touchCount > 0)
        {
            Touch touch1 = Input.GetTouch(0);

            // Ignore touch input if over a UI element
            if (!(EventSystem.current.currentSelectedGameObject == null))
            {
                return;
            }


            // One finger move on ground plane
            if (Input.touchCount == 1)
            {
                if (touch1.phase == TouchPhase.Moved)
                {
                    Vector3 worldDeltaPosition = arCamera.ScreenToWorldPoint(new Vector3(touch1.position.x, touch1.position.y, arCamera.nearClipPlane)) -
                                                  arCamera.ScreenToWorldPoint(new Vector3(touch1.position.x - touch1.deltaPosition.x, touch1.position.y - touch1.deltaPosition.y, arCamera.nearClipPlane));
                    worldDeltaPosition.y = 0;
                    modelTransform.position += worldDeltaPosition * movementSpeed;

                }
            }
            // Two finger interactions
            else if (Input.touchCount == 2)
            {
                Touch touch2 = Input.GetTouch(1);

                // Two finger rotation around the Y axis
                if (touch1.phase == TouchPhase.Moved || touch2.phase == TouchPhase.Moved)
                {
                    Vector2 currentVector = touch2.position - touch1.position;
                    Vector2 previousVector = (touch2.position - touch2.deltaPosition) - (touch1.position - touch1.deltaPosition);

                    float angle = Vector2.SignedAngle(previousVector, currentVector);
                    modelTransform.Rotate(Vector3.up, -angle);
                }

                // Two finger pinch zoom for scaling up or down the placed model
                if (touch1.phase == TouchPhase.Moved && touch2.phase == TouchPhase.Moved)
                {
                    float currentDistance = Vector2.Distance(touch1.position, touch2.position);
                    float previousDistance = Vector2.Distance(touch1.position - touch1.deltaPosition, touch2.position - touch2.deltaPosition);

                    float scaleFactor = currentDistance / previousDistance;
                    modelTransform.localScale *= scaleFactor;
                }
            }

        }
    }
}