#include "blockchain.h"
#include "block.h"
#include <iostream>

void Blockchain::addBlock(const Block& newBlock) {
    blocks.push_back(newBlock);
}

void Blockchain::printBlockchain() const {
    for (const auto& block : blocks) {
        std::cout << "Block " << block.getIndex() << ": " << block.getData() << "\n";
    }
}