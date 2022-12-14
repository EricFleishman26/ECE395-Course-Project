#ifndef JUMPZERO_H_
#define JUMPZERO_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Jumpzero: public Stmt {
    public:
        std::string opcode;
        std::string operands;
        Jumpzero(std::string statement);
        std::string getOpcode();
        std::string getOperands();
        std::string serialize();
};

#endif