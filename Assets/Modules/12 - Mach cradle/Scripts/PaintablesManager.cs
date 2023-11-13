using UnityEngine;

public class PaintablesManager : MonoBehaviour, Initializable
{
    [SerializeField] Transform _parent;
    [SerializeField] IPaintable[] _pintables;

    public IPaintable[] GetPainatbles => _pintables;

    public void SetColor(int index, Color newColor)
    {
        _pintables[index].SetColor(newColor);
    }

    

    public void PaintAll(Color newColor)
    {
        foreach (var painter in _pintables)
            painter.SetColor(newColor);
    }


    public void Init()
    {
        if(_pintables!=null)
            return;

        _pintables = _parent.GetComponentsInChildren<IPaintable>();
    }
}
