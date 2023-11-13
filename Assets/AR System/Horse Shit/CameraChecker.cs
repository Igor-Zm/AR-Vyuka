using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
#if UNITY_ANDROID
using UnityEngine.Android;
#endif
public class CameraChecker : MonoBehaviour
{
    public UnityEvent<bool> OnCameraCheck;


    public void CheckCamera()
    {
        //Debug.Log(CameraEnabled());
        //if(!CameraEnabled())
        //    GetCameraPermisions();

        //Debug.Log(CameraEnabled());
        

        //OnCameraCheck?.Invoke(CameraEnabled());
    }

    #if UNITY_ANDROID
    private bool CameraEnabled()
    {
        if(Permission.HasUserAuthorizedPermission(Permission.Camera))
            return true;

        return false;
    }

    private void GetCameraPermisions() => Permission.RequestUserPermission(Permission.Camera);
       
    #endif

}
