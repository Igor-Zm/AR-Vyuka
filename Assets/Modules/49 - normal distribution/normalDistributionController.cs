using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class normalDistributionController : MonoBehaviour
{
    public Transform parent;
    public GameObject stub;

    public Transform stubStart;
    public float stubSpacing;
    public float spawnBallInterval;
    public int stubCountX;
    public int stubCountY;

    public float randomJitter = 0.01f;

    public Transform spawnBallTransform;
    public Transform spawnBallParent;
    public GameObject ballPrefab;
    public float timeScale = 3f;
    void Start()
    {
        InvokeRepeating(nameof(SpawnBall),spawnBallInterval,spawnBallInterval);
        Time.timeScale = timeScale;
    }
    public void ResetTime() {
        Time.timeScale = 1f;
        }
    void SpawnBall() {
        Instantiate(ballPrefab,spawnBallTransform.position + Random.insideUnitSphere * randomJitter, spawnBallTransform.transform.rotation, spawnBallParent);
    }
    [ContextMenu("SpawnStubs")]
    void SpawnStubs() {
        for (int y = 0; y < stubCountY; y++)
        {
            for (int x = 0; x < stubCountX; x++)
            {
                float dither = stubSpacing / 2f;
                if (y % 2 == 0)
                    dither = 0;
                Vector3 pos = stubStart.position + new Vector3(stubSpacing*x+dither,stubSpacing*y,0)*-1f;
                
                GameObject go =  Instantiate(stub,Vector3.zero,Quaternion.identity,parent);
                go.transform.position =  pos ;
            }
        }
    }

    public void Reset()
    {
        GameObject[] res = GameObject.FindGameObjectsWithTag("Respawn");
        for (int i = 0; i < res.Length; i++)
        {
            DestroyImmediate(res[i]);
        }
    }

    void Update()
    {
        
    }
}
