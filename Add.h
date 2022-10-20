#ifndef ADD_H_
#define ADD_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Add: public Stmt {
    public:
        std::string opcode;
        Add();
        void serialize();
        std::string getOpcode();
        std::string getOperands();
};

#endif