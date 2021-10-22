using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pot : MonoBehaviour
{
    public Material[] foodMat;
    public Material salmon;

    public AudioSource pickup1;
    public AudioSource pickup2;


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
            Environment.score++;
            // sound pickup1
            pickup1.Play();
            //start to respawn food 
            StartCoroutine(Environment.RespawnFood(collision.gameObject, depth, foodMat, salmon));
        }
        if (collision.gameObject.tag == "Veggie")
        {
            //increase the score
            Environment.score--;
            // sound pickup2
            pickup2.Play();
            //start to respawn food 
            StartCoroutine(Environment.RespawnFood(collision.gameObject, depth, foodMat, salmon));
        }
        if (collision.gameObject.tag == "Salmon")
        {
            //increase the score
            Environment.score += 5;
            // sound pickup1
            pickup1.Play();
            //start to respawn food 
            StartCoroutine(Environment.RespawnFood(collision.gameObject, depth, foodMat, salmon));
        }

    }
}
