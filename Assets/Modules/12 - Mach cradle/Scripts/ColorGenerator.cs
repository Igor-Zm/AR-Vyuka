using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorGenerator : MonoBehaviour, Initializable
{
    [SerializeField] List<PaintablesManager> _paintMans = new List<PaintablesManager>();

    
    public void Init()
    {
        foreach(var manager in _paintMans)
                manager.Init();

        int length = _paintMans[0].GetPainatbles.Length;
        for(int i = 0; i < length; i++)
        {
            Color color = Color.HSVToRGB((float)i/((float)length-1f),1,1);
            foreach(var manager in _paintMans)
                manager.GetPainatbles[i].SetColor(color);
        }
    }
}
