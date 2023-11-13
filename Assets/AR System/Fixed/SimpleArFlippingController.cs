using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SimpleArFlippingController : MonoBehaviour
{
    public GameObject canvas2D;
    public GameObject canvasAR;
    public GameObject canvasCommon;
    public GameObject canvasARSetup;

    public GameObject ARCursor;

    public SimpleARControll2 moduleArController;
    public GameObject module;

    public GameObject objects_2D;
    public GameObject objects_AR;


    public GameObject fpsMeter;
    private bool fpsToggle = false;

    public int goBackSceneIndex = 0;

    private Camera[] cameras;

    public void LeaveThisScene() {
        SceneManager.LoadScene(goBackSceneIndex);
    }

    public void ChangeToAR()
    {
        canvas2D.SetActive(false);
        canvasAR.SetActive(false);

        objects_2D.SetActive(false);
        objects_AR.SetActive(true);

        canvasCommon.SetActive(false);
        canvasARSetup.SetActive(true);

        Shader.SetGlobalFloat("_SettingAR", 1);

        ARCursor.SetActive(true);

        module.SetActive(false);
    }
    public void ChangeTo2D() {
        canvas2D.SetActive(true);
        canvasAR.SetActive(false);
        canvasARSetup.SetActive(false);

        objects_2D.SetActive(true);
        objects_AR.SetActive(false);

        canvasCommon.SetActive(true);
        canvasARSetup.SetActive(false);

        module.SetActive(true);

        moduleArController.SetPosition(Vector3.zero);

    }

    public void FinishARSetup()
    {
        canvas2D.SetActive(false);
        canvasAR.SetActive(true);


        canvasCommon.SetActive(true);

        canvasARSetup.SetActive(false);


        ARCursor.SetActive(false);
        Shader.SetGlobalFloat("_SettingAR", 0);

        Vector3 cursPos = ARCursor.transform.position;


        moduleArController.SetPosition(cursPos);

        module.SetActive(true);

    }

    private void Start()
    {
        ChangeTo2D();
    }
    void Update()
    {
        if (fpsToggle == false && Input.touchCount >= 5)
        {
            fpsToggle = true;
            fpsMeter.SetActive(!fpsMeter.activeInHierarchy);
        }

        if (Input.touchCount == 0)
        {
            fpsToggle = false;
        }

    }

}
