using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class BernoulliController : MonoBehaviour
{
    [Header("Controls")]
    public float[] pipeSize;
    public float pipeMid;
    public float pipeRight;
    public float minSize = 1.0f;
    public float maxSize = 2.0f;

    public int pipeDetail = 64;
    public float pipeLength = 10.0f;

    [Header("Visuals")]
    public SkinnedMeshRenderer pressureMeshSkin;
    public Transform pipeLeftBone;
    public Transform pipeMidBone;
    public Transform pipeRightBone;

    public Text[] sizeText;
    public Slider[] slider;

    public Transform[] waterParticles;

    public AnimationCurve pipeCurve;

    public float mouseSensitivity;
    public float mouseHeldTime;

    private float[] t = {0,0.33333f,0.66666f};
    private void Start()
    {
        for(int i = 0; i < 3; i++)
        {
            slider[i].minValue = minSize;
            slider[i].maxValue = maxSize;
        }
    }
    public Transform pipeStart;
    void Update()
    {
        OnPipePropertyChanged();
        for(int i = 0; i < 3; i++)
        {
            float s = Mathf.Pow(pipeCurve.Evaluate(t[i]), 2) * Mathf.PI;
            float v = 1.0f / s;
            t[i] += v * Time.deltaTime * 1.0f;
            t[i] %= 1.0f;
            waterParticles[i].position = (((t[i] * 10.0f) * pipeStart.lossyScale.x)* -pipeStart.forward)  + pipeStart.position;
        }

        // Move Particle
        pipeLeftBone.localScale = new Vector3(pipeSize[0],pipeSize[0],1);
        pipeMidBone.localScale = new Vector3(pipeSize[1],pipeSize[1],1);
        pipeRightBone.localScale = new Vector3(pipeSize[2],pipeSize[2],1);

        if (Input.GetMouseButton(0))
            mouseHeldTime += Time.deltaTime;
        else
            mouseHeldTime = 0;

    }
    void OnPipePropertyChanged()
    {
        // Clamp Values
        for(int i = 0; i < 3; i++)
        {
            pipeSize[i] = Mathf.Clamp(pipeSize[i], minSize, maxSize);
            pipeSize[i] = slider[i].value;
            sizeText[i].text = slider[i].value.ToString("F2");
        }

        pipeCurve.MoveKey(0, new Keyframe(0.0f, pipeSize[0]));
        pipeCurve.MoveKey(1, new Keyframe(0.16666f, pipeSize[0]));
        pipeCurve.MoveKey(2, new Keyframe(0.33333f, pipeSize[1]));
        pipeCurve.MoveKey(3, new Keyframe(0.66666f, pipeSize[1]));
        pipeCurve.MoveKey(4, new Keyframe(1.0f - 0.16666f, pipeSize[2]));
        pipeCurve.MoveKey(5, new Keyframe(1.0f, pipeSize[2]));

        // Height of water in pressure pipes
        float v1 = 1.0f / (Mathf.Pow(pipeSize[0], 2) * Mathf.PI);
        float v2 = 1.0f / (Mathf.Pow(pipeSize[1], 2) * Mathf.PI);
        float v3 = 1.0f / (Mathf.Pow(pipeSize[2], 2) * Mathf.PI);

        pressureMeshSkin.SetBlendShapeWeight(0,100 - v1 * 300);
        pressureMeshSkin.SetBlendShapeWeight(3,((pipeSize[0] - minSize) / (maxSize - minSize)) * 100);

        pressureMeshSkin.SetBlendShapeWeight(1,100 - v2 * 300);
        pressureMeshSkin.SetBlendShapeWeight(4,((pipeSize[1] - minSize) / (maxSize - minSize)) * 100);

        pressureMeshSkin.SetBlendShapeWeight(2,100 - v3 * 300);
        pressureMeshSkin.SetBlendShapeWeight(5,((pipeSize[2] - minSize) / (maxSize - minSize)) * 100);
    }

    public void SizeChanged()
    {
        t = new float[] { 0.1f, 0.43333f, 0.76666f};
    }
}
