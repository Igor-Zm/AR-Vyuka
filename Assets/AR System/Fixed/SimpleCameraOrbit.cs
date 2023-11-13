using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using UnityEngine.EventSystems;

public class SimpleCameraOrbit : MonoBehaviour
{
    public float rotationSpeed = 5.0f;
    public float minY = -80.0f;
    public float maxY = 80.0f;
    public float zoomSpeed = 5.0f;
    public float minZoomDistance = 3.0f;
    public float maxZoomDistance = 15.0f;
    public float startingZoomDistance = 10.0f;
    public float smoothTime = 0.1f;

    private Vector2 _currentRotation;
    private Transform _parentTransform;
    private Vector3 _initialLocalPosition;
    public float _targetZoomDistance;
    private float _currentZoomDistance;
    private float _zoomVelocity;

    void Start()
    {
        _parentTransform = transform.parent;
        _parentTransform.rotation = Quaternion.LookRotation(Vector3.forward, Vector3.up);
        _currentRotation = new Vector2(_parentTransform.eulerAngles.x, _parentTransform.eulerAngles.y);


        _initialLocalPosition = transform.localPosition;
        _targetZoomDistance = -Mathf.Clamp(startingZoomDistance, minZoomDistance, maxZoomDistance);
        _currentZoomDistance = _targetZoomDistance;

        transform.localPosition = new Vector3(_initialLocalPosition.x, _initialLocalPosition.y, _currentZoomDistance);

    }

    private bool blockedLook = false;

    void Update()
    {
        if (Input.GetMouseButtonUp(0))
        {
            blockedLook = false;
        }

        // Check for touch input
        if (Input.touchCount > 0)
        {
            Touch touch1 = Input.GetTouch(0);

            // Ignore touch input if over a UI element
            if (!(EventSystem.current.currentSelectedGameObject == null))
            {
                return;
            }
        }

#if UNITY_EDITOR || UNITY_STANDALONE || UNITY_WEBGL
        if (Input.GetMouseButton(0) && !blockedLook)
        {
            if (EventSystem.current.IsPointerOverGameObject()) {
                blockedLook = true;
            }

            _currentRotation.y += Input.GetAxis("Mouse X") * rotationSpeed;
            _currentRotation.x -= Input.GetAxis("Mouse Y") * rotationSpeed;
            _currentRotation.x = Mathf.Clamp(_currentRotation.x, minY, maxY);
        }

        _targetZoomDistance += Input.mouseScrollDelta.y * zoomSpeed;
#elif UNITY_ANDROID || UNITY_IOS
        if (Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Moved)
            {
                _currentRotation.y += touch.deltaPosition.x * rotationSpeed * Time.deltaTime;
                _currentRotation.x -= touch.deltaPosition.y * rotationSpeed * Time.deltaTime;
                _currentRotation.x = Mathf.Clamp(_currentRotation.x, minY, maxY);
            }
        }

        if (Input.touchCount == 2)
        {
            Touch touch1 = Input.GetTouch(0);
            Touch touch2 = Input.GetTouch(1);

            float currentTouchDistance = Vector2.Distance(touch1.position, touch2.position);
            float previousTouchDistance = Vector2.Distance(touch1.position - touch1.deltaPosition, touch2.position - touch2.deltaPosition);
            float touchDelta = currentTouchDistance - previousTouchDistance;

            _targetZoomDistance += touchDelta * zoomSpeed * Time.deltaTime;
        }
#endif

        Quaternion targetRotation = Quaternion.Euler(_currentRotation.x, _currentRotation.y, _parentTransform.eulerAngles.z);
        _parentTransform.rotation = Quaternion.Slerp(_parentTransform.rotation, targetRotation, smoothTime);
        _parentTransform.eulerAngles = new Vector3(_parentTransform.eulerAngles.x, _parentTransform.eulerAngles.y, 0);

        _targetZoomDistance = Mathf.Clamp(_targetZoomDistance, -maxZoomDistance, -minZoomDistance);
        _currentZoomDistance = Mathf.SmoothDamp(_currentZoomDistance, _targetZoomDistance, ref _zoomVelocity, smoothTime);
        transform.localPosition = new Vector3(_initialLocalPosition.x, _initialLocalPosition.y, _currentZoomDistance);
    }
}