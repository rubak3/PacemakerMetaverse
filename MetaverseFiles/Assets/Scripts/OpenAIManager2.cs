using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using OpenAI;
using TMPro;
using UnityEngine.UI;
using System;
using UnityEngine.Networking;
using System.Text;
using Thirdweb;
using System.IO;

public class OpenAIManager : MonoBehaviour
{
    public TMP_Text outputField;
    public TMP_InputField inputField;
    public Button OKButton;
    private OpenAIApi openAI;
    private List<ChatMessage> messages = new List<ChatMessage>();
    private string sessionLog = "";

    void Start()
    {
        openAI = new OpenAIApi("Your-API-Key"); // Ensure you have your API key here
        OKButton.onClick.AddListener(() => getResponse());
        string RecordsHash = PlayerPrefs.GetString("RecordsHash");
        string url = "https://ipfs.io/ipfs/" + RecordsHash;
        StartCoroutine(DownloadJsonFromIPFS(url));
    }

    private void startConversation(string data)
    {
        string instructions = "You are an AI assistant for a pacemaker digital twin, give brief answers for users' questions about the pacemaker status and records from the following records: ";
        ChatMessage instrMessage = new ChatMessage();
        instrMessage.Content = instructions + data;
        instrMessage.Role = "system";
        messages.Add(instrMessage);
        inputField.text = "";
    }

    public async void getResponse()
    {
        if (inputField.text.Length < 1)
        {
            return;
        }

        OKButton.enabled = false;

        ChatMessage userMessage = new ChatMessage();
        userMessage.Role = "user";
        userMessage.Content = inputField.text;
        messages.Add(userMessage);

        sessionLog += $"{userMessage.Role}: {userMessage.Content}\n\n";
        outputField.text = string.Format("Q: {0}", userMessage.Content);
        inputField.text = "";

        CreateChatCompletionRequest request = new CreateChatCompletionRequest();
        request.Model = "gpt-4o-mini";
        request.Temperature = 0.1f;
        request.MaxTokens = 200;
        request.Messages = messages;
        var response = await openAI.CreateChatCompletion(request);

        ChatMessage responseMessage = new ChatMessage();
        responseMessage.Role = response.Choices[0].Message.Role;
        responseMessage.Content = response.Choices[0].Message.Content;
        messages.Add(responseMessage);

        sessionLog += $"{responseMessage.Role}: {responseMessage.Content}\n\n";
        outputField.text = string.Format("Q: {0}\n\nA: {1}", userMessage.Content, responseMessage.Content);

        OKButton.enabled = true;
    }

    public void uploadToIPFS()
    {
        StartCoroutine(UploadCoroutine(sessionLog));
    }

    private IEnumerator UploadCoroutine(string data)
    {
        string fileName = $"Session_{DateTime.Now:yyyy-MM-dd_HH-mm-ss}";
        byte[] fileData = Encoding.UTF8.GetBytes(data);
        WWWForm form = new WWWForm();
        form.AddBinaryData("file", fileData, fileName);

        UnityWebRequest request = UnityWebRequest.Post("https://api.pinata.cloud/pinning/pinFileToIPFS", form);
        request.SetRequestHeader("pinata_api_key", "Your-API-Key");           // Add API Key to the header
        request.SetRequestHeader("pinata_secret_api_key", "YOur-Secret-API-Key"); // Add API Secret Key to the header

        yield return request.SendWebRequest();

        if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
        {
            Debug.LogError("Error uploading logs to Pinata: " + request.error);
        }
        else
        {
            // Handle the response, which includes the IPFS hash (CID)
            string responseText = request.downloadHandler.text;
            
            // Parse the IPFS hash from the response
            PinataResponse response = JsonUtility.FromJson<PinataResponse>(responseText);
            
            Debug.Log("Session logs uploaded to IPFS: " + response.IpfsHash);

            uploadSession(response.IpfsHash);
        }
        sessionLog = "";
    }

    [System.Serializable]
    private class PinataResponse
    {
        public string IpfsHash;
        public string PinSize;
        public string Timestamp;
    }

