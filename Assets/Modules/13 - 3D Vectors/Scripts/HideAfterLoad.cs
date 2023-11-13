using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideAfterLoad : MonoBehaviour
{
    private void Start()
    {
        Invoke("HAL",0.1f);
    }
    private void HAL()
    {
        gameObject.SetActive(false);
    }
}
