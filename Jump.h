#ifndef JUMP_H_
#define JUMP_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Jump: public Stmt {
    public:
        std::string opcode;
        std::string label;
        Jump(std::string statement);
        void serialize();
        std::string getOpcode();
        std::string getOperands();
};

#endif