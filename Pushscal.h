#ifndef PUSHSCAL_H_
#define PUSHSCAL_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Pushscal: public Stmt {
    public:
        Pushscal(std::string statement);
        std::string opcode;
        std::string operands;
        std::string getOpcode();
        std::string getOperands();
        void serialize();
};

#endif