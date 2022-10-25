#ifndef NEGATE_H_
#define NEGATE_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Negate: public Stmt {
    public:
        std::string opcode;
        Negate();
        std::string getOpcode();
        std::string getOperands();
        std::string serialize();
};

#endif