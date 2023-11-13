using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using Image = UnityEngine.UI.Image;

public class TelescopeBehavior : MonoBehaviour
{
    [SerializeField] private Camera Scope;
    [SerializeField] private GameObject blur_plane;
    [SerializeField] private Material blur;
    [Space]
    [SerializeField] private Animator Door_anim;

    public bool DoorIsOpen { get; private set; } = false;


    void Start()
    {
        blur = blur_plane.GetComponent<Renderer>().sharedMaterial;
    }
    
    void Update()
    {
        
    }
    
    public void ChangeBlur(float blur_value)
    {
        blur.SetFloat("_Focus", blur_value);
    }

    public void ChangeZoom(float zoom_value)
    {
        Scope.fieldOfView = zoom_value;
    }

    public void DoorState(bool Open)
    {
        DoorIsOpen = Open;
        Door_anim.SetBool("Open", Open);
    }



    public void ViewFinder(bool IsActive)
    {
        if (IsActive)
        {
            Scope.enabled = true;
            blur_plane.SetActive(true);
        }
        else
            Invoke("DisableViewfinder", .2f);
    }
    
    private void DisableViewfinder()
    {
        Scope.enabled = false;
        blur_plane.SetActive(false);
    }
    
}
