#ifndef EXIT_H_
#define EXIT_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Exit: public Stmt {
    public:
        std::string opcode;
        Exit();
        std::string getOpcode();
        std::string getOperands();
        std::string serialize();
};

#endif