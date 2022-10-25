#ifndef POPARR_H_
#define POPARR_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Poparr: public Stmt {
    public:
        std::string opcode;
        std::string operands;
        Poparr(std::string statement);
        std::string getOpcode();
        std::string getOperands();
        void serialize();
};

#endif