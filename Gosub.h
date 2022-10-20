#ifndef GOSUB_H_
#define GOSUB_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Gosub: public Stmt {
    public:
        std::string label;
        std::string opcode;
        Gosub(std::string statement);
        void serialize();
        std::string getOpcode();
        std::string getOperands();
};

#endif