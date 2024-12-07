#ifndef P2P_H
#define P2P_H

#include <string>

class P2P {
public:
    void connectToPeer(const std::string& address);
    void broadcastMessage(const std::string& message);
};

#endif