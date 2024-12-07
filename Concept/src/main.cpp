#include "blockchain.h"

int main() {
    Blockchain blockchain;
    blockchain.addBlock(Block(1, "2024-12-07", "Second Block"));
    blockchain.addBlock(Block(2, "2024-12-08", "Third Block"));
    
    blockchain.printBlockchain(); // Display the blockchain

    return 0;
}