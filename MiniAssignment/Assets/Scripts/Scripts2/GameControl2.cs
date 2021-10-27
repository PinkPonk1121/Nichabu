using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameControl2 : MonoBehaviour
{
    // Score and time
    public static int score;
    public static int lives = 3;
    public int HighScore = 0;
    public GameObject gameOverPF;
    
    // Text Canvas
    public TMPro.TextMeshProUGUI scoreText;
    public TMPro.TextMeshProUGUI live;
    public TMPro.TextMeshProUGUI gameOverScore;
    public TMPro.TextMeshProUGUI gameOverHigh;

    

    // Start is called before the first frame update
    void Start()
    {   
        gameOverPF.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        gameOverPF.SetActive(false);
        if (lives <= 0){

            if (score > HighScore){
                HighScore = score;
            }
            
            // Show game over UI
            gameOverScore.text = "Your Score: " + score;
            gameOverHigh.text = "High Score: " + HighScore;
            gameOverPF.SetActive(true);
            Time.timeScale = 0;
        }

        live.text = "Lives:" + lives.ToString();
        scoreText.text = "Score: " + score;

        // Delete this when building
        if (Input.GetKeyDown("space")) {
                lives--;
            }

        if (Input.GetKey("up")) {
                score++;
            }
    }

}