    async void uploadSession(string url)
    {
        string contractAddress = "0xDA4BAc5620c9CBDD5d4E135774a0CF56F689abc8";
        string contractABI = "[{\"inputs\":[{\"internalType\":\"address\",\"name\":\"nftManagerSCAddr\",\"type\":\"address\"}],\"stateMutability\":\"nonpayable\",\"type\":\"constructor\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"owner\",\"type\":\"address\"}],\"name\":\"OwnableInvalidOwner\",\"type\":\"error\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"account\",\"type\":\"address\"}],\"name\":\"OwnableUnauthorizedAccount\",\"type\":\"error\"},{\"anonymous\":false,\"inputs\":[{\"indexed\":false,\"internalType\":\"address\",\"name\":\"Doctor\",\"type\":\"address\"},{\"indexed\":false,\"internalType\":\"address\",\"name\":\"User\",\"type\":\"address\"}],\"name\":\"DoctorRegistered\",\"type\":\"event\"},{\"anonymous\":false,\"inputs\":[{\"indexed\":true,\"internalType\":\"address\",\"name\":\"previousOwner\",\"type\":\"address\"},{\"indexed\":true,\"internalType\":\"address\",\"name\":\"newOwner\",\"type\":\"address\"}],\"name\":\"OwnershipTransferred\",\"type\":\"event\"},{\"anonymous\":false,\"inputs\":[{\"indexed\":false,\"internalType\":\"address\",\"name\":\"User\",\"type\":\"address\"},{\"indexed\":false,\"internalType\":\"uint256\",\"name\":\"_SessionID\",\"type\":\"uint256\"}],\"name\":\"SessionUploaded\",\"type\":\"event\"},{\"anonymous\":false,\"inputs\":[{\"indexed\":false,\"internalType\":\"address\",\"name\":\"User\",\"type\":\"address\"},{\"indexed\":false,\"internalType\":\"string\",\"name\":\"UserDocuments\",\"type\":\"string\"},{\"indexed\":false,\"internalType\":\"string\",\"name\":\"DTMetadata\",\"type\":\"string\"},{\"indexed\":false,\"internalType\":\"string\",\"name\":\"DTRecords\",\"type\":\"string\"}],\"name\":\"UserRequestedToRegister\",\"type\":\"event\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"\",\"type\":\"address\"}],\"name\":\"RegisteredDoctors\",\"outputs\":[{\"internalType\":\"bool\",\"name\":\"registered\",\"type\":\"bool\"},{\"internalType\":\"address\",\"name\":\"patientAddr\",\"type\":\"address\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"SessionID\",\"outputs\":[{\"internalType\":\"uint256\",\"name\":\"\",\"type\":\"uint256\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"string\",\"name\":\"_sessionURI\",\"type\":\"string\"}],\"name\":\"UploadSession\",\"outputs\":[],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"uint256\",\"name\":\"_sessionID\",\"type\":\"uint256\"}],\"name\":\"getSessionURI\",\"outputs\":[{\"internalType\":\"string\",\"name\":\"\",\"type\":\"string\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"owner\",\"outputs\":[{\"internalType\":\"address\",\"name\":\"\",\"type\":\"address\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"doctor\",\"type\":\"address\"}],\"name\":\"registerDoctors\",\"outputs\":[],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"renounceOwnership\",\"outputs\":[],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"string\",\"name\":\"Documents\",\"type\":\"string\"},{\"internalType\":\"string\",\"name\":\"DTMetadata\",\"type\":\"string\"},{\"internalType\":\"string\",\"name\":\"DTRecords\",\"type\":\"string\"}],\"name\":\"requestUserRegistrtion\",\"outputs\":[],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"newOwner\",\"type\":\"address\"}],\"name\":\"transferOwnership\",\"outputs\":[],\"stateMutability\":\"nonpayable\",\"type\":\"function\"}]";

        Contract contract = SDKManager.Instance.SDK.GetContract(contractAddress, contractABI);

        TransactionResult result = await contract.Write("UploadSession", url);
        Debug.Log("Session logs uploaded to the blockchain \n" + result.ToString());
        Console.WriteLine(result.ToString());

    }

    private IEnumerator DownloadJsonFromIPFS(string url)
    {
        using (UnityWebRequest request = UnityWebRequest.Get(url))
        {
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.LogError("Failed to download JSON: " + request.error);
            }
            else
            {
                string jsonData = request.downloadHandler.text;
                String path = Path.Combine(Application.persistentDataPath, "PacemakerRecords.json");
                File.WriteAllText(path, jsonData);
                Debug.Log("DT records data downloaded from IPFS and saved to: " + path);
                startConversation(jsonData);
            }
        }
    }

    // Public method to set conversationLog
    public void SetSessionLog(string log)
    {
        sessionLog = log;
    }

}
