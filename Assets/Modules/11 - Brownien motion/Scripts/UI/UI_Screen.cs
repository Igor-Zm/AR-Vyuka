
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;


namespace AR_Project.UI
{
    [RequireComponent(typeof(Animator))]
    [RequireComponent(typeof(CanvasGroup))]
    public class UI_Screen : MonoBehaviour
    {
        [Header("Main Properties")] 

        [Header("Screen Events")] public UnityEvent OnScreenShow = new UnityEvent();
        public UnityEvent OnScreenHide = new UnityEvent();

        private Animator _animator;

        void Start()
        {
            _animator = GetComponent<Animator>();
        }


        // Helper Methods

        public virtual void Show()
        {
            if (OnScreenShow != null)
                OnScreenShow.Invoke();

            HandleAnimator("on");
        }

        public virtual void Hide()
        {
            if (OnScreenHide != null)
                OnScreenHide.Invoke();

            HandleAnimator("off");
        }

        private void HandleAnimator(string triggerName)
        {
            if (!_animator)
                return;

            _animator.SetTrigger(triggerName);
        }
    }
}