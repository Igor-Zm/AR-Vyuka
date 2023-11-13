using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class SinewaveExample : MonoBehaviour
{
    [Range(1, 20000)]  //Creates a slider in the inspector
    public float frequency;

    [Range(1, 20000)]  //Creates a slider in the inspector
    //public float frequency2;

    public float sampleRate = 44100;
    public float waveLengthInSeconds = 2.0f;

    AudioSource audioSource;
    int timeIndex = 0;

    public LineRenderer lineRenderer;

    public int lineStepps = 200;
    public float lineLength = 10f;

    public TMP_Text onoffButtonText;
    public TMP_Text typeButtonText;
    public TMP_Text hzText;

    public string[] waveNames;

    public void SetFrequency(float val) {
        frequency = val;
        hzText.text = val.ToString() + " hz";
    }
    public void ToggleMode() {
        wave = (Wave)( (((int)wave) + 1)%((int)Wave.Count)) ;
        typeButtonText.text = waveNames[(int)wave];
    }
    public void Toggle() {

        if (!audioSource.isPlaying)
        {
            timeIndex = 0;  //resets timer before playing sound
            audioSource.Play();
            onoffButtonText.text = "Zapnuto";
        }
        else
        {
            audioSource.Stop();
            onoffButtonText.text = "Vypnuto";
        }
    }

    [ContextMenu("Start")]
    void Start()
    {
        onoffButtonText.text = "Vypnuto";
        typeButtonText.text = waveNames[0];

        if (audioSource == null)
            audioSource = gameObject.AddComponent<AudioSource>();
        audioSource.playOnAwake = false;
        audioSource.spatialBlend = 0; //force 2D sound
        audioSource.Stop(); //avoids audiosource from starting to play automatically

        positions = new Vector3[lineStepps];
        for (int i = 0; i < lineStepps; i++)
        {
            positions[i] = new Vector3(   (((float)i)/ lineStepps)*lineLength  , 0,0);
        }
        lineRenderer.positionCount = lineStepps;
    }

    void Update()
    {
        RefreshLine();
    }

    Vector3[] positions ;
    public void RefreshLine() {
        
        for (int i = 0; i < lineStepps; i++)
        {
           float val = CreateWave(i, frequency, sampleRate);
            positions[i].y = val; 
        }
        lineRenderer.SetPositions(positions);
    }

    void OnAudioFilterRead(float[] data, int channels)
    {
        for (int i = 0; i < data.Length; i += channels)
        {
            data[i] = CreateWave(timeIndex, frequency, sampleRate);

            if (channels == 2)
                data[i + 1] = CreateWave(timeIndex, frequency, sampleRate);

            timeIndex++;

            //if timeIndex gets too big, reset it to 0
            if (timeIndex >= (sampleRate * waveLengthInSeconds))
            {
                timeIndex = 0;
            }
        }
    }

    public enum Wave { 
        sine=0, square=1, tooth=2, tri=3, Count = 4
    }
    public Wave wave = Wave.sine;
    public float CreateWave(int timeIndex, float frequency, float sampleRate) {

        float val = 0;
        if (wave == Wave.sine) 
            val = CreateSine(timeIndex, frequency, sampleRate);    
        if (wave == Wave.square) 
            val =  CreateSquare(timeIndex, frequency, sampleRate);    
        if (wave == Wave.tooth) 
            val = CreateSawtooth(timeIndex, frequency, sampleRate);    
        if (wave == Wave.tri) 
            val =  CreateTriangle(timeIndex, frequency, sampleRate);

        return val;
    }

    //Creates a sinewave
    public float CreateSine(int timeIndex, float frequency, float sampleRate)
    {
        return Mathf.Sin(2 * Mathf.PI * timeIndex * frequency / sampleRate);
    }
    public float CreateSquare(int timeIndex, float frequency, float sampleRate)
    {
        float sineValue = Mathf.Sin(2 * Mathf.PI * timeIndex * frequency / sampleRate);
        return sineValue >= 0 ? 1 : -1;
    }
    public float CreateSawtooth(int timeIndex, float frequency, float sampleRate)
    {
        return 2 * (timeIndex * frequency / sampleRate - Mathf.Floor(timeIndex * frequency / sampleRate + 0.5f));
    }
    public float CreateTriangle(int timeIndex, float frequency, float sampleRate)
    {
        float sawtoothValue = CreateSawtooth(timeIndex, frequency, sampleRate);
        return 2 * Mathf.Abs(sawtoothValue) - 1;
    }
}
