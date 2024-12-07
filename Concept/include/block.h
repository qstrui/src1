#ifndef BLOCK_H
#define BLOCK_H

#include <string>

class Block {
public:
    Block(int index, const std::string& timestamp, const std::string& data);
    int getIndex() const;
    std::string getTimestamp() const;
    std::string getData() const;

private:
    int index;
    std::string timestamp;
    std::string data;
};

#endif