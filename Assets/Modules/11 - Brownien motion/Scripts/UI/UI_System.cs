using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Events;


namespace AR_Project.UI
{
    public class UI_System : MonoBehaviour
    {
        [Header("Properties")] public UI_Screen StartScreen;
        
        // Variables
        // [Header("Properties")] 
        // public float FadeInDuration = 1f;
        // public float FadeOutDuration = 1f;
        //
        [Header("SystemEvents")] public UnityEvent OnScreenSwitch = new UnityEvent();

        private Component[] _screens = new Component[0];
        private UI_Screen _currScreen;
        private UI_Screen _prevScreen;

        public UI_Screen CurrentScreen
        {
            get => _currScreen;
        }


        // Main Methods
        void Start()
        {
            _screens = GetComponentsInChildren<UI_Screen>(true);

            InitializeScreens();

            Invoke("ShowStartScreen",0.05f);
        }

        private void ShowStartScreen()
        {
            if(StartScreen)
                SwitchScreen(StartScreen);
        }

        // Helper Methods

        public void SwitchScreen(UI_Screen newScreen)
        {
            if (newScreen)
            {
                if (_currScreen)
                {
                    _currScreen.Hide();
                    _prevScreen = _currScreen;
                }

                _currScreen = newScreen;
                _currScreen.Show();

                if (OnScreenSwitch != null)
                    OnScreenSwitch.Invoke();
            }
        }
        

        public void SwitchToPreviousScreen()
        {
            if (_prevScreen)
                SwitchScreen(_prevScreen);
        }

        public void LoadScene(int sceneIndex)
        {
            
            
        }

        private void InitializeScreens()
        {
            foreach (UI_Screen screen in _screens)
            {
                screen.gameObject.SetActive(true);
            }
                 
        }

        IEnumerator WaitToLoadScene(int sceneIndex)
        {
            yield return null;
        }
    }
}