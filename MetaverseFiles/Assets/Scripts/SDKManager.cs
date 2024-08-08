using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Thirdweb;

public class SDKManager : MonoBehaviour
{
    public static SDKManager Instance;

    public ThirdwebSDK SDK;

    private void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
        }
        else
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        SDK = new ThirdwebSDK("https://11155111.rpc.thirdweb.com");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
