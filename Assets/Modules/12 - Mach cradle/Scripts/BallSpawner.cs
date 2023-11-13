using UnityEngine;
using System;

[Serializable]
[RequireComponent(typeof(AR_Project.ObjectMangment.ArraySpawner))]
public class BallSpawner : MonoBehaviour
{
    [SerializeField] Transform MaxDistancePoint;
    public int DesiredCount { get => _spawner.DesiredCount; set => _spawner.DesiredCount = value; }
    public GameObject[] SpawnedGO => _spawner.SpawnedGO; 
    [SerializeField] AR_Project.ObjectMangment.ArraySpawner _spawner;


    void Start()
    {
        //_spawner = GetComponent<AR_Project.ObjectMangment.ArraySpawner>();
    }

    public void Spawn()
    {
        _spawner.SpawnOffset = transform.up * -1 * CalculateOffset();
        _spawner.UpdateArray();
    }

    private float CalculateOffset()
    {
        if(DesiredCount <= 0)
            return 0f;

        float distance = Vector3.Distance(transform.position, MaxDistancePoint.position);
        float ballWidth = _spawner.Prefab.GetComponent<BoxCollider>().bounds.size.z;
        return (distance - (ballWidth * DesiredCount)) / DesiredCount + (ballWidth / 2);
    }
}
