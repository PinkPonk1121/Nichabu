using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextureRenderer : MonoBehaviour
{
    // Start is called before the first frame update

    public Material[] _materials;
    public Renderer _renderer;

    void Start()
    {
    ChangeMaterial();
    }

    void Reset () {
    _renderer = GetComponent<Renderer>();
    }

    void ChangeMaterial () {
    _renderer.material = SelectRandomMaterial();
    }

    Material SelectRandomMaterial () {
    return _materials[Random.Range(0, _materials.Length)];
    }
}
