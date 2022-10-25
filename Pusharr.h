#ifndef PUSHARR_H_
#define PUSHARR_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Pusharr: public Stmt {
    public:
        std::string opcode;
        std::string operands;
        Pusharr(std::string statement);
        std::string getOpcode();
        std::string getOperands();
        void serialize();

};

#endif