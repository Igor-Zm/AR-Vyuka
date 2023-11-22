using System.Collections;
using System.Collections.Generic;
using System.Linq;
//using UniGLTF;
using TMPro;
using UnityEngine;

public class PTE_Controller : MonoBehaviour
{
    public enum PTE_STATUS { 
        def= 0,
        AtomicWeight = 1,
        Electronegativity = 2,
        Melting = 3,
        Density = 4,
        ThermalConductivity = 5,
    }

    public List<string> texts;
    public TMP_Text text;
    public Transform parent;
    public Transform[] cubes;

    public PTE_STATUS state = PTE_STATUS.def;
    public float speed = 1f;

    public float GetValueDefault(int index) {
        return 1f;
    }
    public float GetValueAtomicWeight(int index) {
        return 1f + atomicWeights[index] / 100;
    }
    public float GetValueElectronegativity(int index) {
        return 1f + electronegativities[index] ;
    }
    public float GetValueMelting(int index) {
        return 1f + Mathf.InverseLerp(-300f,4000f, meltingPoints[index])*6f ;
    }
    public float GetValueDensity(int index) {
        return 1f + densities[index]/3f ;
    }
    public float GetValueThermalConductivity(int index) {
        return 1f + thermalConductivities[index]/80 ;
    }
    void Start()
    {
        cubes = parent.GetComponentsInChildren<Transform>();

        texts = new List<string>();
        texts.Add(" ");
        texts.Add("Atomové hmotnosti");
        texts.Add("Elektronegativita");
        texts.Add("Teplota tání");
        texts.Add("Hustota");
        texts.Add("Vedení tepla");

        SetState(0);
    }

    public void SetState(float _val) {
        int val = Mathf.RoundToInt(_val);
        state = (PTE_STATUS)val;
        text.text = texts[val];
    
    }
    
    void Update(){

        for (int i = 0; i < cubes.Length; i++)
        {
            float target = 1f ;

            switch (state)
            {
                case PTE_STATUS.def:
                    break;
                case PTE_STATUS.AtomicWeight:
                    target = GetValueAtomicWeight(i);
                    break;
                case PTE_STATUS.Electronegativity:
                    target = GetValueElectronegativity(i);
                    break;
                case PTE_STATUS.Melting:
                    target = GetValueMelting(i);
                    break;
                case PTE_STATUS.Density:
                    target = GetValueDensity(i);
                    break;
                case PTE_STATUS.ThermalConductivity:
                    target = GetValueThermalConductivity(i);
                    break;
                default:
                    target = GetValueDefault(i);
                    break;
            }

            float val = Mathf.Lerp(cubes[i].localScale.y,target,speed*Time.deltaTime);


            cubes[i].localScale = new Vector3(1f,val,1f);
            cubes[i].localPosition = new Vector3(cubes[i].localPosition.x, val/2f, cubes[i].localPosition.z);
        }

    }

