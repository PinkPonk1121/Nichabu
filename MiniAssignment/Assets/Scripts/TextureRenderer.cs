using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextureRenderer : MonoBehaviour
{
    // Start is called before the first frame update

    public Material[] foodMat;
    public Material salmon;

    void Start()
    {

        int cnt = UnityEngine.Random.Range(0, 10);
        if (cnt < 6)
        {
            gameObject.tag = "Meat";
            GetComponent<Renderer>().material = SelectRandomMeat();
        }
        else if (cnt < 9)
        {
            gameObject.tag = "Veggie";
            GetComponent<Renderer>().material = SelectRandomVeggie();
        }
        else
        {
            gameObject.tag = "Salmon";
            GetComponent<Renderer>().material = salmon;
        }

    }

    Material SelectRandomMeat () {
        return foodMat[Random.Range(0, 3)];
    }

    Material SelectRandomVeggie () {
        return foodMat[Random.Range(3, foodMat.Length)];
    }
}
