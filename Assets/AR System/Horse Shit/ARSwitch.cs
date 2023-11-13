using System.Collections.Generic;
using UnityEngine;

public class ARSwitch : MonoBehaviour, IToggleble
{
    public bool AREnabled = false;
    public List<GameObject> ARGameObjects;
    public List<GameObject> NonARGameObjects;

    public void Start() => UpdateObjects();

    public void TriggerToggle()
    {
        AREnabled = !AREnabled;
        UpdateObjects();
    }

    private void UpdateObjects()
    {
        foreach(var ar in ARGameObjects)
            ar.SetActive(AREnabled);

        foreach(var nonAr in NonARGameObjects)
            nonAr.SetActive(!AREnabled);
    }
}
