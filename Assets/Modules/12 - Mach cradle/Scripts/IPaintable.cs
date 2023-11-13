using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IPaintable
{
    public Color CurrentColor {get;}

    public void SetColor(Color newColor);
}
