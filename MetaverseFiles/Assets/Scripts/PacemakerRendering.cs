using Amazon.Runtime.Internal.Endpoints.StandardLibrary;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

public class PacemakerRendering : MonoBehaviour
{

    //public StartManager startManager;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(SpawnNft());
    }

    IEnumerator SpawnNft()
    {
        // Define the prefab name of the asset you're instantiating here.
        string assetName = "pacemaker";

        // URI of your asset
        string ipfsHash = PlayerPrefs.GetString("DTHash");

        // Public IPFS gateway URL
        string ipfsUrl = "https://ipfs.io/ipfs/" + ipfsHash;

        // Request the asset bundle from the IPFS gateway URL
        UnityWebRequest www = UnityWebRequestAssetBundle.GetAssetBundle(ipfsUrl);
        yield return www.SendWebRequest();

        // Something failed with the request.
        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.Log("Network error");
            Debug.Log(www.error);
        }
        // Successfully downloaded the asset bundle, instantiate the prefab now.
        else
        {

            AssetBundle bundle = DownloadHandlerAssetBundle.GetContent(www);

            GameObject prefab = bundle.LoadAsset<GameObject>(assetName);

            GameObject instance = Instantiate(prefab, new Vector3(23, 2, -12), Quaternion.Euler(0, 100, 0));
            Vector3 scale = new Vector3(1.5f, 1.5f, 1.5f);
            instance.transform.localScale = scale;

            // (Optional) - Configure the shader of your NFT as it renders.
            /*
            Material material = instance.GetComponent<Renderer>().material;
            material.shader = Shader.Find("Standard");
            Debug.Log("Shader set successfully");
            */
        }
    }
}
