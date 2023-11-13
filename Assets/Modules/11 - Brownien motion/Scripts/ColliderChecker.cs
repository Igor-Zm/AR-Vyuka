using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColliderChecker : MonoBehaviour
{
   [SerializeField] Collider _collider;
    [SerializeField] private int _objectCounter = 0;


    public bool IsEmpty() => _objectCounter==0;

    void OnTriggerEnter(Collider other)=>_objectCounter++;
    
    void OnTriggerExit(Collider other) => _objectCounter--;
 
}
