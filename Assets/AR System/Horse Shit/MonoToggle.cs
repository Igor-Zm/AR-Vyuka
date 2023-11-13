using UnityEngine;
using UnityEngine.Events;

public class MonoToggle : MonoBehaviour, IToggleble
{
    [field:SerializeField] public bool Enabled { get; private set; }

    public UnityEvent<bool> OnToggleChanged;

    public void TriggerToggle()
    {
        Enabled = !Enabled;
        OnToggleChanged.Invoke(Enabled);
    }
}
