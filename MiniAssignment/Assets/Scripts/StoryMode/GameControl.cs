using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameControl : MonoBehaviour
{
    // Score and time
    public static int score;
    public float time;

    // Text Canvas
    public TMPro.TextMeshProUGUI timeText;
    public TMPro.TextMeshProUGUI scoreText;


    public AudioSource gameover;

    // Start is called before the first frame update
    void Start()
    {
        
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
            scoreText.text = "Score: " + score;
        }
        else
        {
            // Game over, stop the time
            Time.timeScale = 0;
            gameover.Play();
        }
        
    }
}
