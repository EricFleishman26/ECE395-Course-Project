#ifndef SWAP_H_
#define SWAP_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Swap: public Stmt {
    public:
        std::string opcode;
        Swap();
        std::string getOpcode();
        std::string getOperands();
        std::string serialize();
};

#endif