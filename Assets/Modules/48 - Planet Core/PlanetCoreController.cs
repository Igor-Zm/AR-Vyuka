using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlanetCoreController : MonoBehaviour
{
    [Range(0,1)]
    public float t;

    public List<GameObject> objects;
    public List<Vector3> positionsFrom;
    public List<Vector3> positionsTo;

    void Start()
    {
        
    }

    public Slider slider;
    void Update()
    {
        t = slider.value;
        for (int i = 0; i < objects.Count; i++)
        {
            objects[i].transform.position = Vector3.Lerp(positionsFrom[i], positionsTo[i],t);
        }
    }
}
