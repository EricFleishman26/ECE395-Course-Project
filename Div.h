#ifndef DIV_H_
#define DIV_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Div: public Stmt {
    public:
        std::string opcode;
        Div();
        std::string getOpcode();
        std::string getOperands();
        std::string serialize();
};

#endif