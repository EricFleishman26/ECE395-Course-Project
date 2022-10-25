#ifndef POP_H_
#define POP_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Pop: public Stmt {
    public:
        std::string opcode;
        Pop();
        std::string getOpcode();
        std::string getOperands();
        std::string serialize();
};

#endif