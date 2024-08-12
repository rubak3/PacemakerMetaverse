// SPDX-License-Identifier: MIT
pragma solidity ^0.8.18;

import "@openzeppelin/contracts/token/ERC721/extensions/ERC721URIStorage.sol";
import "@openzeppelin/contracts/token/ERC721/extensions/ERC721Burnable.sol";
import "@openzeppelin/contracts/access/Ownable.sol";
import "@openzeppelin/contracts/utils/ReentrancyGuard.sol";

contract NFTManager is ERC721URIStorage, Ownable(msg.sender), ReentrancyGuard {
    uint256 public tokenId;

    mapping(address => bool) public registeredUsers;
    mapping(address => uint256) private nftOwners;
    mapping(address => string) private dtRecordsUri;

    event UserRegisteredAndNFTMinted(address user, uint256 tokenId); 
    event UserRemovedAndNFTBurned(address user, uint256 tokenId);

    constructor() ERC721("DigitalTwinNFT", "DTNFT") {
        tokenId = 0;
    }

    function mintDTNFT(string memory dtMetadata, address user, string memory dtRecords) public onlyOwner nonReentrant {
        registeredUsers[user] = true;
        uint256 currentTokenId = tokenId;
        nftOwners[user] = currentTokenId;
        tokenId++;
        
        _safeMint(user, currentTokenId);
        _setTokenURI(currentTokenId, dtMetadata);
        dtRecordsUri[user] = dtRecords;
        emit UserRegisteredAndNFTMinted(user, currentTokenId);
    }

    function burnNFT(address user) public onlyOwner {
        _burn(nftOwners[user]);
        registeredUsers[user] = false;
        delete nftOwners[user];
        emit UserRemovedAndNFTBurned(user, nftOwners[user]);
    }

    function getDTRecords() public view returns (string memory) {
        return dtRecordsUri[msg.sender];
    }

    function getDTMetadata() public view returns (string memory) {
        return tokenURI(nftOwners[msg.sender]);
    }
}
