using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineScaler : GenericScaler
{
    public List<LineRenderer> LineRenderers = new List<LineRenderer>();
    protected override void ApplyScale(float scale)
    {
        foreach(var render in LineRenderers)
        {
            render.startWidth = scale;
            render.endWidth = scale;
        }
    }
}