    public float[] atomicWeights = new float[]
{
    1.008f,       // Hydrogen
    4.002602f,    // Helium
    6.94f,        // Lithium
    9.0121831f,   // Beryllium
    10.81f,       // Boron
    12.011f,      // Carbon
    14.007f,      // Nitrogen
    15.999f,      // Oxygen
    18.998403163f, // Fluorine
    20.1797f,     // Neon
    22.98976928f,  // Sodium
    24.305f,      // Magnesium
    26.9815385f,  // Aluminium
    28.085f,      // Silicon
    30.973761998f, // Phosphorus
    32.06f,       // Sulfur
    35.45f,       // Chlorine
    39.948f,      // Argon
    39.0983f,     // Potassium
    40.078f,      // Calcium
    44.955908f,   // Scandium
    47.867f,      // Titanium
    50.9415f,     // Vanadium
    51.9961f,     // Chromium
    54.938044f,   // Manganese
    55.845f,      // Iron
    58.933194f,   // Cobalt
    58.6934f,     // Nickel
    63.546f,      // Copper
    65.38f,       // Zinc
    69.723f,      // Gallium
    72.63f,       // Germanium
    74.921595f,   // Arsenic
    78.971f,      // Selenium
    79.904f,      // Bromine
    83.798f,      // Krypton
    85.4678f,     // Rubidium
    87.62f,       // Strontium
    88.90584f,    // Yttrium
    91.224f,      // Zirconium
    92.90637f,    // Niobium
    95.95f,       // Molybdenum
    97.90721f,    // Technetium (most stable isotope)
    101.07f,      // Ruthenium
    102.90550f,   // Rhodium
    106.42f,      // Palladium
    107.8682f,    // Silver
    112.414f,     // Cadmium
    114.818f,     // Indium
    118.710f,     // Tin
    121.760f,     // Antimony
    127.60f,      // Tellurium
    126.90447f,   // Iodine
    131.293f,     // Xenon
    132.90545196f, // Cesium
    137.327f,     // Barium
    138.90547f,   // Lanthanum
    140.116f,     // Cerium
    140.90766f,   // Praseodymium
    144.242f,     // Neodymium
    144.91276f,   // Promethium (most stable isotope)
    150.36f,      // Samarium
    151.964f,     // Europium
    157.25f,      // Gadolinium
    158.92535f,   // Terbium
    162.500f,     // Dysprosium
    164.93033f,   // Holmium
    167.259f,     // Erbium
    168.93422f,   // Thulium
    173.045f,     // Ytterbium
    174.9668f,    // Lutetium
    178.49f,      // Hafnium
    180.94788f,   // Tantalum
    183.84f,      // Tungsten
    186.207f,     // Rhenium
    190.23f,      // Osmium
    192.217f,     // Iridium
    195.084f,     // Platinum
    196.966569f,  // Gold
    200.592f,     // Mercury
    204.38f,      // Thallium
    207.2f,       // Lead
    208.98040f,   // Bismuth
    209f,         // Polonium (most stable isotope)
    210f,         // Astatine (most stable isotope)
    222f,         // Radon (most stable isotope)
    223f,         // Francium (most stable isotope)
    226f,         // Radium (most stable isotope)
    227f,         // Actinium (most stable isotope)
    232.0377f,    // Thorium
    231.03588f,   // Protactinium
    238.02891f,   // Uranium
    237f,         // Neptunium (most stable isotope)
    244f,         // Plutonium (most stable isotope)
    243f,         // Americium (most stable isotope)
    247f,         // Curium (most stable isotope)
    247f,         // Berkelium (most stable isotope)
    251f,         // Californium (most stable isotope)
    252f,         // Einsteinium (most stable isotope)
    257f,         // Fermium (most stable isotope)
    258f,         // Mendelevium (most stable isotope)
    259f,         // Nobelium (most stable isotope)
    266f,         // Lawrencium (most stable isotope)
    267f,         // Rutherfordium (most stable isotope)
    268f,         // Dubnium (most stable isotope)
    271f,         // Seaborgium (most stable isotope)
    270f,         // Bohrium (most stable isotope)
    277f,         // Hassium (most stable isotope)
    276f,         // Meitnerium (most stable isotope)
    281f,         // Darmstadtium (most stable isotope)
    282f,         // Roentgenium (most stable isotope)
    285f,         // Copernicium (most stable isotope)
    286f,         // Nihonium (most stable isotope)
    289f,         // Flerovium (most stable isotope)
    290f,         // Moscovium (most stable isotope)
    293f,         // Livermorium (most stable isotope)
    294f,         // Tennessine (most stable isotope)
    294f          // Oganesson (most stable isotope)
};

