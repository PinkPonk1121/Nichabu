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
    public static TMPro.TextMeshProUGUI z;
    // public GameObject controller;
    // public AudioSource itemSpawnSound;
    // public AudioSource itemCollectedSound;
    private int count = 0;

    [SerializeField] GameObject meatPrefab; // might add more eg. beefPre, porkPre, etc.
    [SerializeField] GameObject veggiePrefab;
    [SerializeField] GameObject pot;
    public GameObject[] plane;
    ARFaceManager faceManager;
    ARFace face;

    // [SerializeField] ARRaycastManager arRayCastMng;

//     private void onEnable()
//     {
//         faceManager = GetComponent<ARFaceManager>();
        
//         face = faceManager.trackables;
//     }
    // Start is called before the first frame update
    void Start()
    {
        itemArray = new GameObject[numOfItems];
        faceManager = GetComponent<ARFaceManager>();
        // plane = GameObject.FindGameObjectsWithTag("Pot");
        // x.text = "lenght plane[]" + plane.Length.ToString();

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
            foodBody.AddForce(new Vector3(0f, -0.2f, 0f), ForceMode.Impulse);
            if (itemArray[i].transform.position.y < bottomLeft.y)
            {
                itemArray[i].SetActive(false);
                foodBody.velocity = Vector3.zero;
                // v = new Vector3(Random.Range(bottomLeft.x, topRight.x));
                // float r = (Random.Range(bottomLeft.x, topRight.x));
                Vector3 sp = Camera.current.ScreenToWorldPoint(new Vector3(Random.Range(0, Camera.current.pixelWidth), Random.Range(0, Camera.current.pixelHeight), 1.5f));
                itemArray[i].transform.position = (new Vector3(sp.x, sp.y, sp.z));  
                itemArray[i].transform.rotation = Quaternion.Euler(0f, 90f+Camera.main.transform.localEulerAngles.y, 270f);
                // RespawnFood(itemArray[i]);
                // x.text = "face pos" + face.transform.position.ToString();
                // x.text = "Rotation" + Camera.main.transform.rotation.ToString();
                y.text = "Rotation2" + Camera.main.transform.localEulerAngles.ToString();
                // z.text = "sp " + sp.ToString();
                // x.text = "Pot position" + ARFaceManager.facePrefab.transform.position.ToString();
                // x.text = "Pot position" + plane[0].transform.position.ToString();
                // GameControl.score++;

                itemArray[i].SetActive(true);
            }
            foreach (ARFace face in faceManager.trackables)
            {
                x.text = "Pot position" + face.transform.position.ToString();
            }
//             OnCollision(meatPrefab);

        }
    }

    // private void Spawner(int count, GameObject food)
    // {
    //     yield return new WaitForSeconds(Random.Range(1f, 2f));

    //     itemArray[count] = Instantiate(food, new Vector3(screenCenter.x,screenCenter.y,1.3f), Quaternion.Euler(0f, 90f, 270f));

    // }

    // private void OnCollisionEnter(Collision collision){
    //     if (collision.gameObject.tag == "Meat"){
    //         // eatSound.Play()
    //         // var pts = controller.GetComponent<score>();
    //         // pts++;
    //         // Debug.Log(pts);
    //         StartCoroutine(RespawnFood(collision.gameObject));
    //     }
    // }


    private void OnCollision(GameObject obj){
        //if obj collide with pot
        // foreach (ARFace face in faceManager.trackables)
        // {
        //     GameControl.score++;
        //     // if (pot.GetChild(0).plane.transform.position.x - 0.01f <= obj.transform.position.x && pot.transform.position.x + 0.01f >= obj.transform.position.x && pot.transform.position.y + 0.01f <= obj.transform.position.y){
        //     if (face.transform.position.x - 0.01f <= obj.transform.position.x && face.transform.position.x + 0.01f >= obj.transform.position.x && face.transform.position.y + 0.01f <= obj.transform.position.y){
        //         GameControl.score++;
        //     }
        // }
        
    }

    IEnumerator RespawnFood(GameObject food) {
        Vector3 topRight = Camera.current.ScreenToWorldPoint(new Vector3(Camera.current.pixelWidth, Camera.current.pixelHeight, 1.5f));
        Vector3 bottomLeft = Camera.current.ScreenToWorldPoint(new Vector3(0, 0, 1.5f));
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
