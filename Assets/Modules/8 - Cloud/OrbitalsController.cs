using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OrbitalsController : MonoBehaviour
{
    public string[] texts;
    public GameObject[] gos;

    public int index = 0;

    public UnityEngine.UI.Text text;
    public void Next() {
        index++;
        index = index % texts.Length;
        Start();
    }
    public void Previous()
    {
        index--;
        index+= texts.Length;
        index = index % texts.Length;
        Start();
    }
    void Start()
    {

        for (int i = 0; i < texts.Length; i++)
        {
            gos[i].SetActive(i == index);
        }
            text.text = texts[index];

    }

}
