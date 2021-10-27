using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuController : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] private string menuScene;
    [SerializeField] private string storyScene;
    [SerializeField] private string EndlessScene;
    [SerializeField] private string instructionScene;

    public void StoryMode()
    {   
        SceneManager.LoadScene(storyScene);
    }

    public void EndlessMode()
    {   
        SceneManager.LoadScene(EndlessScene);
    }

    public void Instructions()
    {   
        SceneManager.LoadScene(instructionScene);
    }

    public void MainMenu()
    {   
        SceneManager.LoadScene(menuScene);
    }

    public void ExitGame()
    {   
        Application.Quit();
    }

    public void RestartEndless(){
        GameControl2 GameControl2 = GetComponent<GameControl2>();

        GameControl2.score = 0;
        GameControl2.lives = 3;

        Time.timeScale = 1;
    }

    public void RestartStory(){
        Environment Environment = GetComponent<Environment>();

        Environment.score = 0;
        

        Time.timeScale = 1;
    }
}
