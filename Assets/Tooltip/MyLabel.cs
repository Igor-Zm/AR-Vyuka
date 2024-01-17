using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class MyLabel : MonoBehaviour
{

    public MyLabelObject labelObject = null;
    public TMP_Text labelHeader = null;
    public TMP_Text labelContet = null;
    private UILineRenderer lr;
    private Camera[] cameras;
    public Vector2 targetLinePos = new Vector2(0.157f,0.6715f);


    public void Deactivate() {
        labelHeader.gameObject.SetActive(false);
        labelObject = null;
        lr.enabled = false;
    }
    public void Activate(MyLabelObject _obj) {
        labelHeader.gameObject.SetActive(true);
        labelHeader.text = _obj.header;
        labelContet.text = _obj.content;
        labelObject = _obj;
        lr.enabled = true;
    }
    void Awake()
    {
        lr = GetComponent<UILineRenderer>();
        cameras = FindObjectsOfType<Camera>();
    }
    private void Start()
    {
        Deactivate();
    }

    Camera GetActiveCamera() {
        for (int i = 0; i < cameras.Length; i++)
        {
            if (cameras[i].gameObject.activeSelf)
                return cameras[i];
        }
        return null;
    }

    void Update()
    {
        Camera cam = GetActiveCamera();
        Vector3 mousePosition = new Vector3();
        bool hasInput = false;

        if (Input.mousePresent && Input.GetMouseButtonDown(0))
        {
            mousePosition = Input.mousePosition;
            hasInput = true;
        }

        if (Input.touchCount > 0 )
        {
            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Began) { 
            hasInput = true;
            mousePosition = touch.position;
            }
        }

        lr.enabled = false;

        if (hasInput){
            Ray r = cam.ScreenPointToRay(mousePosition);
            RaycastHit rh = new RaycastHit();
            if (Physics.Raycast(r, out rh)) {
                MyLabelObject _labelObject = rh.collider.gameObject.GetComponent<MyLabelObject>();

                if (_labelObject == labelObject && labelObject != null) {
                    Deactivate();
                }
                else if (_labelObject != null)
                {
                    Activate(_labelObject);
                }
            
            }

        }

        if (labelObject != null)
        {
            Vector3 pos = labelObject.target == null ? labelObject.transform.position : labelObject.target.transform.position;
            Vector3 screenPosition = cam.WorldToViewportPoint(pos);
            lr.enabled = true;
            lr.points = new Vector2[2];
            lr.points[0] = lr.CalculatePosition(new Vector2(screenPosition.x, screenPosition.y));
            lr.points[1] = lr.CalculatePosition(targetLinePos);
        }


    }

}
