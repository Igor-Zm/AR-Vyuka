using System.Collections;
using System.Collections.Generic;
using SolarSystem;
using UnityEngine;

interface IGameModeBehavior
{
    void Restart();
    void Stop();
    void Update();
    Vector3 GetAnchorPos();
    float GetDistance();
    void Interact(InteractArgs args);
    int[] GetPlanetIndex();
}