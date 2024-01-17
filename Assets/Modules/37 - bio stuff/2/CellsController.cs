using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CellsController : MonoBehaviour
{
    public List<GameObject> stuff = new List<GameObject>();

    void Start()
    {
        
    }
    private void Update()
    {
        for (int i = 0; i < stuff.Count; i++)
        {
            stuff[i].SetActive(i == val);  
        }
    }
    int val = 0;
    public void SetValue(float f)
    {
        val = Mathf.RoundToInt(f);
    }
}