    float[] electronegativities = new float[]
{
    2.20f,  // Hydrogen
    0f,     // Helium (no defined electronegativity)
    0.98f,  // Lithium
    1.57f,  // Beryllium
    2.04f,  // Boron
    2.55f,  // Carbon
    3.04f,  // Nitrogen
    3.44f,  // Oxygen
    3.98f,  // Fluorine
    0f,     // Neon (no defined electronegativity)
    0.93f,  // Sodium
    1.31f,  // Magnesium
    1.61f,  // Aluminium
    1.90f,  // Silicon
    2.19f,  // Phosphorus
    2.58f,  // Sulfur
    3.16f,  // Chlorine
    0f,     // Argon (no defined electronegativity)
    0.82f,  // Potassium
    1.00f,  // Calcium
    1.36f,  // Scandium
    1.54f,  // Titanium
    1.63f,  // Vanadium
    1.66f,  // Chromium
    1.55f,  // Manganese
    1.83f,  // Iron
    1.88f,  // Cobalt
    1.91f,  // Nickel
    1.90f,  // Copper
    1.65f,  // Zinc
    1.81f,  // Gallium
    2.01f,  // Germanium
    2.18f,  // Arsenic
    2.55f,  // Selenium
    2.96f,  // Bromine
    3.00f,  // Krypton
    0.82f,  // Rubidium
    0.95f,  // Strontium
    1.22f,  // Yttrium
    1.33f,  // Zirconium
    1.6f,   // Niobium
    2.16f,  // Molybdenum
    1.9f,   // Technetium
    2.2f,   // Ruthenium
    2.28f,  // Rhodium
    2.20f,  // Palladium
    2.20f,  // Silver
    1.93f,  // Cadmium
    1.69f,  // Indium
    1.78f,  // Tin
    1.96f,  // Antimony
    2.05f,  // Tellurium
    2.66f,  // Iodine
    3.00f,  // Xenon
    0.79f,  // Cesium
    0.89f,  // Barium
    1.10f,  // Lanthanum
    1.12f,  // Cerium
    1.13f,  // Praseodymium
    1.14f,  // Neodymium
    1.17f,    // Promethium
    1.2f,     // Samarium
    1.2f,     // Europium
    1.2f,     // Gadolinium
    1.1f,     // Terbium
    1.22f,    // Dysprosium
    1.23f,    // Holmium
    1.24f,    // Erbium
    1.25f,    // Thulium
    1.1f,     // Ytterbium
    1.27f,    // Lutetium
    1.3f,     // Hafnium
    1.5f,     // Tantalum
    2.36f,    // Tungsten
    1.9f,     // Rhenium
    2.2f,     // Osmium
    2.2f,     // Iridium
    2.28f,    // Platinum
    2.54f,    // Gold
    2.0f,     // Mercury
    1.62f,    // Thallium
    2.33f,    // Lead
    2.02f,    // Bismuth
    2.0f,     // Polonium
    2.2f,     // Astatine
    0.0f,     // Radon (no defined electronegativity)
    0.7f,     // Francium
    0.9f,     // Radium
    1.1f,     // Actinium
    1.3f,     // Thorium
    1.5f,     // Protactinium
    1.38f,    // Uranium
    1.36f,    // Neptunium
    1.28f,    // Plutonium
    1.3f,     // Americium
    1.3f,     // Curium
    1.3f,     // Berkelium
    1.3f,     // Californium
    // Placeholder values for elements beyond Californium as their electronegativity values are not well established or unknown
    0.0f,     // Einsteinium
    0.0f,     // Fermium
    0.0f,     // Mendelevium
    0.0f,     // Nobelium
    0.0f,     // Lawrencium
    0.0f,     // Rutherfordium
    0.0f,     // Dubnium
    0.0f,     // Seaborgium
    0.0f,     // Bohrium
    0.0f,     // Hassium
    0.0f,     // Meitnerium
    0.0f,     // Darmstadtium
    0.0f,     // Roentgenium
    0.0f,     // Copernicium
    0.0f,     // Nihonium
    0.0f,     // Flerovium
    0.0f,     // Moscovium
    0.0f,     // Livermorium
    0.0f,     // Tennessine
    0.0f      // Oganesson
};

