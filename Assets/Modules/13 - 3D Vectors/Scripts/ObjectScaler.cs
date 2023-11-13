using System.Collections.Generic;
using UnityEngine;

public class ObjectScaler : GenericScaler
{
    public List<Transform> TargetTransforms = new List<Transform>();
    
    protected override void ApplyScale(float scale)
    {
        foreach(var trans in TargetTransforms)
            trans.localScale = new Vector3(scale/transform.lossyScale.x, scale / transform.lossyScale.y, scale / transform.lossyScale.y);
        
    }
}
