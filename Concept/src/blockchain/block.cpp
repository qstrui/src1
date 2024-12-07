#include "block.h"

Block::Block(int index, const std::string& timestamp, const std::string& data)
    : index(index), timestamp(timestamp), data(data) {}

int Block::getIndex() const {
    return index;
}

std::string Block::getTimestamp() const {
    return timestamp;
}

std::string Block::getData() const {
    return data;
}