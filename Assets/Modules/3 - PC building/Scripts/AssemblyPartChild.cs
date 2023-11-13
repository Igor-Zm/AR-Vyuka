using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AssemblyPartChild : MonoBehaviour
{
    public MeshRenderer parentRenderer;
    private MeshRenderer renderer;
    private Material[] allMaterials;

    private BoxCollider parentCollider;

    private void Start()
    {
        renderer = GetComponent<MeshRenderer>();
        allMaterials = renderer.materials;

        parentCollider = GetComponentInParent<BoxCollider>();
    }
    private void Update()
    {
        renderer.enabled = parentRenderer.enabled;

        for (int i = 0; i < allMaterials.Length; i++)
        {
            allMaterials[i].SetInt("Indicator", (parentCollider.enabled) ? 1 : 0);
        }
    }
}
