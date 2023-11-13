using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;
using TMPro;

public class GeoShapesController : MonoBehaviour
{

    int index = 0;
    public List<GameObject> objects = new List<GameObject>();
    public TMP_Text text;
    public string[] texts;

    [Range(0,1)]
    public float range = 0;

    void Start()
    {
        Refresh();
    }
    public void SetRange(float val) {
        range = val;
    }
    void Update()
    {
        Animator anim = objects[index].GetComponent<Animator>();
        foreach (var item in anim.runtimeAnimatorController.animationClips)
        {
            float t = Mathf.Clamp(range,0,item.length);
            anim.Play(item.name,0,t);
        } 
        
    }

    private void Refresh()
    {
        for (int i = 0; i < objects.Count; i++)
        {
            objects[i].SetActive(i == index);
        }

        text.text = $"{texts[index]}";
    }

    public void Next() {
        index++;
        index = Mathf.Clamp(index,0,objects.Count-1);
        Refresh();
    }

    public void Previous() {

        index--;
        index = Mathf.Clamp(index, 0, objects.Count-1);
        Refresh();
    }
}
