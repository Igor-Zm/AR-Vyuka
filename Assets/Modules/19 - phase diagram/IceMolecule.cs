using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;


public class IceMolecule : MonoBehaviour
{
    public Transform a;
    public Transform b;

    public Rigidbody rb;


    public IceMolecule nb1;

    public IceMolecule nb2;

    public Vector3 nbPos1;
    public Vector3 nbPos2;

    public Vector3 nbRot1;
    public Vector3 nbRot2;

    public FixedJoint joint1;
    public FixedJoint joint2;

    public LineRenderer lr1;
    public LineRenderer lr2;

    public Color BondedColor;
    public Color FreeColor;

    private Material mat = null;

    public bool amI1 = false;
    public bool amI2 = false;

    public float changeCooldown = 0.5f;
    public float lastChange = 0;

    void UpdateLines()
    {

        int c = 0;
        if (joint1 != null)
        {
            lr1.SetPosition(0, a.position);
            lr1.SetPosition(1, joint1.connectedBody.transform.position);
            c++;
        }
        else
        {
            lr1.SetPosition(0, a.position);
            lr1.SetPosition(1, a.position);

        }

        if (joint2 != null)
        {
            lr2.SetPosition(0, b.position);
            lr2.SetPosition(1, joint2.connectedBody.transform.position);
            c++;
        }
        else
        {
            lr2.SetPosition(0, b.position);
            lr2.SetPosition(1, b.position);

        }

        if (Time.time > lastChange + changeCooldown)
        {
            lastChange = Time.time;
        }
        else
        {
            return;
        }
        SetColor(c != 0);
    }
    private void SetColor(bool bonded)
    {

        if (mat == null)
            mat = GetComponent<MeshRenderer>().materials[0];
        if (!bonded && !amI1 && !amI2)
        {
            mat.SetColor("_BaseColor", FreeColor);
        }
        else
        {
            mat.SetColor("_BaseColor", BondedColor);
        }
    }

    public bool CompareTransform()
    {
        float pDist = Vector3.Distance(transform.position, initialPosition);
        float rDist = Quaternion.Angle(transform.rotation, initialRotation)*3f;
        return (pDist + rDist) < PhaseDiagram.Instance.bondDist;

    }

    int chance1 = 0;
    int chance2 = 0;

    public Vector3 currentPosition;
    public Vector3 initialPosition;
    public Quaternion initialRotation;
    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
    }
    public void Init()
    {
        initialPosition = transform.position;
        initialRotation = transform.rotation;

        rb = GetComponent<Rigidbody>();
        rb.velocity = Random.onUnitSphere * PhaseDiagram.Instance.temperature;

        RaycastHit[] rh;
        rh = Physics.RaycastAll(a.position, a.forward);
        foreach (var item in rh)
        {

            if (item.distance < 5)
            {

                nb1 = item.collider.gameObject.GetComponent<IceMolecule>();
                if (nb1 != null)
                {
                    //  CreateJoint(true);
                    break;
                }
            }
        }

        rh = Physics.RaycastAll(b.position, b.forward);
        foreach (var item in rh)
        {

            if (item.distance < 5)
            {

                nb2 = item.collider.gameObject.GetComponent<IceMolecule>();
                if (nb2 != null)
                {
                    //CreateJoint(false);
                    break;
                }
            }
        }


        chance1 = Random.Range(1, 100);
        chance2 = Random.Range(1, 100);


        InvokeRepeating("Brown", Random.Range(1f, 3f), Random.Range(1f, 3f));

    }
    private void CreateJoint(bool a)
    {
        if (a && nb1 != null && joint1 == null)
        {
            joint1 = gameObject.AddComponent<FixedJoint>();
            joint1.connectedBody = nb1.GetComponent<Rigidbody>();
            nb1.amI1 = true;

        }
        else if (!a && nb2 != null && joint2 == null)
        {

            joint2 = gameObject.AddComponent<FixedJoint>();
            joint2.connectedBody = nb2.GetComponent<Rigidbody>();
            nb2.amI2 = true;
        }

    }
    private bool bondHappened = false;
    private void FixedUpdate()
    {
        bondHappened = false;
        joingin = false;
        if (chance1 < PhaseDiagram.Instance.breakPercentage && nb1 != null)
        {
            nb1.amI1 = false;
            Destroy(joint1);
        }
        else if (joint1 == null && nb1 != null)
        {
            TryToBond(true);

        }
        if (chance2 < PhaseDiagram.Instance.breakPercentage && nb2 != null)
        {
            nb2.amI2 = false;
            Destroy(joint2);
        }
        else if (joint2 == null && nb2 != null)
        {
            TryToBond(false);


        }


        UpdateLines();
        currentPosition = transform.position;
    }
    Vector3 Clamp11(Vector3 v)
    {
        return new Vector3(Mathf.Clamp(v.x, -1f, 1f), Mathf.Clamp(v.y, -1f, 1f), Mathf.Clamp(v.z, -1f, 1f));
    }
    public bool joingin = false;
    public Vector3 deb;

    bool ShouldIBond() {
        if (bondHappened)
            return false;

        if (joint1 != null && joint2 != null)
            return false;

        return true;
    }
    void TryToBond(bool _a)
    {
        if (!ShouldIBond())
            return;

        bondHappened = true;

       //if (a && nb1 != null)
       //    Debug.Log($"{gameObject.name} tries to bond with {nb1.name}");
       //else if (nb2 != null)
       //    Debug.Log($"{gameObject.name} tries to bond with {nb2.name}");
        rb.drag = 1f;
        rb.angularDrag = 1f;
        deb = Clamp11(initialPosition - transform.position);
        rb.AddForce(Clamp11(initialPosition - transform.position) * PhaseDiagram.Instance.temperature * 3f);
        Quaternion lerp = Quaternion.Lerp(transform.rotation, initialRotation, 0.02f * PhaseDiagram.Instance.temperature);
        rb.MoveRotation(lerp);
        joingin = true;

        if (_a)
        {
            if (nb1 != null)
            {
                nb1.TryToBond(true);
                nb1.TryToBond(false);
                if (CompareTransform() && nb1.CompareTransform())
                {
                    CreateJoint(_a);
                }
            }
        }
        else
        {
            if (nb2 != null)
            {

                nb2.TryToBond(true);
                nb2.TryToBond(false);
                if (CompareTransform() && nb2.CompareTransform())
                {
                    CreateJoint(_a);
                }
            }

        }

        amIReady = CompareTransform();
        if (nb1 != null)
            is1Ready = nb1.CompareTransform();
        if (nb2 != null)
            is2Ready = nb2.CompareTransform();

    }
    public bool amIReady = false;
    public bool is1Ready = false;
    public bool is2Ready = false;
    void Brown()
    {
        if (rb != null)
            rb.velocity = Random.onUnitSphere * PhaseDiagram.Instance.temperature / 3f;

    }

    private void OnCollisionEnter(Collision collision)
    {
        Brown();
    }
}