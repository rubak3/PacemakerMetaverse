using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using Newtonsoft.Json.Linq;
using System.IO;
using TMPro;
using UnityEngine.UI;
using OpenAI.Assistants;
using System.Threading.Tasks;
using System;
using System.Collections.Generic;
using OpenAI;
using System.Text;
using Thirdweb;
using System.Net.Http;
using System.Net.Http.Headers;

public class OpenAIManager2 : MonoBehaviour
{
    //private AzureOpenAIClient azureClient;
    private OpenAIClient azureClient;
    
    #pragma warning disable OPENAI001 // Type is for evaluation purposes only and is subject to change or removal in future updates. Suppress this diagnostic to proceed.
    private AssistantClient assistantClient;
    #pragma warning restore OPENAI001
    
    private OpenAI.Assistants.Assistant assistant;
    private string fileUploadId; 
    private string path;

    public TMP_Text outputField;
    public TMP_InputField inputField;
    public Button OKButton;

    private string sessionLog = "";

    void Start()
    {
        // Initialize clients and assistants
        InitializeClients();

        //Load data from IPFS and set up button listener
        string RecordsHash = PlayerPrefs.GetString("RecordsHash");
        string url = "https://gateway.pinata.cloud/ipfs/" + RecordsHash;
        StartCoroutine(DownloadJsonFromIPFS(url));

        OKButton.onClick.AddListener(() => GetResponse());
    }

    private async void InitializeClients()
    {
        azureClient = new OpenAIClient("Your-API-Key");
        #pragma warning disable OPENAI001 // Type is for evaluation purposes only and is subject to change or removal in future updates. Suppress this diagnostic to proceed.
        assistantClient = azureClient.GetAssistantClient();
        #pragma warning restore OPENAI001
        
        await CreateAssistant();
    }

    private async Task CreateAssistant()
    {
        var assistantCreationOptions = new OpenAI.Assistants.AssistantCreationOptions
        {
            Name = "Pacemaker AI Assistant",
            Instructions = "You are an AI assistant for a pacemaker digital twin, give brief answers for users' questions about the pacemaker status and records from the provided file.",
            Tools = { OpenAI.Assistants.ToolDefinition.CreateFileSearch() },
        };

        assistant = await assistantClient.CreateAssistantAsync("gpt-4o-mini", assistantCreationOptions);
    }

    async void uploadFile()
    {
        await UploadFileAsync();
    }

    private async Task UploadFileAsync()
    {
        if (string.IsNullOrEmpty(path))
        {
            Debug.LogError("File path is not set.");
            return;
        }

        using (var httpClient = new HttpClient())
        {
            httpClient.DefaultRequestHeaders.Authorization = new AuthenticationHeaderValue("Bearer", "Your-API-Key");

            using (var content = new MultipartFormDataContent())
            {
                var fileStream = File.OpenRead(path);
                var fileContent = new StreamContent(fileStream);
                fileContent.Headers.ContentType = new MediaTypeHeaderValue("application/json");

                content.Add(fileContent, "file", Path.GetFileName(path));
                content.Add(new StringContent("assistants"), "purpose"); // 'purpose' could be 'search', 'fine-tune', or 'answers'

                var response = await httpClient.PostAsync("https://api.openai.com/v1/files", content);
                string result = await response.Content.ReadAsStringAsync();

                // Parse the JSON response to get the file ID
                JObject jsonResponse = JObject.Parse(result);
                string fileId = jsonResponse["id"]?.ToString();

                fileUploadId = fileId;

                Debug.Log("Records file attached to the AI assistant with ID: " + fileId);
            }
        }

        /*
        var fileUploadResponse = await azureClient2.GetFileClient().UploadFileAsync(
            path,
            OpenAI.Files.FileUploadPurpose.Assistants);
        fileUploadId = fileUploadResponse.Value.Id;
        */
    }

    public async void GetResponse()
    {
        if (inputField.text.Length < 1)
        {
            return;
        }

        OKButton.enabled = false;
        string userMessage = inputField.text;
        string responseMessage = "";
        sessionLog += $"user: {userMessage}\n\n";
        outputField.text = $"Q: {userMessage}";
        inputField.text = "";

        // Ensure assistant and file upload
        if (assistant == null)
        {
            await CreateAssistant();
        }
        if (fileUploadId == null)
        {
            await UploadFileAsync();
        }

        var thread = await assistantClient.CreateThreadAsync();

        var messageCreationOptions = new MessageCreationOptions();
        messageCreationOptions.Attachments.Add(new MessageCreationAttachment(fileUploadId, new List<OpenAI.Assistants.ToolDefinition> { OpenAI.Assistants.ToolDefinition.CreateFileSearch() }));

        await assistantClient.CreateMessageAsync(thread, new List<OpenAI.Assistants.MessageContent> { OpenAI.Assistants.MessageContent.FromText(userMessage) }, messageCreationOptions);

        await foreach (StreamingUpdate streamingUpdate in assistantClient.CreateRunStreamingAsync(thread, assistant, new RunCreationOptions()))
        {
            if (streamingUpdate is MessageContentUpdate contentUpdate)
            {
                responseMessage += contentUpdate?.Text;
            }
        }

        sessionLog += $"Assistant: {responseMessage}\n\n";
        outputField.text = $"Q: {userMessage}\n\nA: {responseMessage}";
        OKButton.enabled = true;
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
                path = Path.Combine(Application.persistentDataPath, "PacemakerRecords.json");
                File.WriteAllText(path, jsonData);
                Debug.Log("DT records data downloaded from IPFS and saved to: " + path);
                uploadFile();
            }
        }
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
        request.SetRequestHeader("pinata_secret_api_key", "Tour-Secret-API-Key"); // Add API Secret Key to the header

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
        Debug.Log("Session logs uploaded to the blockchain" + result.ToString());
        Console.WriteLine(result.ToString());

    }

    // Public method to set conversationLog
    public void SetSessionLog(string log)
    {
        sessionLog = log;
    }
}
