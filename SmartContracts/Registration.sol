// SPDX-License-Identifier: Apache-2.0
pragma solidity ^0.8.0;

import "@openzeppelin/contracts/access/Ownable.sol";
import "./NFTManager.sol";

contract Registration is Ownable(msg.sender) {

    NFTManager nftManagerSC;
    uint256 public SessionID;

    constructor(address nftManagerSCAddr) {
        nftManagerSC = NFTManager(nftManagerSCAddr);
        SessionID = 1;
    }

    struct Doctor {
        bool registered;
        address patientAddr;
    }

    struct Session {
        string sessionURI;
        address patientAddr;
    }
    
    mapping(address => Doctor) public RegisteredDoctors;
    mapping(uint256 => Session) private Sessions;

    event DoctorRegistered(address Doctor, address User);
    event SessionUploaded(address User, uint256 _SessionID);
    event UserRequestedToRegister(address User, string UserDocuments, string DTMetadata, string DTRecords);

    modifier onlyRegisteredUsers {
        require(nftManagerSC.RegisteredUsers(msg.sender), "Only registered users can call this function");
        _;
    }

    function requestUserRegistrtion(string memory Documents, string memory DTMetadata, string memory DTRecords) public {
        emit UserRequestedToRegister(msg.sender, Documents, DTMetadata, DTRecords);
    }

    function registerDoctors(address doctor) public onlyRegisteredUsers {
        RegisteredDoctors[doctor].registered = true;
        RegisteredDoctors[doctor].patientAddr = msg.sender;
        emit DoctorRegistered(doctor, msg.sender);
    }

    function UploadSession(string memory _sessionURI) public onlyRegisteredUsers {
        Sessions[SessionID].sessionURI = _sessionURI;
        Sessions[SessionID].patientAddr = msg.sender;
        emit SessionUploaded(msg.sender, SessionID);
        SessionID++;
    }

    function getSessionURI(uint256 _sessionID) public view returns (string memory) {
        require(RegisteredDoctors[msg.sender].registered, "Only registered doctors can call this function");
        require(RegisteredDoctors[msg.sender].patientAddr == Sessions[_sessionID].patientAddr, "Only authorized doctors can get the session URI of this patient");
        return Sessions[_sessionID].sessionURI;
    }

}
