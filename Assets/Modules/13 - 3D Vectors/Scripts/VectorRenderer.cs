using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VectorRenderer : MonoBehaviour
{
    [SerializeField] LineRenderer VectorRenderA;
    [SerializeField] LineRenderer VectorRenderB;
    [SerializeField] LineRenderer VectorRenderC;
    [SerializeField] LineRenderer VectorRenderAParallel;
    [SerializeField] LineRenderer VectorRenderBParallel;
    [Space]         
    [SerializeField] Transform VectorA;
    [SerializeField] Transform VectorB;
    [SerializeField] Transform VectorC;
    [Space]
    [SerializeField] bool bothEndPointsDefined = false;
    [SerializeField] Transform VectorA2;
    [SerializeField] Transform VectorB2;
    [SerializeField] Transform VectorC2;

    [SerializeField] float lenght = 5000;

    public void Update()
    {
        Refresh();
    }

    public void Refresh()
    {
        if (bothEndPointsDefined)
        {
            Vector3 directionA = (VectorA.position - VectorA2.position).normalized;
            Vector3 directionB = (VectorB.position - VectorB2.position).normalized;
            Vector3 directionC = (VectorC.position - VectorC2.position).normalized;
            VectorRenderA.SetPositions(new Vector3[] { VectorA2.position - directionA * lenght, VectorA.position + directionA * lenght });
            VectorRenderB.SetPositions(new Vector3[] { VectorB2.position - directionB * lenght, VectorB.position + directionB * lenght });
            VectorRenderC.SetPositions(new Vector3[] { VectorC2.position - directionC * lenght, VectorC.position + directionC * lenght });
        }
        else
        {
            VectorRenderA.SetPositions(new Vector3[] { Vector3.forward * -lenght, Vector3.forward * lenght });
            VectorRenderB.SetPositions(new Vector3[] { Vector3.forward * -lenght, Vector3.forward * lenght });
            VectorRenderC.SetPositions(new Vector3[] { Vector3.forward * -lenght, Vector3.forward * lenght });
        }
        VectorRenderAParallel.SetPositions(new Vector3[] { VectorB.position, VectorC.position });
        VectorRenderBParallel.SetPositions(new Vector3[] { VectorA.position, VectorC.position });
    }
}
