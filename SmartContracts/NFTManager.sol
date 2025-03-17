// SPDX-License-Identifier: MIT
pragma solidity ^0.8.18;

import "@openzeppelin/contracts/token/ERC721/extensions/ERC721URIStorage.sol";
import "@openzeppelin/contracts/token/ERC721/extensions/ERC721Burnable.sol";
import "@openzeppelin/contracts/access/Ownable.sol";
import "@openzeppelin/contracts/utils/ReentrancyGuard.sol";
import "@openzeppelin/contracts/token/ERC721/ERC721.sol";

contract NFTManager is ERC721, ERC721URIStorage, ERC721Burnable, Ownable(msg.sender), ReentrancyGuard {
    uint256 public tokenId;

    mapping(address => bool) public registeredUsers;
    mapping(address => uint256) private nftOwners;
    mapping(uint256 => string) private dtRecordsUri;
    mapping(uint256 => string) private dtMetadata;

    event UserRegisteredAndNFTMinted(address user, uint256 tokenId); 
    event UserRemovedAndNFTBurned(address user, uint256 tokenId);
    event RecordsUpdated(address user, string newRecords);

    constructor() ERC721("DigitalTwinNFT", "DTNFT") {
        tokenId = 0;
    }

    function mintDTNFT(string memory metadata, address user, string memory records) public onlyOwner nonReentrant {
        require(!registeredUsers[user], "User is already registered");
        registeredUsers[user] = true;
        uint256 currentTokenId = tokenId;
        nftOwners[user] = currentTokenId;
        tokenId++;
        
        _safeMint(user, currentTokenId);
        dtRecordsUri[currentTokenId] = records;
        dtMetadata[currentTokenId] = metadata;
        emit UserRegisteredAndNFTMinted(user, currentTokenId);
    }

    function updateDTRecords(string memory newRecords) public {
        require(registeredUsers[msg.sender], "User is not registered");
        dtRecordsUri[nftOwners[msg.sender]] = newRecords;
        emit RecordsUpdated(msg.sender, newRecords);
    }

    function burnNFT(uint256 _tokenId) public onlyOwner {
        _burn(_tokenId);
        registeredUsers[ownerOf(_tokenId)] = false;
        delete nftOwners[ownerOf(_tokenId)];
        emit UserRemovedAndNFTBurned(ownerOf(_tokenId), _tokenId);
    }

    function tokenURI(uint256 _tokenId) public view override(ERC721, ERC721URIStorage) returns (string memory) {
        require(registeredUsers[ownerOf(_tokenId)], "Token does not exist");
        return dtRecordsUri[_tokenId]; // Returns metadata URL
    }

    function getDTRecords() public view returns (string memory) {
        return tokenURI(nftOwners[msg.sender]);
    }

    function getDTMetadata() public view returns (string memory) {
        return dtMetadata[nftOwners[msg.sender]];
    }

    function supportsInterface(bytes4 interfaceId) public view override(ERC721, ERC721URIStorage) returns (bool) {
        return super.supportsInterface(interfaceId);
    }
}
