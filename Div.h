#ifndef DIV_H_
#define DIV_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Div: public Stmt {
    public:
        std::string opcode;
        Div();
        void serialize();
};

#endif