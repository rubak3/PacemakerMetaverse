// SPDX-License-Identifier: Apache-2.0
pragma solidity ^0.8.18;

import "@openzeppelin/contracts/access/Ownable.sol";
import "./NFTManager.sol";

contract Registration is Ownable(msg.sender) {

    NFTManager immutable nftManagerSC;
    uint256 public sessionId;

    constructor(address nftManagerSCAddr) {
        nftManagerSC = NFTManager(nftManagerSCAddr);
        sessionId = 1;
    }

    struct Doctor {
        bool registered;
        address patientAddr;
    }

    struct Session {
        string sessionUri;
        address patientAddr;
    }
    
    mapping(address => Doctor) public registeredDoctors;
    mapping(uint256 => Session) private sessions;

    event DoctorRegistered(address doctor, address user);
    event SessionUploaded(address user, uint256 sessionId);
    event UserRequestedToRegister(address user, string userDocuments, string dtMetadata, string dtRecords);

    modifier onlyRegisteredUsers {
        require(nftManagerSC.registeredUsers(msg.sender), "Only registered users can call this function");
        _;
    }

    function requestUserRegistration(string memory userDocuments, string memory dtMetadata, string memory dtRecords) public {
        emit UserRequestedToRegister(msg.sender, userDocuments, dtMetadata, dtRecords);
    }

    function registerDoctors(address doctor) public onlyRegisteredUsers {
        require(!registeredDoctors[doctor].registered, "Doctor is already registered");
        registeredDoctors[doctor].registered = true;
        registeredDoctors[doctor].patientAddr = msg.sender;
        emit DoctorRegistered(doctor, msg.sender);
    }

    function uploadSession(string memory sessionUri) public onlyRegisteredUsers {
        sessions[sessionId].sessionUri = sessionUri;
        sessions[sessionId].patientAddr = msg.sender;
        emit SessionUploaded(msg.sender, sessionId);
        sessionId++;
    }

    function getSessionURI(uint256 sessId) public view returns (string memory) {
        require(registeredDoctors[msg.sender].registered, "Only registered doctors can call this function");
        require(registeredDoctors[msg.sender].patientAddr == sessions[sessId].patientAddr, "Only authorized doctors can get the session URI of this patient");
        return sessions[sessId].sessionUri;
    }

}
