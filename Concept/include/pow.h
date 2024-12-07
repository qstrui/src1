#ifndef POW_H
#define POW_H

#include <string>

class ProofOfWork {
public:
    ProofOfWork();
    bool validateProof(const std::string& lastProof, const std::string& proof);
    std::string generateProof();
};

#endif