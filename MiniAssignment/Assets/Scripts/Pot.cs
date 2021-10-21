using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pot : MonoBehaviour
{
    public Material[] foodMat;
    public Material salmon;

    void Start()
    {
        
    }

    void Update()
    {
    }
    private void OnCollisionEnter(Collision collision){
        //get the depth of the pot        
        Vector3 camPos = Camera.current.transform.position;
        Vector3 potPos = this.transform.position;
        Vector3 camToPot = potPos - camPos;
        Vector3 camFor = Camera.current.transform.forward;
        Vector3 camToPlane = Vector3.Project(camToPot, camFor);
        float depth = camToPlane.magnitude;

        //if the pot collide with object with "Meat" tag
        if (collision.gameObject.tag == "Meat"){
            //increase the score
            GameControl.score++;
            //start to respawn food 
            StartCoroutine(Environment.RespawnFood(collision.gameObject, depth, foodMat, salmon));
        }
        if (collision.gameObject.tag == "Veggie")
        {
            //increase the score
            GameControl.score--;
            //start to respawn food 
            StartCoroutine(Environment.RespawnFood(collision.gameObject, depth, foodMat, salmon));
        }
        if (collision.gameObject.tag == "Salmon")
        {
            //increase the score
            GameControl.score += 5;
            //start to respawn food 
            StartCoroutine(Environment.RespawnFood(collision.gameObject, depth, foodMat, salmon));
        }

    }
}
