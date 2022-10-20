#ifndef DUP_H_
#define DUP_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Dup: public Stmt {
    public:
        std::string opcode;
        Dup();
        void serialize();
        std::string getOpcode();
        std::string getOperands();
};

#endif