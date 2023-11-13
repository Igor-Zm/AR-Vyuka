using UnityEngine;
using AR_Project.Movement;
public class ARSimManager : MonoBehaviour
{
    public GameObject SimGO;
    [SerializeField] private GameObject cursorGO;

    private float startScale;

    public SimpleARControll2 control;

    void Start()
    {
    }

    public void DisableAR()
    {
        
        SimGO.SetActive(true);
        SimGO.transform.position = Vector3.zero;
        control.SetPosition(Vector3.zero);
        //SimGO.transform.localScale = Vector3.one*startScale;
    }

    public void HideSim()
    {
        cursorGO.SetActive(true);
        Shader.SetGlobalFloat("_SettingAR", 1);
        SimGO.SetActive(false);
    }

    public void PlaceObject()
    {
        SimGO.SetActive(true);
        cursorGO.SetActive(false);
        Shader.SetGlobalFloat("_SettingAR", 0);

        Vector3 cursPos = cursorGO.transform.position;
        SimGO.transform.position = cursPos;

        control.SetPosition(cursPos);
    }

}
