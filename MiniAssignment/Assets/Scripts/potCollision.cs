using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class potCollision : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] GameObject pot;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Environment.z.text = pot.transform.position.ToString();
    }
}
