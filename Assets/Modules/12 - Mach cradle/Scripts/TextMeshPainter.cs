using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

[RequireComponent(typeof(TextMeshProUGUI))]
public class TextMeshPainter : MonoBehaviour, IPaintable
{
    public Color CurrentColor => _currColor;
    [SerializeField] private TextMeshProUGUI _text = null;
    [SerializeField] private Color _currColor = Color.white;

    void Start() 
    {
        _text = GetComponent<TextMeshProUGUI>();
    } 
        
    public void SetColor(Color newColor)
    {
        if (_text == null)
            Start();

        _currColor = newColor;
        Paint(_currColor);
    }

    private void Paint(Color color) => _text.color = color;

}
