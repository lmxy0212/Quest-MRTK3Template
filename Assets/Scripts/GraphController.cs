using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class NodeData
{
    public string name;
    public int group;
}

[System.Serializable]
public class LinkData
{
    public int source;
    public int target;
    public int value;
}

[System.Serializable]
public class JsonDataClass
{
    public NodeData[] nodes;
    public LinkData[] links;
}

public class GraphController : MonoBehaviour
{
    public Node nodePrefab;
    public Link linkPrefab;

    private Hashtable nodes;
    private Hashtable links;
    private Hashtable colors;

    private int nodeCount = 0;
    private int linkCount = 0;

    private static ILogger logger = Debug.unityLogger;
    // private static string kTAG = "GraphController";

    private float springK = 50f;
    private float originalLen = -90.0f;
    private float c = 2000f;
    public int Base=0;

    public int Id_Base=0;

    public JsonDataClass jsonDataClass;

    private float randomSign()
    {
        System.Random rd = new System.Random();
        double tmp = rd.NextDouble();
        if (tmp > 0.5) return 1;
        return -1;
    }
    public void Loadagain()
    { 
        Reset();
        LoadLayout();
       
    }

    public void Reset()
    {

        Base = Id_Base;
        foreach (Node i in nodes.Values)
        {
            Destroy(i.gameObject);

        }
        foreach (Link link in links.Values)
        {
            Destroy(link.gameObject);
        }

        for (int i = 0; i < jsonDataClass.nodes.Length; i++)
        {
            jsonDataClass.nodes[i]= null;
        }

        for (int i = 0; i < jsonDataClass.links.Length; i++)
        {
            jsonDataClass.links[i] = null;
        }
            nodes.Clear();

        links.Clear();

        colors.Clear();

      //  jsonDataClass.nodes.Clear();

      //  jsonDataClass.links.Clear();

    }
    private void LoadLayout()
    {
        //string datajsonpath = application.datapath + "/data/data.json";
        TextAsset file = Resources.Load("data") as TextAsset;
        Debug.Log(""+ file);
       string dataJsonPath = file.ToString();
        Debug.Log("" + dataJsonPath);
         
        System.IO.StringReader sr = new System.IO.StringReader(dataJsonPath);
        string jsonStr = sr.ReadToEnd();
         jsonDataClass = JsonUtility.FromJson<JsonDataClass>(jsonStr);


        System.Random rd = new System.Random();
        for (int i = 0; i < jsonDataClass.nodes.Length; i++)
        {
            //if(jsonDataClass.nodes[i].group==0|| jsonDataClass.nodes[i].group == 1)
            //{


            if (jsonDataClass.links[i].target == Base)
            {
                int range = 1;
                float x = (rd.Next(-range, range)) / 500.0f;
                float y = (rd.Next(-range, range)) / 500.0f;
                float z = (rd.Next(-range, range)) / 500.0f;
                Node node = Instantiate(nodePrefab, new Vector3(x / 5, y / 5, z / 5), Quaternion.identity) as Node;

                //node.id = i;
                node.id = jsonDataClass.links[i].source;

                node.name = jsonDataClass.nodes[node.id].name;
                node.group = jsonDataClass.nodes[i].group;
              //  node.GetComponent<MeshRenderer>().material.SetColor("_Color", (Color)colors[node.group]);
                node.gameObject.transform.GetChild(0).GetComponent <Microsoft.MixedReality.Toolkit.UI.ToolTip>().ToolTipText=""+ node.name;
                nodes.Add(node.id, node);

            }

            if (i == 0)
            {
                int range = 1;
                float x = (rd.Next(-range, range)) / 500.0f;
                float y = (rd.Next(-range, range)) / 500.0f;
                float z = (rd.Next(-range, range)) / 500.0f;
                Node node = Instantiate(nodePrefab, new Vector3(x / 5, y / 5, z / 5), Quaternion.identity) as Node;
                node.id = Base;

                node.name = jsonDataClass.nodes[Base].name;
                node.group = jsonDataClass.nodes[Base].group;
              //  node.GetComponent<MeshRenderer>().material.SetColor("_Color", (Color)colors[node.group]);
                node.gameObject.transform.GetChild(0).GetComponent<Microsoft.MixedReality.Toolkit.UI.ToolTip>().ToolTipText = "" + node.name;

                nodes.Add(node.id, node);
            }


            nodeCount++;
        }
        for (int i = 0; i < jsonDataClass.links.Length; i++)
        {
            if (jsonDataClass.links[i].target == Base)
            {
                Node source = nodes[jsonDataClass.links[i].source] as Node;
                Node target = nodes[jsonDataClass.links[i].target] as Node;
                Link link = Instantiate(linkPrefab, source.transform.position, Quaternion.identity) as Link;
                link.id = i;
                link.source = source;
                link.target = target;
                link.value = jsonDataClass.links[i].value;

                links.Add(link.id, link);
            }
            linkCount++;
        }
    }

    void Start()
    {
        nodes = new Hashtable();
        links = new Hashtable();
        colors = new Hashtable();

        colors.Add(0, new Color(0.8f, 0.25f, 0.5f));
        colors.Add(1, new Color(0.25f, 0.8f, 1f));
        colors.Add(2, new Color(0, 0.25f, 0));
        colors.Add(3, Color.gray);
        colors.Add(4, new Color(0f, 0.25f, 0.5f));
        colors.Add(5, new Color(1f, 0.25f, 0.25f));
        colors.Add(6, new Color(1, 0.5f, 0f));
        colors.Add(7, new Color(0.25f, 0.8f, 0.25f));
        colors.Add(8, new Color(1, 0.75f, 0.25f));
        colors.Add(9, new Color(0f, 0, 0f));
        colors.Add(10, new Color(1, 0.8f, 0.8f));

        LoadLayout();
    }

    private void Update()
    {
        //Coulomb force
        foreach (Node i in nodes.Values)
        {
            i.force = Vector3.zero;
            foreach (Node j in nodes.Values)
            {
                if (i.id == j.id) continue;
                Vector3 dis = i.transform.position - j.transform.position;
                i.force += ((dis.normalized / 10) / (dis.magnitude * dis.magnitude) * c) / 10000;
            }
        }
        //Spring force
        foreach (Link link in links.Values)
        {
            Node source = link.source;
            Node target = link.target;
            Vector3 dis = source.transform.position - target.transform.position;
            Vector3 springForceToSource = ((dis.magnitude - originalLen) * springK * -dis.normalized) / 10000;
            Vector3 springForceToTarget = -springForceToSource;
            source.force += springForceToSource;
            target.force += springForceToTarget;
        }

    }
}
