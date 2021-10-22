using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class Environment : MonoBehaviour
{
    // Score and time
    public static int score;
    public float time;

    // Text Canvas
    public TMPro.TextMeshProUGUI timeText;
    public TMPro.TextMeshProUGUI scoreText;

    private int level = 1;

    private int numOfItems = 1;
    public int randCount;
    public GameObject[] itemArray;
    public TMPro.TextMeshProUGUI x;
    public TMPro.TextMeshProUGUI y;
    public TMPro.TextMeshProUGUI z;
    // public GameObject controller;
    // public AudioSource itemSpawnSound;
    // public AudioSource itemCollectedSound;
    private int count = 0;

    [SerializeField] GameObject foodPrefab;

    public Material[] foodMat;
    public Material salmon;

    private Pot pot;
    public GameObject[] plane;
    ARFaceManager faceManager;

    void Start()
    {
        itemArray = new GameObject[numOfItems];
        faceManager = GetComponent<ARFaceManager>();
        time = 60;
    }

    // Update is called once per frame
    void Update()
    {
        // While the game is running
        if (time >= 0)
        {
            // Countdown timer
            time -= Time.deltaTime;
            // Update Canvas
            timeText.text = "Time Remaining: " + Math.Round(time);
            scoreText.text = "Score: " + score + "     Level: " + level;
        }
        else
        {
            // Game over, stop the time
            Time.timeScale = 0;
            if (level == 1 && score >= 20)
            {
                level = 2;
                score = 0;
                time = 60;
            }
            else
            {
                scoreText.text = "GAMEOVER";
            }
        }

        //get position of the screen
        Vector3 topRight = Camera.current.ScreenToWorldPoint(new Vector3(Camera.current.pixelWidth, Camera.current.pixelHeight, 1.5f));
        Vector3 bottomLeft = Camera.current.ScreenToWorldPoint(new Vector3(0, 0, 1.5f));
        Vector3 screenCenter = Camera.current.ScreenToWorldPoint(new Vector3(Camera.current.pixelWidth/2, Camera.current.pixelHeight/2, 1.5f));
        
        List<ARRaycastHit> hits = new List<ARRaycastHit>();
        // arRayCastMng.Raycast(screenCenter, hits, UnityEngine.XR.ARSubsystems.TrackableType.Planes);

        while (count < numOfItems)
        { 
            // Instantiate food using the position above
            itemArray[count] = Instantiate(foodPrefab, new Vector3(screenCenter.x,screenCenter.y,1.3f), Quaternion.Euler(0f, 90f, 270f));            
            count++;
        }
        // Instantiate(itemArray[UnityEngine.Random.Range(0, 2)], new Vector3(screenCenter.x, screenCenter.y, 1.3f), Quaternion.Euler(0f, 90f, 270f));
        

        //loop through all meats but we only have 1 meat for now
        for (int i = 0; i < numOfItems; i++)
        {            
            var foodBody = itemArray[i].GetComponent<Rigidbody>();
            //add force to meat so the meat move downward
            foodBody.AddForce(new Vector3(0f, -0.06f, 0f), ForceMode.Impulse);
            //check if the meat reach the bottom screen
            if (itemArray[i].transform.position.y < bottomLeft.y)
            {
                //make the meat invisible
                itemArray[i].SetActive(false);
                //reset the velocity to 0
                foodBody.velocity = Vector3.zero;
                
                //get depth of the pot
                Vector3 potPos = new Vector3(0f,0f,0f);
                Vector3 camPos = Camera.current.transform.position;
                foreach (ARFace face in faceManager.trackables)
                {
                    if (pot == null){
                        pot = face.GetComponentInChildren<Pot>();
                    }
                    x.text = "Face position" + face.transform.position.ToString();
                    potPos = pot.transform.position;
                    if (pot != null){
                        z.text = "Pot position" + pot.transform.position.ToString();
                    }
                    else{
                        z.text = "Pot position is null";
                    }
                }
                Vector3 camToPot = potPos - camPos;
                Vector3 camFor = Camera.current.transform.forward;
                Vector3 camToPlane = Vector3.Project(camToPot, camFor);
                float depth = camToPlane.magnitude;
                y.text = depth.ToString();

                //create new position to spawn the meat after the meat reach the bottom
                Vector3 spawnPosition = Camera.current.ScreenToWorldPoint(new Vector3(UnityEngine.Random.Range(0, Camera.current.pixelWidth), Camera.current.pixelHeight, depth));
                itemArray[i].transform.position = spawnPosition;  
                //change the rotation according to the rotation of the camera
                itemArray[i].transform.rotation = Quaternion.Euler(0f, 90f+Camera.main.transform.localEulerAngles.y, 270f);
                //make the meat visible
                itemArray[i].SetActive(true);
            }

            

        }
    }

    //coroutines for respawn the food
    public static IEnumerator RespawnFood(GameObject food, float depth, Material[] foodMat, Material salmon) {
        //set the food to invisible
        food.SetActive(false);
        //set the velocity to zero
        var foodBody = food.GetComponent<Rigidbody>();
        foodBody.velocity = Vector3.zero;
        //wait for 1-2 second 
        yield return new WaitForSeconds(UnityEngine.Random.Range(1f, 2f));

        //set the new position to spawn food

        int randCount = UnityEngine.Random.Range(0, 10);
        if (randCount < 6)
        {
            food.tag = "Meat";
            food.GetComponent<Renderer>().material = foodMat[UnityEngine.Random.Range(0, 3)];
        }
        else if (randCount < 9)
        {
            food.tag = "Veggie";
            food.GetComponent<Renderer>().material = foodMat[UnityEngine.Random.Range(3, foodMat.Length)];
        }
        else
        {
            food.tag = "Salmon";
            food.GetComponent<Renderer>().material = salmon;
        }

        Vector3 spawnPosition = Camera.current.ScreenToWorldPoint(new Vector3(UnityEngine.Random.Range(0, Camera.current.pixelWidth), Camera.current.pixelHeight, depth));
        food.transform.position = spawnPosition; 
        //make the food visible 
        food.SetActive(true);
        //add force to the food
        foodBody.AddForce(new Vector3(0f, -0.06f, 0f), ForceMode.Impulse);
    }

    Material SelectRandomMeat () {
        return foodMat[UnityEngine.Random.Range(0, 3)];
    }

    Material SelectRandomVeggie () {
        return foodMat[UnityEngine.Random.Range(3, foodMat.Length)];
    }
}