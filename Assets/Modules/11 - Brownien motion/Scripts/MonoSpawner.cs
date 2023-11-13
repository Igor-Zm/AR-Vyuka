using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class MonoSpawner : MonoBehaviour
{
    public GameObject Prefab;
    public bool SpawnAsChild;
    public Transform Parent;
    public int DesiredObjectCount = 0;
    [Range(.001f, 2f)] public float _spawnDelay = .01f;
    public GameObject[] SpawnedObjects => _spawner.GetSpawnedGO();
    public Rigidbody[] ObjectRBs => _objectRBs.ToArray();
    private List<Rigidbody> _objectRBs = new List<Rigidbody>();

    public UnityEngine.Events.UnityEvent OnSpawnFinished;
    
    [SerializeField] private Spawner _spawner = new Spawner();

    private Coroutine _loop;


    public void SetCountOfObjects(float amount)
    {
        DesiredObjectCount = (int)amount;
        int diff = _spawner.Count - DesiredObjectCount;

        if (diff < 0 && _loop == null)
            _loop = StartCoroutine(SpawnLoop());

        if (diff > 0)
        {
            if (_loop != null)
            {
                StopCoroutine(_loop);
                _loop = null;
            }
            DeleteObjects(diff);
        }
    }

    private void DeleteObjects(int amount)
    {
        _objectRBs.RemoveRange(0, amount);
        _spawner.DeleteRange(0, amount);
    }

    IEnumerator SpawnLoop()
    {
        while (DesiredObjectCount > _spawner.Count)
        {
            GameObject spawned = _spawner.SpawnObject(Prefab, transform.position, transform.rotation, SpawnAsChild ? Parent : null);

            Vector3 randomVector = Random.rotation.eulerAngles.normalized;

            Rigidbody rb = spawned.GetComponent<Rigidbody>();
            rb.velocity = randomVector;
            _objectRBs.Add(rb);

            yield return new WaitForSeconds(_spawnDelay);
        }
        //yield return new WaitForSeconds(_applySpeedDelay);
        //UpdateSpeed();
        OnSpawnFinished.Invoke();
        _loop = null;
    }

}