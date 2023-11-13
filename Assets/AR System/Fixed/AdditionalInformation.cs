using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdditionalInformation : MonoBehaviour
{
    public GameObject go;

    public void Swap()
    {
        
        go.SetActive( !go.activeInHierarchy);
    }
}
