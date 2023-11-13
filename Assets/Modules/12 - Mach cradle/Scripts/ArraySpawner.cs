using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AR_Project.ObjectMangment
{

    public class ArraySpawner : MonoBehaviour
    {
        //
        // Fields
        //
        [property: SerializeField]
        public Vector3 SpawnOffset
        {
            get => _spawnOffset;
            set
            {
                _spawnOffset = value;
                UpdateOffset();
            }
        }

        public Vector3 OffsetPadding
        {
            get => _offsetPadding;
            set
            {
                _offsetPadding = value;
                UpdateOffset();
            }
        }

        
        [property: SerializeField] public int DesiredCount
        {
            get => _desiredCount;
            set
            {
                if (value < 0)
                    return;

                int diff = _desiredCount - value;
                if (diff > 0)
                    _spawner.DeleteRange(GetGameObjCount - diff, diff);
                else if (diff < 0)
                    Spawn(diff);

                _desiredCount = value;
            }
        }

        public GameObject Prefab{
            get => _prefab;
            set{
                _prefab = value;
                _spawner.DeleteAll();
                Spawn(_desiredCount);
            }
        }

        public int GetGameObjCount => SpawnedGO.Length;
        public GameObject[] SpawnedGO => _spawner.GetSpawnedGO();

        //
        // Variables
        //

        [Header("Spawner Settings")]
        [SerializeField] GameObject _prefab;
        [SerializeField][Min(0)] private int _desiredCount = 0;
        [SerializeField] private Vector3 _spawnOffset = Vector3.zero;
        [SerializeField] Vector3 _offsetPadding = Vector3.zero;
        [Space]
        [Header("Spawner")]
        [SerializeField] private Spawner _spawner = new Spawner();

        //
        //
        //

        public void UpdateArray()
        {
            int diff = _desiredCount - GetGameObjCount;

            if(diff < 0)
                _spawner.DeleteRange(GetGameObjCount - diff, diff);
            else if(diff > 0)
                Spawn(diff);
        }

        private void Spawn(int amount)
        {
            Vector3 currOffset = (_spawnOffset * GetGameObjCount) + _offsetPadding;
            for (int i = 0; i < amount; i++)
            {
                _spawner.SpawnObject(_prefab, transform.position + currOffset, transform.rotation, transform);
                currOffset += _spawnOffset;
            }
        }

        private void UpdateOffset()
        {
            Vector3 currOffset = _offsetPadding;
            foreach (var go in SpawnedGO)
            {
                go.transform.position = transform.position + currOffset;
                currOffset += _spawnOffset;
            }
        }
    }

}