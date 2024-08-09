// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

import "@openzeppelin/contracts/token/ERC721/extensions/ERC721URIStorage.sol";
import "@openzeppelin/contracts/token/ERC721/extensions/ERC721Burnable.sol";
import "@openzeppelin/contracts/access/Ownable.sol";

contract NFTManager is ERC721URIStorage, Ownable(msg.sender) {
    uint256 public _tokenID;

    mapping(address => bool) public RegisteredUsers;
    mapping(address => uint256) public NFTOwners;
    mapping(address => string) public DTRecordsURI;

    event UserRegisteredAndNFTMinted(address User, uint256 TokenID); 
    event UserRemovedAndNFTBurned(address User, uint256 TokenID);

    constructor() ERC721("DigitalTwinNFT", "DTNFT") {
        _tokenID = 0;
    }

    function mintDTNFT(string memory DTMetadata, address User, string memory DTRecords) public onlyOwner {
        RegisteredUsers[User] = true;
        NFTOwners[User] = _tokenID;
        _safeMint(User, _tokenID);
        _setTokenURI(_tokenID, DTMetadata);
        DTRecordsURI[User] = DTRecords;
        emit UserRegisteredAndNFTMinted(User, _tokenID);
        _tokenID++;
    }

    function burnNFT(address User) public onlyOwner{
        _burn(NFTOwners[User]);
        RegisteredUsers[User] = false;
        delete NFTOwners[User];
        emit UserRemovedAndNFTBurned(User, _tokenID);
    }

    function getRecordsURI(address User) public view returns(string memory) {
        require(msg.sender == User);
        return DTRecordsURI[User];
    }

    function getDTURI(uint256 tokenId) public view returns (string memory) {
        require(NFTOwners[msg.sender] == tokenId);
        return tokenURI(tokenId);
    }

}
