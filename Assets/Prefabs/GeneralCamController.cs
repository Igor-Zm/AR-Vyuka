using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class GeneralCamController : MonoBehaviour
{
    /*README
        How to use:
        1. Insert the cam prefab into the scene. 
        2. If you want zoom to work, you will need to have collider on any object your are looking at.
        2. Create script which will call the methods (i.e. InputManger, GameManger).
        3. Profit!!! 
        */


    /// <summary>
    /// Camera used by the script. 
    /// </summary>
    public Camera cam { get; private set; } //Main Camera

    /// <summary>
    /// Pivot is Transform, which your camera rotates around. 
    /// </summary>
    [Header("Pivot Object")] [SerializeField]
    private Transform pivot;

    public Transform GetPivot
    {
        get { return pivot; }
    }

    /// <summary>
    /// Desired position of the camera pivot, if not following object.
    /// </summary>
    [HideInInspector] public Vector3 Anchor;

    /// <summary>
    /// If null, camera will follow the anchor position.
    /// </summary>
    [Header("Object To Follow")] [SerializeField]
    private Transform FollowObject;

    /// <summary>
    /// If camera is following object --> true
    /// If camera is following static point 
    /// </summary>
    public bool IsFollowing
    {
        get
        {
            if (FollowObject == null)
                return false;
            return true;
        }
    }

    /// <summary>
    /// For getting Transform if the followed object,
    /// if the cam is following one.
    /// </summary>
    /// <param name="follow_trans">Returns Transform of the followed object, if present</param>
    /// <returns>If cam is following object -> true; false otherwise</returns>
    public bool TryGetFollowTrans(out Transform follow_trans)
    {
        follow_trans = FollowObject;

        if (IsFollowing)
            return true;
        return false;
    }

    /// <summary>
    /// Sets object to be followed and starts following it. 
    /// </summary>
    /// <param name="obj">Transform of the obj to be followed</param>
    public void SetFollowObject(Transform obj)
    {
        this.FollowObject = obj;
        pivot_velocity = Vector3.zero;
    }

    /// <summary>
    /// Stops following your object, and returns to following the pivot. 
    /// </summary>
    public void DisableFollow()
    {
        FollowObject = null;
    }

    //Cam Motion
    [Space] [Header("Rotation settings")]
    private Vector2 movement_speed = Vector2.zero; //Desired movement of the camera

    private Vector2 move_velocity = Vector2.zero; //Rotation velocity 
    [Range(0f, 1f)] public float movement_damp; //Damping for smoothing
    [Range(40f, 90f)] public float angle_clamp; //Camera rotation clamp [X]


    [Space] //Cam distance
    [Header("Cam distance")]
    [Range(0f, 50f)]
    public float Cam_distance; //Desired cam distance

    public float zoom_sens = 1;


    [Tooltip("If 0 -> no boundries")] [Min(0)]
    public float Min_dist = 0; //Min cam distance

    [Tooltip("If 0 -> no boundries")] [Min(0)]
    public float Max_dist = 0; //Max cam distance

    [SerializeField] [Tooltip("How fast the zoom is. smaller == slower")] [Range(0f, 1f)]
    public float zoom_damp;

    private Vector3 zoom_velocity = Vector3.zero;

    [Space] //Pivot motion
    [Range(0f, 1f)]
    public float pivot_damp;

    private Vector3 pivot_velocity = Vector3.zero;


    void Start()
    {
        cam = gameObject.GetComponent<Camera>();
        Anchor = pivot.position;
    }

        
    void Update()
    {
        if (!IsFollowing)
            pivot.position = Vector3.SmoothDamp(pivot.position, Anchor,
                ref pivot_velocity, pivot_damp);
        else
            pivot.position = FollowObject.position;


        if (movement_speed != Vector2.zero)
        {
            //Rotation
            pivot.Rotate(Vector3.up, movement_speed.x * Time.deltaTime);
            pivot.Rotate(Vector3.right, -movement_speed.y * Time.deltaTime);
            pivot.Rotate(Vector3.forward, -pivot.transform.rotation.eulerAngles.z);

            //Rotation Clamp
            if (pivot.transform.rotation.eulerAngles.x > angle_clamp &&
                pivot.transform.rotation.eulerAngles.x < 180)
                pivot.transform.Rotate(Vector3.right, angle_clamp - pivot.transform.rotation.eulerAngles.x);
            else if (pivot.transform.rotation.eulerAngles.x < 360 - angle_clamp &&
                        pivot.transform.rotation.eulerAngles.x > 180)
                pivot.transform.Rotate(Vector3.right, (360 - angle_clamp - pivot.transform.rotation.eulerAngles.x));

            //Rotation Smoothing
            movement_speed = Vector2.SmoothDamp(movement_speed, Vector2.zero, ref move_velocity, movement_damp);
            transform.LookAt(pivot.position);
        }

        //Zoom
        if (Cam_distance != transform.localPosition.z)
            transform.localPosition = Vector3.SmoothDamp(transform.localPosition, new Vector3(0, 0, -Cam_distance),
                ref zoom_velocity, zoom_damp);
    }


    void OnTriggerStay(Collider other)
    {
        if (Cam_distance < other.bounds.size.x)
            Cam_distance += other.bounds.size.x / 10f;
    }

    /// <summary>
    /// For zooming the camera.
    /// </summary>
    /// <param name="zoom_delta">user input</param>
    public void ZoomBy(float zoom_delta)
    {
        Ray ray = new Ray(transform.position, transform.TransformDirection(Vector3.forward));
        RaycastHit hit;

        if (!Physics.Raycast(ray, out hit, 100))
            return;
            
        Cam_distance += zoom_delta * hit.distance / zoom_sens;

        if (Min_dist > 0 && Cam_distance < Min_dist)
            Cam_distance = Min_dist + Min_dist * .1f;
        if (Max_dist > 0 && Cam_distance > Max_dist)
            Cam_distance = Max_dist;
    }


    /// <summary>
    /// Rotates camera.
    /// </summary>
    /// <param name="input_delta">Adds rotation speed
    /// {[X] Left | Right
    /// || [Y] Up | Down} </param>
    public void MoveCamera(Vector2 input_delta)
    {
        movement_speed.x += input_delta.x;
        movement_speed.y += input_delta.y;
    }
}