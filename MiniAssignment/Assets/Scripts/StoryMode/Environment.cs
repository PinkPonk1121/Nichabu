using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.UI;

public class Environment : MonoBehaviour
{
    // Score and time
    public static int score;
    public static float time;

    // Text Canvas
    public TMPro.TextMeshProUGUI timeText;
    public TMPro.TextMeshProUGUI scoreText;

    public static int level = 1;

    private int numOfItems = 1;
    private int randCount;
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

    private static Pot pot;
    // public GameObject[] plane;
    static ARFaceManager faceManager;

    // For Game Over screen
    public GameObject gameOverPF;
    public Sprite[] gameOverSprite;
    public Button gameOverButton;
    public Image gameOverIcon;
    public TMPro.TextMeshProUGUI gameOverScore;
    public TMPro.TextMeshProUGUI gameOverLevel;
    public TMPro.TextMeshProUGUI gameOverText;
    public TMPro.TextMeshProUGUI retryText;

    void Start()
    {   
        Time.timeScale = 1;
        gameOverPF.SetActive(false);
        itemArray = new GameObject[numOfItems];
        faceManager = GetComponent<ARFaceManager>();
        score = 0;
        time = 60;
        scoreText.text = "Score: " + score + "     Level: " + level;
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

            // vvv For debugging - Delete when done -----------
            if (Input.GetKey("up")) {
                score++;
            }

            if (Input.GetKey("down")) {
                time--;
            }
            // ^^^ For debugging - Delete when done -----------

            // Hide game over screen
            gameOverPF.SetActive(false);
        }
        else
        {
            // Game over
            Time.timeScale = 0;
            if (level == 1 && score >= 20)
            {   
                gameOverIcon.overrideSprite = gameOverSprite[1];
                gameOverButton.onClick.AddListener(ContinueStory1);
                gameOverText.text = "Level 1 Complete!";
                gameOverLevel.text = "Continue to level 2?";
                gameOverScore.text = "Your Score: " + score;
                retryText.text = "Continue";
                gameOverPF.SetActive(true);
            }
            else if (level == 2 && score >= 50)
            {   
                gameOverIcon.overrideSprite = gameOverSprite[1];
                gameOverButton.onClick.AddListener(ContinueStory2);
                gameOverText.text = "Level 2 Complete!";
                gameOverLevel.text = "Continue to level 3?";
                gameOverScore.text = "Your Score: " + score;
                retryText.text = "Continue";
                gameOverPF.SetActive(true);
            }
            else if (level >= 3 && score >= 150)
            {
                gameOverIcon.overrideSprite = gameOverSprite[1];
                gameOverButton.onClick.AddListener(RestartStory);
                gameOverText.text = "CONGRATS!";
                gameOverLevel.text = "You've completed the challenge!";
                gameOverScore.text = "Final Score: " + score;
                retryText.text = "Retry";
                gameOverPF.SetActive(true);

                scoreText.text = "You Won!";
            }
            else
            {   
                gameOverIcon.overrideSprite = gameOverSprite[0];
                gameOverButton.onClick.AddListener(RestartStory);
                gameOverText.text = "GAME OVER";
                gameOverLevel.text = "Final Level: " + level;
                gameOverScore.text = "Your Score: " + score;
                retryText.text = "Retry";
                gameOverPF.SetActive(true);
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
            float camdepth = cameraDepth();
            Vector3 spawnPosition = Camera.current.ScreenToWorldPoint(new Vector3(UnityEngine.Random.Range(0, Camera.current.pixelWidth), Camera.current.pixelHeight, camdepth));
            spawnPosition.z = camdepth;
            itemArray[count] = Instantiate(foodPrefab,spawnPosition, Quaternion.Euler(0f, 90f, 270f)); 
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
            if (itemArray[i].transform.position.y < bottomLeft.y && itemArray[i].activeSelf)
            {
                StartCoroutine(RespawnFood(itemArray[i], foodMat, salmon));
            }
        }
    }

    ///coroutines for respawn the food
    public static IEnumerator RespawnFood(GameObject food, Material[] foodMat, Material salmon) {
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

        float camdepth = cameraDepth();
        Vector3 spawnPosition = Camera.current.ScreenToWorldPoint(new Vector3(UnityEngine.Random.Range(0, Camera.current.pixelWidth), Camera.current.pixelHeight, camdepth));
        spawnPosition.z = camdepth;
        food.transform.position = spawnPosition; 
        food.transform.rotation = Quaternion.Euler(0f, 90f+Camera.main.transform.localEulerAngles.y, 270f);
        //make the food visible 
        food.SetActive(true);
        //add force to the food
        foodBody.AddForce(new Vector3(0f, -0.01f, 0f), ForceMode.Impulse);
    }

    Material SelectRandomMeat () {
        return foodMat[UnityEngine.Random.Range(0, 3)];
    }

    Material SelectRandomVeggie () {
        return foodMat[UnityEngine.Random.Range(3, foodMat.Length)];
    }

    private static float cameraDepth()
    {
        Vector3 potPos = new Vector3(0f, 0f, 0f);
        Vector3 camPos = Camera.current.transform.position;
        foreach (ARFace face in faceManager.trackables)
        {
            if (pot == null)
            {
                pot = face.GetComponentInChildren<Pot>();
            }
            potPos = pot.transform.position;

        }
        Vector3 camToPot = potPos - camPos;
        Vector3 camFor = Camera.current.transform.forward;
        Vector3 camToPlane = Vector3.Project(camToPot, camFor);
        float depth = camToPlane.magnitude;
        return depth;
    }

    // For game over menu --------------------------------
    // Continue game, level 1 ==> level 2
    public void ContinueStory1(){
        time = 45;
        level = 2;
        score = 0;
        Time.timeScale = 1;
    }

    // Continue game, level 2 ==> level 3
    public void ContinueStory2(){
        time = 75;
        level = 3;
        score = 0;
        Time.timeScale = 1;
    }

    // Restart to level 1
    public void RestartStory(){
        score = 0;
        level = 1;
        time = 60;

        Time.timeScale = 1;
    }
}
