using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BodyController : MonoBehaviour
{
    public List<GameObject> objects = new List<GameObject>();
    public List<Toggle> toggles = new List<Toggle>();

    public void SetObject( int index) {
        objects[index].SetActive(toggles[index].isOn
            );
    
    }
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
