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

    // public float time;
    
    // Text Canvas
    // public TMPro.TextMeshProUGUI timeText;
    public TMPro.TextMeshProUGUI scoreText;
    public TMPro.TextMeshProUGUI live;

    

    // Start is called before the first frame update
    void Start()
    {
        

    }

    // Update is called once per frame
    void Update()
    {
        if (lives <= 0){
            HighScore = score;
            Time.timeScale = 0;
        }

        live.text = "Lives:" + lives.ToString();
        scoreText.text = "Score: " + score;
    }
}
