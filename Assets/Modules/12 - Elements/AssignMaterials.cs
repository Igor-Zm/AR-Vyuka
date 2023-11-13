using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AssignMaterials : MonoBehaviour
{
    public bool assign;
    [Header("DO NOT ASSIGN VARIABLES BELOW -> automatically assigned")]
    public Material orbital;
    public Material electron;
    public Material neutron;
    public Material neutronCore;
    public Material proton;

    void Start()
    {
        if (assign)
        {
            AssignMaterialsOrbits();
            AssignMaterialsNucleus();
        }
    }

    [ContextMenu("Set Material For Orbits")]
    void AssignMaterialsOrbits()
    {
        orbital = Resources.Load("Material.Orbital", typeof(Material)) as Material;
        electron = Resources.Load("Material.Electron", typeof(Material)) as Material;

        Transform child = transform.GetChild(0).GetChild(0);
        int iteration = 0;
        while (!child.name.Contains("orbital"))
        {
            iteration++;
            child = transform.GetChild(0).GetChild(iteration);
        }
        if (child == null)
        {
            Debug.LogError("Child object not found");
            return;
        }

        Renderer renderer = child.GetComponent<Renderer>();
        if (renderer == null)
        {
            Debug.LogError("Renderer component not found on child object");
            return;
        }

        Material[] materials = renderer.materials;
        if (materials.Length < 2)
        {
            Debug.LogError("Child object does not have enough materials to assign");
            return;
        }

        materials[1] = orbital;
        materials[0] = electron;
        renderer.materials = materials;
    }

    [ContextMenu("Set Material For Nucleus")]
    void AssignMaterialsNucleus()
    {

        neutron = Resources.Load("Material.Neutron", typeof(Material)) as Material;
        neutronCore = Resources.Load("Material.NeutronCore", typeof(Material)) as Material;
        proton = Resources.Load("Material.Proton", typeof(Material)) as Material;

        Transform child = transform.GetChild(1);
        if (child == null)
        {
            Debug.LogError("Child object not found");
            return;
        }

        Renderer renderer = child.GetComponent<Renderer>();
        if (renderer == null)
        {
            Debug.LogError("Renderer component not found on child object");
            return;
        }

        Material[] materials = renderer.materials;
        if (materials.Length < 3)
        {
            Debug.LogError("Child object does not have enough materials to assign");
            return;
        }

        materials[2] = proton;
        materials[1] = neutron;
        materials[0] = neutronCore;
        renderer.materials = materials;
    }
}