using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModuleHeightSet : MonoBehaviour
{

    public float Y;

    private void Update()
    {
        if (transform.position.y != -0.71f)
            transform.position = new Vector3(0, Y, 0);
    }
}
