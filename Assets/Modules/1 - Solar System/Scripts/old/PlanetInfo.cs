using System;

namespace SolarSystem
{
    [Serializable]
    public class PlanetInfo
    {
        public string Name;
        public string Info;

        public PlanetInfo(string name, string info)
        {
            this.Name = name;
            this.Info = info;
        }
    }
}