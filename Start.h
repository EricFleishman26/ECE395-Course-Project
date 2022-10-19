#ifndef START_H_
#define START_H_

#include <iostream>
#include <string>
#include "Stmt.h"
#include "InstructionBuffer.h"

class Start: public Stmt {
    private:
        int numVariables;
        std::string opcode;
    public:
        Start();
        void serialize();
};

#endif