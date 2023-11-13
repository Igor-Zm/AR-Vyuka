using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SolarSystem
{
    public struct InteractArgs
    {
        public int Side; //0 = Left | 1 = Right 
        public Direction Direction;

        public InteractArgs(int side, Direction dir)
        {
            this.Side = side;
            this.Direction = dir;
        }
    }
    
}