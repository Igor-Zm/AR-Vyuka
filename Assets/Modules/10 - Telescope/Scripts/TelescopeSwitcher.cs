using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TelescopeSwitcher : MonoBehaviour
{
    public GameObject Kepler, Galileo, showBtnKepler, showBtnGalileo;

    public void clickKepler()
    {
        Galileo.SetActive(false);
        showBtnGalileo.SetActive(false);
        Kepler.SetActive(true);
        showBtnKepler.SetActive(true);
    }

    public void clickGalileo()
    {
        Kepler.SetActive(false);
        showBtnKepler.SetActive(false);
        Galileo.SetActive(true);
        showBtnGalileo.SetActive(true);
    }
}
