using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PointEditingChange : MonoBehaviour
{
    private int clickAmount = 0;
    public string[] letters = new string[4] {"A", "B", "C", "D"};
    public List<GameObject> inputHolders;


    void Start()
    {

    }

    public void OnClick()
    {
        clickAmount++;
        transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = letters[clickAmount % letters.Length];
        //Disable Previous Input Holder
        inputHolders[(clickAmount -1 )% inputHolders.Count].SetActive(false);
        //Enable New Input Holder
        inputHolders[clickAmount % inputHolders.Count].SetActive(true);
    }
}
