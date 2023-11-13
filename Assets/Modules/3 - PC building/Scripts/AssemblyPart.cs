using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public struct AnimationStep
{
    public int m_stepID;
    public bool m_isVisible;
}

public class AssemblyPart : MonoBehaviour
{
    public List<AnimationStep> steps = new List<AnimationStep>();

    private MeshRenderer renderer;

    private BoxCollider stepCollider;
    private Material[] allMaterials;

    private void Start()
    {
        renderer = GetComponent<MeshRenderer>();
        stepCollider = GetComponent<BoxCollider>();

        allMaterials = renderer.materials;
    }

    public void UpdateToStep(int globalStep)
    {
        for(int i = 0; i < steps.Count; i++)
        {
            // if is next one
            stepCollider.enabled = (steps[i].m_stepID == globalStep + 1);

            if (steps[i].m_stepID <= globalStep + 1)
            {
                renderer.enabled = steps[i].m_isVisible;
            }
        }

        for (int i = 0; i < allMaterials.Length; i++)
        {
            allMaterials[i].SetInt("Indicator", (stepCollider.enabled) ? 1 : 0);
        }
    }
}
