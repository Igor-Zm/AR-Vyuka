using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleManager : MonoBehaviour
{
    [SerializeField] float _desiredSpeed = 2f;
    [SerializeField][Range(.001f, 2f)] float _applySpeedDelay;

    [SerializeField] float _smallRbMass;
    [SerializeField] float _bigRbMass;
    [SerializeField] private Rigidbody _bigParticleRB;
    [SerializeField] private MonoSpawner _spawner;

    [SerializeField] private Material _smallParticleMaterial;

    void Start() => SetTransparency(.5f);
    
    public void SetDesiredSpeed(float speed)
    {
        _desiredSpeed = speed;
        //CheckColliders();
        UpdateSpeed();
    }

    public void ApplySpeed()
    {
        //CheckColliders();
        StartCoroutine(WaitForSpeedApply());
    }

    private void UpdateSpeed()
    {
        foreach (var particle in _spawner.ObjectRBs)
            particle.velocity = particle.velocity.normalized * _desiredSpeed;

        //_bigParticleRB.velocity = _bigParticleRB.velocity.normalized * DesiredSpeed;
    }

    IEnumerator WaitForSpeedApply()
    {
        yield return new WaitForSeconds(_applySpeedDelay);
        UpdateSpeed();
    }

    public void SetSmallRbMass(float mass)
    {
        foreach(var rb in _spawner.ObjectRBs)
            rb.mass = mass;
    }

    public void SetBigRbMass(float mass) => _bigParticleRB.mass = mass;

    public void SetTransparency(float alpha) => 
        _smallParticleMaterial.SetFloat("_Alpha", alpha);



    
}
