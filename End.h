#ifndef END_H_
#define END_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class End: public Stmt {
    public:
        std::string opcode;
        End();
        std::string getOpcode();
        std::string getOperands();
        void serialize();
};

#endif