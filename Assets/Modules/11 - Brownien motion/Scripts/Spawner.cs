using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class Spawner
{
    [SerializeField] private List<GameObject> _spawnedGO = new List<GameObject>();

    public GameObject[] GetSpawnedGO() => _spawnedGO.ToArray();

    public int Count { get => _spawnedGO.Count; }

    public void DeleteLast()
    {
        UnityEngine.Object.Destroy(_spawnedGO[0]);
        _spawnedGO.RemoveAt(0);
    }

    public void DeleteAll()
    {
        foreach (var GO in _spawnedGO)
            UnityEngine.Object.Destroy(GO);

        _spawnedGO.Clear();
    }

    public void DeleteRange(int index, int count)
    {
        GameObject[] toDestroy = _spawnedGO.GetRange(0, count).ToArray();
        foreach (var GO in toDestroy)
            UnityEngine.Object.Destroy(GO);

        _spawnedGO.RemoveRange(0, count);
    }

    public GameObject SpawnObject(GameObject toSpawn, Vector3 position, Quaternion rotation, Transform parent = null)
    {
        GameObject spawned = UnityEngine.Object.Instantiate(toSpawn, position, rotation, parent);
        _spawnedGO.Add(spawned);
        return spawned;
    }




}