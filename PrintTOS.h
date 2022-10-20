#ifndef PRINTTOS_H_
#define PRINTTOS_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class PrintTOS: public Stmt {
    public:
        std::string opcode;
        PrintTOS();
        void serialize();
        std::string getOpcode();
        std::string getOperands();
};

#endif