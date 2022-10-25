#ifndef DUP_H_
#define DUP_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Dup: public Stmt {
    public:
        std::string opcode;
        Dup();
        std::string getOpcode();
        std::string getOperands();
        std::string serialize();
};

#endif