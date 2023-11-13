using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IcePosRotExtractor : MonoBehaviour
{
    public Vector3[] positions;
    public Quaternion[] rot;

    [ContextMenu("Extract")]
    public void ExtractPositions() {
        positions= new Vector3[transform.childCount];
        rot = new Quaternion[transform.childCount];
        for (int i = 0; i < transform.childCount; i++)
        {
            positions[i]= transform.GetChild(i).transform.position;
            rot[i]= transform.GetChild(i).transform.rotation;
        }
    }


}
