using UnityEngine;

public class LengthController : MonoBehaviour, I_InterpolableSingle
{
    [SerializeField] private HingeJoint _joint;
    [SerializeField] private Transform _strings;
    [SerializeField] private float _maxLength;
    [SerializeField] private float _minLength;
    [SerializeField] private float _maxStringScale;
    [SerializeField] private float _minStringScale;
    void Start()
    {
        //_joint = transform.GetChild(0).GetComponent<HingeJoint>();
        //_maxLength = _joint.anchor.z;
        //_strings = transform.GetChild(0).transform.GetChild(0);
    }

    public void Interpolate(float t)
    {
        t = Mathf.Clamp01(t);


        _joint.anchor = Vector3.forward * Mathf.Lerp(_minLength, _maxLength, t);
        _strings.localScale = new Vector3(1, 1, Mathf.Lerp(_minStringScale, _maxStringScale, t));
    }


}
