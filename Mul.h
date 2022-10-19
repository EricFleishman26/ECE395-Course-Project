#ifndef MUL_H_
#define MUL_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Mul: public Stmt {
    public:
        std::string opcode;
        Mul();
        void serialize();
};

#endif