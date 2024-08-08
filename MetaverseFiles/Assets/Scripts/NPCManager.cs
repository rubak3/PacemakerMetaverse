using System;
using System.Reactive;
using UnityEngine;
using UnityEngine.UI;

public class NPCManager : MonoBehaviour
{
    public GameObject player;
    public GameObject chatWindow;
    public GameObject interactionText;
    public Button XButton;
    private bool playerNear = false;

    private FPSController fpsController;
    public OpenAIManager openAIManager;
    //public OpenAIManager2 openAIManager2;

    void Start()
    {
        fpsController = player.GetComponent<FPSController>();
        XButton.onClick.AddListener(() => closeChat());
    }

    private void Update()
    {
        if (playerNear && Input.GetKeyDown(KeyCode.E))
        {
            chatWindow.SetActive(true);
            interactionText.SetActive(false);
            fpsController.StartChat();

            string timestamp = DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss");
            openAIManager.SetSessionLog($"Session started at: {timestamp}\n\n\n");
            //openAIManager2.SetSessionLog($"Session started at: {timestamp}\n\n\n");
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject == player)
        {
            playerNear = true;
            interactionText.SetActive(true);
        }
    }
    void OnTriggerExit(Collider other)
    {
        if (other.gameObject == player)
        {
            playerNear = false;
            interactionText.SetActive(false);
        }
    }

    private void closeChat()
    {
        chatWindow.SetActive(false);
        fpsController.EndChat();
        openAIManager.uploadToIPFS();
        //openAIManager2.uploadToIPFS();
    }
}
