#ifndef POPSCAL_H_
#define POPSCAL_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Popscal: public Stmt {
    public:
        std::string opcode;
        std::string operands;
        Popscal(std::string statement);
        std::string getOpcode();
        std::string getOperands();
        std::string serialize();
};

#endif