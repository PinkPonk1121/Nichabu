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
    // public GameObject controller;
    // public AudioSource itemSpawnSound;
    // public AudioSource itemCollectedSound;
    private int count = 0;

    [SerializeField] GameObject meatPrefab; // might add more eg. beefPre, porkPre, etc.
    [SerializeField] GameObject veggiePrefab;
    private Pot pot;
    public GameObject[] plane;
    ARFaceManager faceManager;

    void Start()
    {
        itemArray = new GameObject[numOfItems];
        faceManager = GetComponent<ARFaceManager>();
    }

    // Update is called once per frame
    void Update()
    {   
        Vector3 topRight = Camera.current.ScreenToWorldPoint(new Vector3(Camera.current.pixelWidth, Camera.current.pixelHeight, 1.5f));
        Vector3 bottomLeft = Camera.current.ScreenToWorldPoint(new Vector3(0, 0, 1.5f));
        Vector3 screenCenter = Camera.current.ScreenToWorldPoint(new Vector3(Camera.current.pixelWidth/2, Camera.current.pixelHeight/2, 1.5f));
        
        List<ARRaycastHit> hits = new List<ARRaycastHit>();
        // arRayCastMng.Raycast(screenCenter, hits, UnityEngine.XR.ARSubsystems.TrackableType.Planes);

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
            foodBody.AddForce(new Vector3(0f, -0.06f, 0f), ForceMode.Impulse);
            if (itemArray[i].transform.position.y < bottomLeft.y)
            {
                itemArray[i].SetActive(false);
                foodBody.velocity = Vector3.zero;
                
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
                Vector3 spawnPosition = Camera.current.ScreenToWorldPoint(new Vector3(Random.Range(0, Camera.current.pixelWidth), Camera.current.pixelHeight, depth));
                itemArray[i].transform.position = spawnPosition;  
                itemArray[i].transform.rotation = Quaternion.Euler(0f, 90f+Camera.main.transform.localEulerAngles.y, 270f);
                // x.text = "face pos" + face.transform.position.ToString();
                // x.text = "Rotation" + Camera.main.transform.rotation.ToString();
                // y.text = "Rotation2" + Camera.main.transform.localEulerAngles.ToString();
                // y.text = "Meat pos" + itemArray[0].transform.position.ToString();
                // x.text = "Pot position" + Manager.facePrefab.transform.position.ToString();
                // z.text = "Pot position" + test.facePrefab.ToString();
                // GameControl.score++;

                itemArray[i].SetActive(true);
            }

            

        }
    }

    // private void Spawner(int count, GameObject food)
    // {
    //     yield return new WaitForSeconds(Random.Range(1f, 2f));

    //     itemArray[count] = Instantiate(food, new Vector3(screenCenter.x,screenCenter.y,1.3f), Quaternion.Euler(0f, 90f, 270f));

    // }

    // public static void FoodRespawn(GameObject f){
    //     StartCoroutine(RespawnFood(f));
    // }

    public static IEnumerator RespawnFood(GameObject food, float depth) {
        
        food.SetActive(false);
        var foodBody = food.GetComponent<Rigidbody>();
        foodBody.velocity = Vector3.zero;

        yield return new WaitForSeconds(Random.Range(1f, 2f));

        Vector3 spawnPosition = Camera.current.ScreenToWorldPoint(new Vector3(Random.Range(0, Camera.current.pixelWidth), Camera.current.pixelHeight, depth));
        // foodSpawn.Play();
        food.transform.position = spawnPosition;  
        food.SetActive(true);
        foodBody.AddForce(new Vector3(0f, -0.06f, 0f), ForceMode.Impulse);
    }
}
