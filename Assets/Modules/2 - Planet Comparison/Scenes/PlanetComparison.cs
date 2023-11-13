using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlanetComparison : MonoBehaviour
{

    public GameObject[] left;
    public GameObject[] right;

    public int indexL = 0;
    public int indexR = 0;

    public float[] sizes;

    public SimpleCameraOrbit cameraOrbit;

    public bool singleMode = false;
    public float[] distancesSingle;
    public float[] distancesDouble;

    public float space = 1;

    public string[] names;

    public Text leftText;
    public Text rightText;

    private bool refreshDistances = false;
    public void UpRight() {
        indexR = (indexR + right.Length + 1) % right.Length;
        RefreshPlanets();
        refreshDistances = true;
    }
    public void DownRight() {
        indexR = (indexR + right.Length - 1) % right.Length;
        RefreshPlanets();
        refreshDistances = true;
    }
    public void UpLeft() {
        indexL = (indexL + left.Length + 1) % left.Length;
        RefreshPlanets();
        refreshDistances = true;
    }
    public void DownLeft() {
        indexL = (indexL + left.Length - 1) % left.Length;
        RefreshPlanets();
        refreshDistances = true;
    }

    public void RefreshPlanets() {

        float leftOffset = sizes[indexL]/2f;
        float rightOffset = sizes[indexR]/2f;

        for (int i = 0; i < left.Length; i++)
        {
            left[i].SetActive(i == indexL);
            left[i].transform.localPosition = new Vector3(-space/2 - leftOffset, 0, 0);
        }    
        for (int i = 0; i < right.Length; i++)
        {
            right[i].SetActive(i == indexR);
            right[i].transform.localPosition = new Vector3(space/2 + rightOffset, 0, 0);
        }

        leftText.text = names[indexL];
        rightText.text = names[indexR];
    }
    private void Start()
    {
        RefreshPlanets();
    }

    public void Update()
    {

        if (singleMode)
        {
            cameraOrbit.minZoomDistance = distancesSingle[indexL];
        }
        else
        {
            float val = distancesDouble[indexL];
            if(val < distancesDouble[indexR])
                val = distancesDouble[indexR];

            cameraOrbit.minZoomDistance = val;
            if (val  > cameraOrbit._targetZoomDistance && refreshDistances) { 
                cameraOrbit._targetZoomDistance = val;
                refreshDistances = false;
            }


        }

    }

}
