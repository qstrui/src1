#include "node.h"

Node::Node(const std::string& address) : address(address) {}

std::string Node::getAddress() const {
    return address;
}