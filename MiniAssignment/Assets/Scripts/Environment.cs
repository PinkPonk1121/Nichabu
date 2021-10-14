using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class Environment : MonoBehaviour
{

    public int numOfItems = 2;
    public GameObject[] itemArray;
    public TMPro.TextMeshProUGUI x;
    public TMPro.TextMeshProUGUI y;
    public TMPro.TextMeshProUGUI z;

    // public AudioSource itemSpawnSound;
    // public AudioSource itemCollectedSound;
    // private int count = 0;
    [SerializeField] GameObject itemPrefab; // might add more eg. beefPre, porkPre, etc.
    

    // Start is called before the first frame update
    void Start()
    {
        // Vector3 topLeft = Camera.current.ViewportToScreenPoint(new Vector3(0, Camera.current.pixelHeight, Camera.current.nearClipPlane));
        // Vector3 topRight = Camera.current.ViewportToScreenPoint(new Vector3(0.8f, 0.8f, 0f));
        // Vector3 bottomLeft = Camera.current.ViewportToScreenPoint(new Vector3(0.2f, 0.2f, 0f));
        // Vector3 screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f, 0f));
        itemArray = new GameObject[numOfItems];
        
        for (int i = 0; i < numOfItems; i++)
        { 
            // create new items as the game start
            itemArray[i] = Instantiate(itemPrefab, new Vector3(Random.Range(-1f, 1f),1f,1.3f), Quaternion.Euler(0f, 0f, 0f));
            // itemSpawnSound.Play();
        }
    }

    // Update is called once per frame
    void Update()
    {   
        // Vector3 screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f, 0f));

        // x.text = screenCenter.x.ToString("0.0000");
        // y.text = screenCenter.y.ToString("0.0000");
        // z.text = screenCenter.z.ToString("0.0000");
       for (int i = 0; i < numOfItems; i++)
        { 
            // create new items as the game start
            itemArray[i] = Instantiate(itemPrefab, new Vector3(Random.Range(-1f, 1f),1f,1.3f), Quaternion.Euler(0f, 0f, 0f));
            // itemSpawnSound.Play();
        }
    }
}
