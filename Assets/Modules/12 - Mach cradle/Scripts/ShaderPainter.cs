using UnityEngine;

public class ShaderPainter : MonoBehaviour, IPaintable
{

    [SerializeField] GameObject _target;
    [Min(0)][SerializeField] int index = 0;
    Material _mat;

    public Color CurrentColor => _mat.color;

    public void SetColor(Color newColor)
    {
        if(_mat==null)
            _mat = _target.GetComponent<MeshRenderer>().material;
            
        _mat.color = newColor;
    }
}
