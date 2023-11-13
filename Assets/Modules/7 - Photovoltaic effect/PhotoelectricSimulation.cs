using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.EventSystems;

public class PhotoelectricSimulation : MonoBehaviour
{

    struct ElectronParticle
    {
        public GameObject particle;
        public float t;
    }

    public Gradient lightGradient;

    public GameObject electronPrefab;
    private ElectronParticle[] electronParticles = new ElectronParticle[100];
    public Transform spawnPos;
    public Transform endPos;
    public AnimationCurve accelCurve;
    public AnimationCurve linearCurve;

    private float travelDistance = 0.0f;

    [Range(231.0f,642.0f)]
    public float metalNM = 400.0f;

    [Range(200.0f,800.0f)]
    public float lightNM = 400.0f;

    [Range(1,100)]  
    public int electronAmount = 100;

    [Range(-5.0f,5.0f)]
    public float thresholdVoltage = 1.0f;

    // UI
    public TMP_Text voltageText;
    public TMP_Text voltageSliderText;
    public TMP_Text lightNMSliderText;
    public TMP_Text metalNMSliderText;
    public Slider voltageSlider;
    public Slider lightNMSlider;
    public Slider metalNMSlider;

    // Visuals
    public Transform knob;
    public Transform voltagePointer;
    float voltageBuildup = 0.0f;
    public MeshRenderer cableRenderer;
    public Material[] cableMaterials;
    public Light shiningLight;

    float spawnRange = 0.3f;

    public float mouseSensitivity = 10.0f;
    public float mousePressedTime;
    bool overUI = false;
    bool pressedLMB = false;

    private void Start()
    {
        for(int i = 0; i < 100; i++)
        {
            GameObject created = Instantiate(electronPrefab, spawnPos.position + GetSpawnOffset(), Quaternion.identity, spawnPos);
            electronParticles[i].particle = created;
            electronParticles[i].t = Random.Range(0.0f,1.0f);
        }

        travelDistance = (spawnPos.position - endPos.position).magnitude;

        SliderChange();
    }

    void Update()
    {

        if (Input.GetMouseButtonDown(0))
        {
            mousePressedTime = Time.deltaTime;
            overUI = EventSystem.current.IsPointerOverGameObject();
            pressedLMB = true;
        }
        if (Input.GetMouseButtonUp(0))
        {
            overUI = false;
            mousePressedTime = 0;
            pressedLMB = false;
        }

       

        float metalEnergy = WavelengthToEnergyVolts(metalNM);
        float lightEnergy = WavelengthToEnergyVolts(lightNM);

        float colorT = ((lightNM - 400.0f) / 360.0f);

        if(colorT == Mathf.Clamp01(colorT))
            shiningLight.color = lightGradient.Evaluate(colorT);
        else
            shiningLight.color = new Color(0.1f,0.1f,0.1f);

        if(lightNM < metalNM)
        {
            // Calculate travelled distance in tube
            float electronSpeed = (lightEnergy - metalEnergy) * 1000000000;
            float result = electronSpeed;
                        
            // Get max time of curve
            float maxT = 1.0f;
            
            Keyframe keyframe = accelCurve.keys[1];

            if(thresholdVoltage > 0.0f)
            {
                result /= thresholdVoltage;
                result = Mathf.Min(result,1.1f);
                keyframe.value = 1.0f;
                if(result > 1.0f)
                    maxT = result * 0.5f;
            }
            else
            {
                result /= (6.00f + thresholdVoltage);
                result = Mathf.Max(1.05f, result);
                keyframe.value = (-thresholdVoltage * 0.8f) + 1.0f;
                maxT = 0.7f / (keyframe.value + 1.05f);
                //Debug.Log("maxT: " + maxT);
            }

            accelCurve.MoveKey(1,keyframe);

            // VISUALS
            voltageBuildup += ((result > 1.0f) ? 1.0f : -1.0f) * Time.deltaTime;
            voltageBuildup = Mathf.Clamp01(voltageBuildup);
            voltagePointer.localEulerAngles = new Vector3(voltageBuildup * -50.0f, 0.0f, 0.0f);

            // Update each particle
            for(int i = 0; i < electronAmount; i++)
            {
                ElectronParticle currentParticle = electronParticles[i];

                currentParticle.particle.SetActive(true);
                currentParticle.t += Time.deltaTime * 0.33f;
                currentParticle.t %= maxT;
                
                Vector3 newPos = currentParticle.particle.transform.localPosition;

                newPos.z = (thresholdVoltage) == 0.0f ? 
                    -linearCurve.Evaluate(currentParticle.t) * result * travelDistance :
                    -accelCurve.Evaluate(currentParticle.t) * result * travelDistance;

                currentParticle.particle.transform.localPosition = newPos;
            
                electronParticles[i] = currentParticle;
            }
        }
        else
        {
            for(int i = 0; i < 100; i++)
            {
                electronParticles[i].particle.SetActive(false);
            }
        }
    }
    float WavelengthToEnergyVolts(float wavelength)
    {
        return (float)((0.000000000198644586 / wavelength) * 6242);
    }
    public void UpdateVoltage()
    {
        bool changeMats = (Mathf.Sign(thresholdVoltage) != Mathf.Sign(voltageSlider.value));

        thresholdVoltage = voltageSlider.value;
        voltageText.text = voltageSlider.value.ToString("0.0");
        SliderChange();
        
        knob.localEulerAngles = new Vector3(-(80.0f + (voltageSlider.value + 5.0f) * 16.0f), 0, 0);

        if(changeMats)
        {
            Material[] tempMats = cableRenderer.materials; 

            if(thresholdVoltage < 0.0f)
            {
                tempMats[1] = cableMaterials[0];
                tempMats[2] = cableMaterials[1];
            }
            else
            {
                tempMats[1] = cableMaterials[2];
                tempMats[2] = cableMaterials[3];
            }

            cableRenderer.materials = tempMats;
        }
    }
    public void UpdateLightNM()
    {
        lightNM = lightNMSlider.value;
        SliderChange();
    }
    public void UpdateMetalNM()
    {
        metalNM = metalNMSlider.value;
        SliderChange();
    }
    void SliderChange()
    {
        for(int i = 0; i < 100; i++)
        {
            electronParticles[i].t = Random.Range(0.0f,1.0f);
        }

        voltageSliderText.text = "napětí (" + thresholdVoltage.ToString("0.0") + " V)";
        lightNMSliderText.text = "vlnová délka záření (" + lightNM + " nm)";
        metalNMSliderText.text = "mezní vlnová délka (" + metalNM + "nm)";
    }
    Vector3 GetSpawnOffset()
    {
        Vector3 spawnOffset = new Vector3(Random.Range(-spawnRange,spawnRange),Random.Range(-spawnRange,spawnRange), 0.0f);
        if(spawnOffset.magnitude > spawnRange)
        { 
            spawnOffset.Normalize();
            spawnOffset *= spawnRange;
        }

        return spawnOffset; 
    }
}
