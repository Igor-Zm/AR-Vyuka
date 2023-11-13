using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CustomText : Text
{
    [TextArea()] public string prefix = "";
    string _noPrefixTxt;
    public void AppendToText(string toAppend) => this.text += toAppend;

    public string Prefix
    {
        get => prefix; 
        set
        {
            prefix = value;
            base.text = prefix + _noPrefixTxt;
        }
    }

    public override string text
    {
        get => base.text;
        set
        {
            _noPrefixTxt = value;
            base.text = prefix + _noPrefixTxt;
        }
    }

}
