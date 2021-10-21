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
        //get position of the screen
        Vector3 topRight = Camera.current.ScreenToWorldPoint(new Vector3(Camera.current.pixelWidth, Camera.current.pixelHeight, 1.5f));
        Vector3 bottomLeft = Camera.current.ScreenToWorldPoint(new Vector3(0, 0, 1.5f));
        Vector3 screenCenter = Camera.current.ScreenToWorldPoint(new Vector3(Camera.current.pixelWidth/2, Camera.current.pixelHeight/2, 1.5f));
        
        List<ARRaycastHit> hits = new List<ARRaycastHit>();
        // arRayCastMng.Raycast(screenCenter, hits, UnityEngine.XR.ARSubsystems.TrackableType.Planes);

        while (count < numOfItems)
        { 
            //instantiate meat using the position above
            itemArray[count] = Instantiate(meatPrefab, new Vector3(screenCenter.x,screenCenter.y,1.3f), Quaternion.Euler(0f, 90f, 270f));            
            count++;
        }

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
                Vector3 spawnPosition = Camera.current.ScreenToWorldPoint(new Vector3(Random.Range(0, Camera.current.pixelWidth), Camera.current.pixelHeight, depth));
                itemArray[i].transform.position = spawnPosition;  
                //change the rotation according to the rotation of the camera
                itemArray[i].transform.rotation = Quaternion.Euler(0f, 90f+Camera.main.transform.localEulerAngles.y, 270f);
                //make the meat visible
                itemArray[i].SetActive(true);
            }

            

        }
    }

    //coroutines for respawn the food
    public static IEnumerator RespawnFood(GameObject food, float depth) {
        //set the food to invisible
        food.SetActive(false);
        //set the velocity to zero
        var foodBody = food.GetComponent<Rigidbody>();
        foodBody.velocity = Vector3.zero;
        //wait for 1-2 second 
        yield return new WaitForSeconds(Random.Range(1f, 2f));

        //set the new position to spawn food
        Vector3 spawnPosition = Camera.current.ScreenToWorldPoint(new Vector3(Random.Range(0, Camera.current.pixelWidth), Camera.current.pixelHeight, depth));
        food.transform.position = spawnPosition; 
        //make the food visible 
        food.SetActive(true);
        //add force to the food
        foodBody.AddForce(new Vector3(0f, -0.06f, 0f), ForceMode.Impulse);
    }
}
