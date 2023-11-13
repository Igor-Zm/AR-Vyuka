using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[RequireComponent(typeof(LineRenderer))]
public class TrailController : MonoBehaviour
{
    //Vars
    [Tooltip("Sets amount of samples that are gonna be in RAM | 0 = infinite")]
    [SerializeField] private int _maxHistory = 0;


    [SerializeField] private LineRenderer _lineRenderer;


    //Base Functions
    void Start()
    {
        _lineRenderer = GetComponent<LineRenderer>();
        _lineRenderer.positionCount = 2;
        _lineRenderer.SetPositions(new Vector3[]{transform.position, Vector3.zero});
    }

    void Update()
    {
        _lineRenderer.SetPosition(_lineRenderer.positionCount - 1, gameObject.transform.position);
    }


    void OnCollisionEnter(Collision collision)
    {
        List<Vector3> positions = GetPositions();

        positions.Add(gameObject.transform.position);
        _lineRenderer.positionCount++;

        if (_maxHistory < positions.Count && _maxHistory != 0)
        {
           positions = GetShortedList(positions);
            _lineRenderer.positionCount = positions.Count;
        }

        SetNewPositions(positions);
    }

    //Private methods

    List<Vector3> GetPositions()
    {
        Vector3[] positions_temp = new Vector3[_lineRenderer.positionCount];
        _lineRenderer.GetPositions(positions_temp);
        return new List<Vector3>(positions_temp);
    }


    List<Vector3> GetShortedList(List<Vector3> positions)
    {
        int posCount = positions.Count;
        int diff = posCount - _maxHistory;
        return positions.GetRange(diff, posCount - diff);
    }

    void SetNewPositions(List<Vector3> positions) =>
        _lineRenderer.SetPositions(positions.ToArray());


    //Public

    public void RestartRenderer()
    {
        _lineRenderer.SetPositions(new Vector3[0]);
    }

    public void SetMaxHistory(int maxPoints)
    {
        _maxHistory = maxPoints;

        if (_maxHistory >= _lineRenderer.positionCount && _maxHistory == 0)
            return;

        List<Vector3> positions = GetPositions();
        positions = GetShortedList(positions);
        _lineRenderer.positionCount = positions.Count;
        SetNewPositions(positions);
    }

    public int GetMaxHistory() => _maxHistory;



}