    float[] densities = new float[] {
    0.00008988f,  // Hydrogen
    0.0001785f,   // Helium
    0.534f,       // Lithium
    1.85f,        // Beryllium
    2.34f,        // Boron
    2.267f,       // Carbon
    0.0012506f,   // Nitrogen
    0.001429f,    // Oxygen
    0.001696f,    // Fluorine
    0.0008999f,   // Neon
    0.971f,       // Sodium
    1.738f,       // Magnesium
    2.698f,       // Aluminium
    2.3296f,      // Silicon
    1.82f,        // Phosphorus
    2.067f,       // Sulfur
    0.003214f,    // Chlorine
    0.0017837f,   // Argon
    0.862f,       // Potassium
    1.54f,        // Calcium
    2.989f,       // Scandium
    4.54f,        // Titanium
    6.11f,        // Vanadium
    7.15f,        // Chromium
    7.44f,        // Manganese
    7.874f,       // Iron
    8.86f,        // Cobalt
    8.912f,       // Nickel
    8.96f,        // Copper
    7.134f,       // Zinc
    5.907f,       // Gallium
    5.323f,       // Germanium
    5.776f,       // Arsenic
    4.809f,       // Selenium
    3.122f,       // Bromine
    0.003733f,    // Krypton
    1.532f,       // Rubidium
    2.64f,        // Strontium
    4.469f,       // Yttrium
    6.506f,       // Zirconium
    8.57f,        // Niobium
    10.22f,       // Molybdenum
    11.5f,        // Technetium
    12.37f,       // Ruthenium
    12.41f,       // Rhodium
    12.02f,       // Palladium
    10.49f,       // Silver
    8.65f,        // Cadmium
    7.31f,        // Indium
    7.287f,       // Tin
    6.685f,       // Antimony
    6.232f,       // Tellurium
    4.93f,        // Iodine
    0.005887f,    // Xenon
    1.873f,       // Cesium
    3.594f,       // Barium
    6.145f,       // Lanthanum
    6.77f,        // Cerium
    6.773f,       // Praseodymium
    7.007f,       // Neodymium
    7.26f,        // Promethium
    7.52f,        // Samarium
    5.243f,       // Europium
    7.895f,       // Gadolinium
    8.229f,       // Terbium
    8.55f,        // Dysprosium
    8.795f,       // Holmium
    9.066f,       // Erbium
    9.321f,       // Thulium
    6.965f,       // Ytterbium
    9.84f,        // Lutetium
    13.31f,       // Hafnium
    16.654f,      // Tantalum
     19.3f,       // Tungsten
    21.02f,      // Rhenium
    22.61f,      // Osmium
    22.56f,      // Iridium
    21.45f,      // Platinum
    19.32f,      // Gold
    13.546f,     // Mercury
    11.85f,      // Thallium
    11.34f,      // Lead
    9.807f,      // Bismuth
    9.32f,       // Polonium
    7.0f,        // Astatine (estimated)
    0.00973f,    // Radon
    1.87f,       // Francium (estimated)
    5.5f,        // Radium (estimated)
    10.07f,      // Actinium
    11.72f,      // Thorium
    15.37f,      // Protactinium
    18.95f,      // Uranium
    20.45f,      // Neptunium
    19.86f,      // Plutonium
    13.69f,      // Americium
    13.51f,      // Curium
    14.78f,      // Berkelium
    15.1f,       // Californium
    0.0f,        // Einsteinium
    0.0f,        // Fermium
    0.0f,        // Mendelevium
    0.0f,        // Nobelium
    0.0f,        // Lawrencium
    0.0f,        // Rutherfordium
    0.0f,        // Dubnium
    0.0f,        // Seaborgium
    0.0f,        // Bohrium
    0.0f,        // Hassium
    0.0f,        // Meitnerium
    0.0f,        // Darmstadtium
    0.0f,        // Roentgenium
    0.0f,        // Copernicium
    0.0f,        // Nihonium
    0.0f,        // Flerovium
    0.0f,        // Moscovium
    0.0f,        // Livermorium
    0.0f,        // Tennessine
    0.0f         // Oganesson

    };
    float[] meltingPoints = new float[]
{
    -259.16f,  // Hydrogen
    -272.20f,  // Helium
    180.54f,   // Lithium
    1287.0f,   // Beryllium
    2075.0f,   // Boron
    3550.0f,   // Carbon (Sublimation)
    -210.00f,  // Nitrogen
    -218.79f,  // Oxygen
    -219.67f,  // Fluorine
    -248.59f,  // Neon
    97.72f,    // Sodium
    650.0f,    // Magnesium
    660.32f,   // Aluminium
    1414.0f,   // Silicon
    44.15f,    // Phosphorus
    112.8f,    // Sulfur
    -101.5f,   // Chlorine
    -189.35f,  // Argon
    63.38f,    // Potassium
    842.0f,    // Calcium
    1541.0f,   // Scandium
    1668.0f,   // Titanium
    1910.0f,   // Vanadium
    1907.0f,   // Chromium
    1246.0f,   // Manganese
    1538.0f,   // Iron
    1495.0f,   // Cobalt
    1455.0f,   // Nickel
    1084.62f,  // Copper
    419.53f,   // Zinc
    29.76f,    // Gallium
    938.25f,   // Germanium
    817.0f,    // Arsenic (Sublimation)
    221.0f,    // Selenium
    -7.2f,     // Bromine
    -157.36f,  // Krypton
    39.31f,    // Rubidium
    777.0f,    // Strontium
    1526.0f,   // Yttrium
    1855.0f,   // Zirconium
    2477.0f,   // Niobium
    2623.0f,   // Molybdenum
    2157.0f,   // Technetium
    2334.0f,   // Ruthenium
    1964.0f,   // Rhodium
    1554.9f,   // Palladium
    961.78f,   // Silver
    321.07f,   // Cadmium
    156.60f,   // Indium
    231.93f,   // Tin
    630.0f,    // Antimony
    449.51f,   // Tellurium
    113.7f,    // Iodine
    -111.8f,   // Xenon
    28.44f,    // Cesium
    727.0f,    // Barium
    920.0f,    // Lanthanum
    798.0f,    // Cerium
    931.0f,    // Praseodymium
    1021.0f,   // Neodymium
    1080.0f,    // Promethium
    1345.0f,    // Samarium
    1099.0f,    // Europium
    1585.0f,    // Gadolinium
    1629.0f,    // Terbium
    1680.0f,    // Dysprosium
    1747.0f,    // Holmium
    1802.0f,    // Erbium
    1818.0f,    // Thulium
    1097.0f,    // Ytterbium
    1925.0f,    // Lutetium
    2230.0f,    // Hafnium
    3017.0f,    // Tantalum
    3422.0f,    // Tungsten
    3186.0f,    // Rhenium
    3033.0f,    // Osmium
    2446.0f,    // Iridium
    1768.0f,    // Platinum
    1064.18f,   // Gold
    -38.83f,    // Mercury (melts at a temperature below 0°C)
    303.5f,     // Thallium
    327.46f,    // Lead
    271.4f,     // Bismuth
    254.0f,     // Polonium
    302.0f,     // Astatine
    -71.0f,     // Radon
    27.0f,      // Francium
    700.0f,     // Radium
    1050.0f,    // Actinium
    1750.0f,    // Thorium
    1568.0f,    // Protactinium
    1135.0f,    // Uranium
    640.0f,     // Neptunium
    639.4f,     // Plutonium
    1176.0f,    // Americium
    1340.0f,    // Curium
    986.0f,     // Berkelium
    900.0f,     // Californium
    860.0f,     // Einsteinium
    1527.0f,    // Fermium
    0.0f,       // Mendelevium
    0.0f,       // Nobelium
    0.0f,       // Lawrencium
    0.0f,       // Rutherfordium
    0.0f,       // Dubnium
    0.0f,       // Seaborgium
    0.0f,       // Bohrium
    0.0f,       // Hassium
    0.0f,       // Meitnerium
    0.0f,       // Darmstadtium
    0.0f,       // Roentgenium
    0.0f,       // Copernicium
    0.0f,       // Nihonium
    0.0f,       // Flerovium
    0.0f,       // Moscovium
    0.0f,       // Livermorium
    0.0f,       // Tennessine
    0.0f        // Oganesson
};

