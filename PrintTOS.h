#ifndef PRINTTOS_H_
#define PRINTTOS_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class PrintTOS: public Stmt {
    public:
        std::string opcode;
        PrintTOS();
        std::string getOpcode();
        std::string getOperands();
        std::string serialize();
};

#endif