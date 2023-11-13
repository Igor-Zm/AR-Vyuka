using System.Collections;
using System.Collections.Generic;
using Telescope;
using UnityEngine;

public class ViewfinderBehavior : MonoBehaviour
{
    [SerializeField] private TelescopeBehavior telescope;
    
    [SerializeField] private Animator fade_anim;
    [SerializeField] private GameObject arrow;

    
    
    private void OnTriggerEnter(Collider other)
    {
        telescope.ViewFinder(true);
        UserInterface.Singleton.OnScope(true);
        fade_anim.SetBool("Active", true);
    }
    
    public void Exit()
    {
        arrow.SetActive(false);
        telescope.ViewFinder(false);
        
        fade_anim.SetBool("Active", false);
        UserInterface.Singleton.OnScope(false);
    }
    
}