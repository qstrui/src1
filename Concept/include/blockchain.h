#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <vector>
#include "block.h"

class Blockchain {
public:
    Blockchain() { addBlock(Block(0, "2024-12-06", "Genesis Block")); }
    void addBlock(const Block& newBlock);
    void printBlockchain() const;

private:
    std::vector<Block> blocks;
};

#endif