    float[] thermalConductivities = new float[]
{
    0.1805f,  // Hydrogen
    0.1513f,  // Helium
    85.0f,    // Lithium
    200.0f,   // Beryllium
    27.0f,    // Boron
    140.0f,   // Carbon (Diamond)
    0.02583f, // Nitrogen
    0.02658f, // Oxygen
    0.0277f,  // Fluorine
    0.0491f,  // Neon
    142.0f,   // Sodium
    156.0f,   // Magnesium
    237.0f,   // Aluminium
    149.0f,   // Silicon
    0.236f,   // Phosphorus (white)
    0.205f,   // Sulfur
    0.0089f,  // Chlorine
    0.01772f, // Argon
    102.5f,   // Potassium
    201.0f,   // Calcium
    15.8f,    // Scandium
    21.9f,    // Titanium
    30.7f,    // Vanadium
    93.9f,    // Chromium
    7.81f,    // Manganese
    80.4f,    // Iron
    100.0f,   // Cobalt
    90.9f,    // Nickel
    401.0f,   // Copper
    116.0f,   // Zinc
    29.0f,    // Gallium
    60.2f,    // Germanium
    50.2f,    // Arsenic
    0.52f,    // Selenium
    0.12f,    // Bromine
    0.00943f, // Krypton
    58.2f,    // Rubidium
    35.3f,    // Strontium
    17.0f,    // Yttrium
    22.6f,    // Zirconium
    53.7f,    // Niobium
    138.0f,   // Molybdenum
    50.6f,    // Technetium
    117.0f,   // Ruthenium
    150.0f,   // Rhodium
    71.8f,    // Palladium
    429.0f,   // Silver
    96.6f,    // Cadmium
    81.8f,    // Indium
    66.6f,    // Tin
    24.4f,    // Antimony
    2.35f,    // Tellurium
    0.449f,   // Iodine
    0.00565f, // Xenon
    35.9f,    // Cesium
    18.4f,    // Barium
    13.0f,    // Lanthanum
    11.5f,    // Cerium
    12.5f,    // Praseodymium
    16.5f,    // Neodymium
    0.0f,      // Promethium
    13.3f,     // Samarium
    13.9f,     // Europium
    10.6f,     // Gadolinium
    11.1f,     // Terbium
    10.7f,     // Dysprosium
    16.2f,     // Holmium
    14.3f,     // Erbium
    16.8f,     // Thulium
    38.7f,     // Ytterbium
    16.4f,     // Lutetium
    23.0f,     // Hafnium
    57.5f,     // Tantalum
    173.0f,    // Tungsten
    47.9f,     // Rhenium
    87.6f,     // Osmium
    147.0f,    // Iridium
    71.6f,     // Platinum
    317.0f,    // Gold
    8.3f,      // Mercury
    46.1f,     // Thallium
    35.3f,     // Lead
    7.97f,     // Bismuth
    20.0f,     // Polonium
    1.7f,      // Astatine
    0.00361f,  // Radon
    0.0f,      // Francium
    18.6f,     // Radium
    12.0f,     // Actinium
    54.0f,     // Thorium
    47.0f,     // Protactinium
    27.5f,     // Uranium
    6.3f,      // Neptunium
    6.74f,     // Plutonium
    10.0f,     // Americium
    10.0f,     // Curium
    10.0f,     // Berkelium
    10.0f,     // Californium
    // Placeholder values for elements beyond Californium as their thermal conductivities are not well established or unknown
    0.0f,      // Einsteinium
    0.0f,      // Fermium
    0.0f,      // Mendelevium
    0.0f,      // Nobelium
    0.0f,      // Lawrencium
    0.0f,      // Rutherfordium
    0.0f,      // Dubnium
    0.0f,      // Seaborgium
    0.0f,      // Bohrium
    0.0f,      // Hassium
    0.0f,      // Meitnerium
    0.0f,      // Darmstadtium
    0.0f,      // Roentgenium
    0.0f,      // Copernicium
    0.0f,      // Nihonium
    0.0f,      // Flerovium
    0.0f,      // Moscovium
    0.0f,      // Livermorium
    0.0f,      // Tennessine
    0.0f       // Oganesson


};

}
