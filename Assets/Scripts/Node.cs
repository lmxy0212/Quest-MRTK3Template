using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Node : MonoBehaviour
{
    private Rigidbody rd;
  //  private int thrust=3;
    private float damp = 30f;
    private float gravity = 5f;
  //  private float epsilon = 1f ;
    

    public int id;
    public int group;

    private static ILogger logger = Debug.unityLogger;
    private string kTAG = "Node ";

    public Vector3 force;

    public GraphController graphController;

    public GameObject GraphController;
    void Start()
    {
        this.kTAG += this.name;
        rd = this.GetComponent<Rigidbody>();
        force = new Vector3(0,0,0);

        if (GraphController == null)
            GraphController = GameObject.FindWithTag("GraphController");

        graphController= GraphController.GetComponent<GraphController>();
    }
 
    void Update()
    {
        
        force += -rd.velocity * this.damp;
        force += -this.transform.position * this.gravity; 
        rd.AddForce(force);

        /*
        if (force.magnitude < this.epsilon && rd.velocity.magnitude < this.epsilon)
        {
            rd.velocity = Vector3.zero;
            return;
        }
        */
    }

    public void SendIdToGraphController()
    {
        graphController.Id_Base = id;
        Debug.Log("" + id);
        graphController.Loadagain();
    }
}
