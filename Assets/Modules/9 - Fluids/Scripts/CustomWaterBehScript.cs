using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CustomWaterBehScript : MonoBehaviour
{
    public GameObject bottomFluid;
    public GameObject Sand;
    public GameObject ContainerTop;
    public GameObject ContainerBottom;
    public GameObject waterfallMessy;
    public GameObject waterfallClean;

    Renderer ContainerTopRend, ContainerBottomRend, waterfallMessyRend, WaterfallCleanRend;

    // These name are just bad, the thing is I cannot figure out better naming... I will leave it for now
    float fill;
    float fill2;
    float bottomDisolve = 1;
    float bottomDisolve2 = 1;
    float topDisolve = 1;
    float topDisolve2 = 1;
    public float lerpSpeed;


    // Start is called before the first frame update
    void Start()
    {
        //animator = transform.GetChild(0).GetChild(0).GetComponent<Animator>();

        // Assigning renderers so the textures could be changed later on - probably not the ideal solution
        // as it should work with just assigning renderers in the editor, but it for some reason does not work
        WaterfallCleanRend = waterfallClean.GetComponent<Renderer>();
        waterfallMessyRend = waterfallMessy.GetComponent<Renderer>();
        ContainerTopRend = ContainerTop.GetComponent<Renderer>();
        ContainerBottomRend = ContainerBottom.GetComponent<Renderer>();

        fill = ContainerTopRend.material.GetFloat("Fill_From_Top");
        fill2 = ContainerBottomRend.material.GetFloat("Fill_From_Top");
    }

    private void FixedUpdate()
    {
        // Move the object
        if (Input.GetKey(KeyCode.Mouse0))
        {
            print(transform.rotation.eulerAngles.z);
            if (transform.rotation.eulerAngles.z <= 110)
            {
                transform.Rotate(0, 0, 1f);
            }
        }
    }

    void Update()
    {
        // When the main container is rotated by 105 degres
        if (transform.rotation.eulerAngles.z >= 105)
        {
            // Finish the rotation even if the player does not
            if (transform.rotation.eulerAngles.z <= 110)
            {
                transform.Rotate(0, 0, 0.1f);
            }

            // Empties the top container
            FillContainer(ContainerTopRend, ref fill, "Fill_From_Top", -1f);

            // Starts Waterfall of messy water
            FillContainer(waterfallMessyRend, ref topDisolve, "Fill_From_Bottom");
        }


        if (topDisolve <= -0.6f)
        {
            Sand.SetActive(true);
        }

        if (fill <= -0.6f)
        {
            // Stops Waterfall of messy water
            FillContainer(waterfallMessyRend, ref bottomDisolve, "Fill_From_Top");
        }

        if (topDisolve <= -0.9f)
        {
            // Start clean waterfall
            FillContainer(WaterfallCleanRend, ref topDisolve2, "Fill_From_Bottom");        
        }

        if (topDisolve2 <= -0.6f )
        {
            // Start filling the bottom container
            FillContainer(ContainerBottomRend, ref fill2, "Fill_From_Top", 1f);
        }

        if (fill2 >= 0.93f)
        {
            // Stop Clean Waterfall
            FillContainer(WaterfallCleanRend, ref bottomDisolve2, "Fill_From_Top");
        }


    }

    void FillContainer(Renderer _render, ref float _filling, string _shaderPropertyName, float lerpLimit = -1.5f)
    {
        _filling = Mathf.LerpUnclamped(_filling, lerpLimit, Time.deltaTime * lerpSpeed);
        _render.material.SetFloat(_shaderPropertyName, _filling);
    }

}
