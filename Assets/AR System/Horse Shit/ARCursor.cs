using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class ARCursor : MonoBehaviour
{
    public GameObject CursorObject;
    public Camera AR_Camera;
    public ARRaycastManager RaycastManager;
    bool CursorEnabled = true;

    void Update()
    {
        if(Shader.GetGlobalFloat("_SettingAR") > 0.1f)
            UpdateCursor();

    }

    public void UpdateCursor()
    {
        Vector2 screenCenter = AR_Camera.ViewportToScreenPoint(new Vector2(.5f, .5f));
        List<ARRaycastHit> hits = new List<ARRaycastHit>();
        RaycastManager.Raycast(screenCenter, hits, UnityEngine.XR.ARSubsystems.TrackableType.PlaneWithinPolygon);
        
        if(hits.Count == 0)
            return;

        CursorObject.transform.position = hits[0].pose.position;

        //CursorObject.transform.rotation = hits[0].pose.rotation;

    }

    public void ResizeCursorBy(float amount) => CursorObject.transform.localScale += Vector3.one * amount;



    
}
