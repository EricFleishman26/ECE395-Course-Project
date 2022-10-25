#ifndef JUMPNZERO_H_
#define JUMPNZERO_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Jumpnzero: public Stmt {
    public:
        std::string opcode;
        std::string operands;
        Jumpnzero(std::string statement);
        std::string getOpcode();
        std::string getOperands();
        void serialize();
};

#endif