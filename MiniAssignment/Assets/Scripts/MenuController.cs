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
}
