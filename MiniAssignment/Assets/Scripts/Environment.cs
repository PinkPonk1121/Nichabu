using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class Environment : MonoBehaviour
{

    public int numOfItems = 1;
    public GameObject[] itemArray;
    public TMPro.TextMeshProUGUI x;
    public TMPro.TextMeshProUGUI y;
    public TMPro.TextMeshProUGUI z;

    // public AudioSource itemSpawnSound;
    // public AudioSource itemCollectedSound;
    private int count = 0;

    [SerializeField] GameObject meatPrefab; // might add more eg. beefPre, porkPre, etc.
    [SerializeField] GameObject veggiePrefab;
    

    // Start is called before the first frame update
    void Start()
    {
        itemArray = new GameObject[numOfItems];
    }

    // Update is called once per frame
    void Update()
    {   
        Vector3 topRight = Camera.current.ScreenToWorldPoint(new Vector3(Camera.current.pixelWidth, Camera.current.pixelHeight, 1.5f));
        Vector3 bottomLeft = Camera.current.ScreenToWorldPoint(new Vector3(0, 0, 1.5f));
        Vector3 screenCenter = Camera.current.ScreenToWorldPoint(new Vector3(Camera.current.pixelWidth/2, Camera.current.pixelHeight/2, 1.5f));
        
  
        while (count < numOfItems)
        { 
            // create new items as the game start
            // if (count % 3 == 0) // 0 && 1
            // {
            //     Spawner(count, meatPrefab);
            // }
            // else if (count % 3 == 1) // 2
            // {
            //     Spawner(count, veggiePrefab);              
            // }
            itemArray[count] = Instantiate(meatPrefab, new Vector3(screenCenter.x,screenCenter.y,1.3f), Quaternion.Euler(0f, 90f, 270f));
            // itemSpawnSound.Play();
            count++;
        }

        for (int i = 0; i < numOfItems; i++)
        {            
            var foodBody = itemArray[i].GetComponent<Rigidbody>();
            foodBody.AddForce(new Vector3(0f, -0.2f, 0f), ForceMode.Impulse);
            if (itemArray[i].transform.position.y < 0)
            {
                itemArray[i].SetActive(false);
                foodBody.velocity = Vector3.zero;
                itemArray[i].transform.position = (new Vector3(Random.Range(bottomLeft.x, topRight.x), topRight.y, 1.3f));  
                // RespawnFood(itemArray[i]);
                itemArray[i].SetActive(true);
            }
        }
    }

    // private void Spawner(int count, GameObject food)
    // {
    //     yield return new WaitForSeconds(Random.Range(1f, 2f));

    //     itemArray[count] = Instantiate(food, new Vector3(screenCenter.x,screenCenter.y,1.3f), Quaternion.Euler(0f, 90f, 270f));

    // }

    IEnumerator RespawnFood(GameObject food) {
        Vector3 topRight = Camera.current.ScreenToWorldPoint(new Vector3(Camera.current.pixelWidth, Camera.current.pixelHeight, 1.5f));
        Vector3 bottomLeft = Camera.current.ScreenToWorldPoint(new Vector3(0, 0, 1.5f));
        // foodEaten.Play();
        food.SetActive(false);
        var foodBody = food.GetComponent<Rigidbody>();
        foodBody.velocity = Vector3.zero;

        yield return new WaitForSeconds(Random.Range(1f, 2f));

        // foodSpawn.Play();
        food.transform.position = (new Vector3(Random.Range(bottomLeft.x, topRight.x), topRight.y, 1.3f));  
        food.SetActive(true);
        foodBody.AddForce(new Vector3(0f, -0.2f, 0f), ForceMode.Impulse);
    }
}
