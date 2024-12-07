#ifndef NODE_H
#define NODE_H

#include <string>

class Node {
public:
    Node(const std::string& address);
    std::string getAddress() const;

private:
    std::string address;
};

#endif