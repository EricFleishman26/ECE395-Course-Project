#ifndef RETURN_H_
#define RETURN_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Return: public Stmt {
    public:
        std::string opcode;
        Return();
        std::string getOpcode();
        std::string getOperands();
        void serialize();
};

#endif