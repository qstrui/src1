#ifndef WALLET_H
#define WALLET_H

#include <string>

class Wallet {
public:
    Wallet();
    void createTransaction(const std::string& recipient, double amount);
    void sendTransaction();
};

#endif