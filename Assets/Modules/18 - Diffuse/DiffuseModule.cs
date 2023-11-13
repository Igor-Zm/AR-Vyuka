using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class DiffuseModule : MonoBehaviour
{
    public static DiffuseModule Instance;

    public Transform sideAvolume;
    public Transform sideBvolume;

    public GameObject sideABall;
    public GameObject sideBBall;

    public float temperature = 1f;
    public int numberOfBalls;

    public Transform parent;

    List<GameObject> balls = new List<GameObject>();


    public void Reset() {
        Spawn();
    }
    public void SetTemperature(float val) {
        temperature = val;
    }
    public void SetCount(float val) {
        int ival = Mathf.RoundToInt(val);
        if (numberOfBalls != ival) {
            numberOfBalls = ival;
            Spawn();
        }
    }


    private void Awake()
    {
        Instance = this;
    }
    [ContextMenu("DrawDebug")]
    void DrawDebug() {

        Bounds aBounds = sideAvolume.GetComponent<MeshRenderer>().bounds;
        Bounds bBounds = sideBvolume.GetComponent<MeshRenderer>().bounds;
        Debug.DrawLine(aBounds.min,aBounds.max,Color.red,5f);
        Debug.DrawLine(bBounds.min, bBounds.max,Color.blue,5f);
        
    }
    void Spawn() {
        foreach (var item in balls)
        {
            Destroy (item);
        }

        Bounds aBounds = sideAvolume.GetComponent<MeshRenderer>().bounds;
        Bounds bBounds = sideBvolume.GetComponent<MeshRenderer>().bounds;

        for (int z = 0; z < numberOfBalls; z++)
        {
            for (int y = 0; y < numberOfBalls; y++)
            {
                for (int x = 0; x < numberOfBalls; x++)
                {
                    float fx = ((float)x/numberOfBalls);
                    float fy = ((float)y/numberOfBalls);
                    float fz = ((float)z/numberOfBalls);
                    Vector3 posA = new Vector3(Mathf.Lerp(aBounds.min.x,aBounds.max.x,fx),
                                                Mathf.Lerp(aBounds.min.y, aBounds.max.y, fy),
                                                Mathf.Lerp(aBounds.min.z, aBounds.max.z, fz)) ;
                    Vector3 posB = new Vector3(Mathf.Lerp(bBounds.min.x,  bBounds.max.x,fx),
                                                Mathf.Lerp(bBounds.min.y, bBounds.max.y, fy),
                                                Mathf.Lerp(bBounds.min.z, bBounds.max.z, fz)) ;
                    
                    balls.Add(Instantiate(sideABall, posA,Quaternion.identity,parent));
                    balls.Add(Instantiate(sideBBall, posB,Quaternion.identity,parent));

                }
            }

        }

    }

    void Start()
    {
        Spawn();
    }


    void Update()
    {
        
    }
}
