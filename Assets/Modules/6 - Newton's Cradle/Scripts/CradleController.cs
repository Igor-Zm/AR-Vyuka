using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Unity.Mathematics;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;
using static System.Net.Mime.MediaTypeNames;

public class CradleController : MonoBehaviour
{
    [SerializeField] private GameObject[] spheres;
    private Rigidbody[] rb_spheres;
    private ConfigurableJoint[] hinges;

    [SerializeField] private Animator state_animator;

    [Space] public float[] SwingSpeed;

    [SerializeField] private int curr_shpere = 0;
    public float PushDelay = 1;
    public float PushDelayVar = 1;
    [Range(0, 1)] public float Stop_Damp;
    private float[] stop_velo;
    bool[] done;
    [SerializeField] private float timer = 0;

    public UnityEngine.UI.Slider tSlider;
    public UnityEngine.UI.Slider fSlider;
    public UnityEngine.UI.Text fText;
    public UnityEngine.UI.Text tText;


    enum STATE
    {
        ONE = 0,
        TWO
    }

    private STATE curr_state = STATE.ONE;

    //Hinge speed vector
    private readonly Vector3[] SPEED_VECTOR = { Vector3.forward, Vector3.right };
    

    private Vector3 start_rot;

    private delegate bool Behavior();

    private Behavior curr_behavior = null;
    private Queue<Behavior> behavior_que = new Queue<Behavior>();


    void Start()
    {
        fixed_timestamp_temp = Time.fixedDeltaTime;
        hinges = new ConfigurableJoint[spheres.Length];
        rb_spheres = new Rigidbody[spheres.Length];
        stop_velo = new float[spheres.Length];
        done = new bool [spheres.Length];

        for (int i = 0; i < spheres.Length; i++)
        {
            hinges[i] = spheres[i].GetComponent<ConfigurableJoint>();
            rb_spheres[i] = spheres[i].GetComponent<Rigidbody>();
            stop_velo[i] = 0;
            done[i] = false;
        }

        start_rot = spheres[0].transform.localRotation.eulerAngles;

        behavior_que.Enqueue(InitSwing);
        NextBehavior();
    }


    void Update()
    {
        if (curr_behavior != null)
            if (curr_behavior())
                NextBehavior();
    }

    private void NextBehavior()
    {
        if (behavior_que.Count > 0)
            curr_behavior = behavior_que.Dequeue();
        else
            curr_behavior = null;
    }

    private bool InitSwing()
    {
        if (TimerFinished(PushDelay * PushDelayVar))
            PushSpehre(rb_spheres[curr_shpere++]);

        if (curr_shpere <= spheres.Length - 1)
            return false;

        curr_shpere = 0;
        timer = 0;
        return true;
    }

    private void PushSpehre(Rigidbody sphere)
    {
        sphere.GetComponent<Rigidbody>().velocity =
            SPEED_VECTOR[(int)curr_state] * (SwingSpeed[(int)curr_state] / (curr_state == STATE.TWO ? PushDelayVar : 1));
    }


    private void StopSphere(Rigidbody sphere)
    {
        sphere.velocity = Vector3.zero;
        sphere.angularVelocity = Vector3.zero;
        sphere.gameObject.transform.localRotation = Quaternion.Euler(start_rot);
    }

    private void StopAll()
    {
        for (int i = 0; i < spheres.Length; i++)
            StopSphere(rb_spheres[i]);
    }

    private bool StopAll_B()
    {
        for (int i = 0; i < spheres.Length; i++)
        {
            if (done[i])
                continue;

            rb_spheres[i].velocity = Vector3.zero;
            rb_spheres[i].angularVelocity = Vector3.zero;

            Vector3 rotation = spheres[i].transform.localRotation.eulerAngles;

            rotation.x = Mathf.SmoothDampAngle(rotation.x, start_rot.x, ref stop_velo[i], Stop_Damp);

            spheres[i].transform.localRotation = Quaternion.Euler(rotation);

            if (Mathf.Abs(Mathf.DeltaAngle(rotation.x, start_rot.x)) < .3f)
            {
                done[i] = true;
                StopSphere(rb_spheres[i]);
                stop_velo[i] = 0;
            }
        }

        foreach (var b in done)
            if (!b)
                return false;

        ResetVars();

        return true;
    }

    private void ResetVars()
    {
        for (int i = 0; i < stop_velo.Length; i++)
        {
            stop_velo[i] = 0;
            done[i] = false;
        }
        
        
        curr_shpere = 0;
        timer = 0;
    }

    private bool AnimStart()
    {
        state_animator.SetTrigger("Cradle_Switch");
        return true;
    }


    private bool TimerFinished(float desired_time)
    {
        timer += Time.deltaTime;

        if (timer < desired_time)
            return false;

        timer -= desired_time;
        return true;
    }


    private bool StateChange_B()
    {
        float length = .25f;
        float t = timer / length;
        Vector3 desired_rot = Vector3.zero;
        desired_rot.y = ((int)curr_state == 1 ? 1 - t : t) * 90;
        for (int i = 0; i < spheres.Length; i++)
        {
            spheres[i].transform.parent.rotation = Quaternion.Euler(desired_rot);
            rb_spheres[i].velocity = Vector3.zero;
            rb_spheres[i].angularVelocity = Vector3.zero;
        }


        if (!TimerFinished(length))
            return false;

        curr_state++;
        if ((int)curr_state > (int)STATE.TWO)
            curr_state = STATE.ONE;
        
        desired_rot.y = ((int)curr_state == 0 ? 0 : 1) * 90;
        for (int i = 0; i < spheres.Length; i++)
        {
            spheres[i].transform.parent.rotation = Quaternion.Euler(desired_rot);
            rb_spheres[i].velocity = Vector3.zero;
            rb_spheres[i].angularVelocity = Vector3.zero;
        }

        timer = 0;
        return true;
    }

    public void ChangeMode()
    {
        if (state_animator.IsInTransition(0))
            return;

        curr_shpere = 0;

        curr_behavior = null;
        behavior_que.Clear();
        behavior_que.Enqueue(StopAll_B);
        behavior_que.Enqueue(AnimStart);
        behavior_que.Enqueue(StateChange_B);
        behavior_que.Enqueue(InitSwing);
        NextBehavior();
    }

    private float fixed_timestamp_temp;
    public void ChangeTimeSpeed()
    {
        Time.timeScale = tSlider.value;
        tText.text = $"t: {Math.Round(tSlider.value, 3)}";
        Time.fixedDeltaTime = fixed_timestamp_temp * tSlider.value;
    }
    public void Restart()
    {
        PushDelayVar = fSlider.value;
        fText.text = fText.text.Substring(0, 4) + " / " + Convert.ToString(fSlider.value);

        curr_behavior = null;
        behavior_que.Clear();
        behavior_que.Enqueue(StopAll_B);
        behavior_que.Enqueue(InitSwing);
        NextBehavior();
    }
}