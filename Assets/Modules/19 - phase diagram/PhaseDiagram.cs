using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using Unity.VisualScripting;
using UnityEngine;

public class PhaseDiagram : MonoBehaviour
{
    public static PhaseDiagram Instance;

    public float temperature = 1f;
    public float _temperature = 1f;
    public float bondDist = 1f;

    public Vector3[] positions;
    public Quaternion[] rots;

    public GameObject moleculePrefab;
    public Transform parent;

    [Range(0,100)]
    public float breakPercentage;

    public List<GameObject> spawns = new List<GameObject>();

    public float airChance;
    public float waterChance;
    public float IceChance;
    public float lerpSpeed = 0.05f;

    public State state = State.Ice;



    public Texture2D diagramTex;

    public float minTemp;
    public float maxTemp;

    public float minPress;
    public float maxPress;

    public float pressure;

    public Vector2 minCross;
    public Vector2 maxCross;

    public RectTransform cross;
    public GameObject diagram;

    public Transform cage;    

    public void UpdateState() {
        Color clr = diagramTex.GetPixel(Mathf.RoundToInt( Mathf.Lerp(0,diagramTex.width,_temperature)), Mathf.RoundToInt(Mathf.Lerp(0, diagramTex.height, pressure)));
        if (clr.r > clr.b && clr.r > clr.g)
            state = State.Air;
        if (clr.g > clr.b && clr.g > clr.r)
            state = State.Water;
        if (clr.b > clr.g && clr.b > clr.r)
            state = State.Ice;
    }
    public void ToggleDiagram() {
        diagram.SetActive(!diagram.activeInHierarchy);
    }
    public void SetTemp(float val)
    {
        temperature = Mathf.Lerp(minTemp,maxTemp,val);
        _temperature = val;
        UpdateCross();
    }
    public void SetPressure(float val)
    {
        pressure = val;
        UpdateCross();
    }

    void UpdateCross() {
        cross.localPosition = new Vector3(Mathf.Lerp(minCross.x, maxCross.x, _temperature),
            (Mathf.Lerp(minCross.y, maxCross.y, pressure)), 0);
    }

    [SerializeField]
    public enum State
    {
        Air,Water,Ice
    }
    
    private void Awake()
    {
        Instance = this;
    }
    void Start()
    {
        Spawn();
        UpdateCross();
    }

    void Spawn() {

        foreach (var item in spawns)
        {
            Destroy(item);
        }
        spawns.Clear();

        for (int i = 0; i < positions.Length; i++)
        {
            spawns.Add( Instantiate(moleculePrefab, positions[i], rots[i],parent));            
            spawns[spawns.Count - 1].gameObject.name += $" {i}";
        }
        for (int i = 0; i < positions.Length; i++)
        {
            spawns[i].GetComponent<IceMolecule>().Init(); 
        }
    
    }

    void Update()
    {
        float target = IceChance;
        if (state == State.Water)
            target = waterChance;
        else if (state == State.Air)
            target = airChance;

        breakPercentage = Mathf.MoveTowards(breakPercentage,target,lerpSpeed);

        UpdateState();
        cage.localScale = Vector3.one * Mathf.Lerp(minPress,maxPress,pressure);
    }
}
