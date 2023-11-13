using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class AssemblyController : MonoBehaviour
{
    [System.Serializable]
    public struct StepData
    {
        public string taskMainText;
        public string taskHintText;
        public Vector3 cameraPosition;
    }

    public AssemblyPart[] parts;
    public StepData[] assemblySteps;

    public Transform cameraPivot;
    public GeneralCamController camController;

    public TMP_Text taskTextUI;
    public TMP_Text hintTextUI;
    public TMP_Text stepsText;

    public float mouseSensitivity = 100.0f;
    private float mouseHeldTime = 0;

    [Range(0,12)]
    public int globalStep = 0;

    // Start is called before the first frame update
    void Start()
    {
        parts = GetComponentsInChildren<AssemblyPart>();
        UpdateStepsText();
    }

    // Update is called once per frame
    void Update()
    {
        // Update text
        taskTextUI.text = assemblySteps[globalStep].taskMainText;
        hintTextUI.text = assemblySteps[globalStep].taskHintText;

        // Move camera to new position
        cameraPivot.position = Vector3.Lerp(cameraPivot.position, assemblySteps[globalStep].cameraPosition, 0.015f);

        // Incrementing steps
        if (Input.GetMouseButtonUp(0))
        {
            if((mouseHeldTime <= 0.15f))
            {
                Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

                if (Physics.Raycast(ray, out RaycastHit hit, 100.0f))
                {
                    if(hit.transform.GetComponent<AssemblyPart>())
                    {
                        globalStep++;

                        UpdateStepsText();
                    }
                }
            }
        }

        if (Input.GetMouseButton(0))
            mouseHeldTime += Time.deltaTime;
        else
            mouseHeldTime = 0;


        // Update parts
        for (int i = 0; i < parts.Length; i++)
            parts[i].UpdateToStep(globalStep);

        if(mouseHeldTime > 0.05f)
            camController.MoveCamera(new Vector2(Input.GetAxisRaw("Mouse X"),Input.GetAxisRaw("Mouse Y")) * mouseSensitivity);
    }

    void UpdateStepsText()
    {
        stepsText.text = "";

        for (int i = 0; i < assemblySteps.Length; i++)
        {
            if (i < globalStep)
                stepsText.text += "<color=#bbbbbbff>" + assemblySteps[i].taskMainText + "</color>\n";
            else if (i == globalStep)
                stepsText.text += "<b><color=#00ff00ff>" + assemblySteps[i].taskMainText + "</color></b>\n";
            else
                stepsText.text += "<color=#ffffffff>" + assemblySteps[i].taskMainText + "</color>\n";
        }
    }
}