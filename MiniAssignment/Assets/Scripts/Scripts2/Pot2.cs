using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pot2 : MonoBehaviour
{
    public Material[] foodMat;
    public Material salmon;

    public AudioSource pickup1;
    public AudioSource gameover;


    void Start()
    {
        
    }

    void Update()
    {
    }
    private void OnCollisionEnter(Collision collision){

        //if the pot collide with object with "Meat" tag
        if (collision.gameObject.tag == "Meat"){
            Debug.Log("coll"+collision.gameObject.tag);
            //increase the score
            GameControl2.score++;
            // sound pickup1
            pickup1.Play();
            //start to respawn food 
            collision.gameObject.SetActive(false);
            StartCoroutine(Environment2.RespawnFood(collision.gameObject, foodMat, salmon));
        }
        else if (collision.gameObject.tag == "Veggie")
        {
            Debug.Log("coll" + collision.gameObject.tag);
            //increase the score
            GameControl2.score--;
            GameControl2.lives--;
            // sound gameover
            gameover.Play();
            collision.gameObject.SetActive(false);
            //start to respawn food 
            StartCoroutine(Environment2.RespawnFood(collision.gameObject, foodMat, salmon));
        }
        else if (collision.gameObject.tag == "Salmon")
        {   
            Debug.Log("coll"+collision.gameObject.tag);
            //increase the score
            GameControl2.score += 5;
            // sound pickup1
            pickup1.Play();
            collision.gameObject.SetActive(false);
            //start to respawn food 
            StartCoroutine(Environment2.RespawnFood(collision.gameObject, foodMat, salmon));
        }
        
    }
}
