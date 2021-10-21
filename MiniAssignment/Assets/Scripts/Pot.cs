using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pot : MonoBehaviour
{
    // public Environment env = gameObject.GetComponent<Environment>();
    // Start is called before the first frame update
    void Start()
    {
        
    }


    // Update is called once per frame
    void Update()
    {
        // Environment.x.text = "test pot.cs";
        // GameControl.score++;
    }
    private void OnCollisionEnter(Collision collision){
        // GameControl.score++;
        Vector3 camPos = Camera.current.transform.position;
        Vector3 potPos = this.transform.position;
        Vector3 camToPot = potPos - camPos;
        Vector3 camFor = Camera.current.transform.forward;
        Vector3 camToPlane = Vector3.Project(camToPot, camFor);
        float depth = camToPlane.magnitude;
        if (collision.gameObject.tag == "Meat"){
            // eatSound.Play()
            GameControl.score++;
            // Debug.Log(pts);
            // env.FoodRespawn(collision.gameObject);
            StartCoroutine(Environment.RespawnFood(collision.gameObject, depth));
        }
    }
}
