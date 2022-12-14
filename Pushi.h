#ifndef PUSHI_H_
#define PUSHI_H_

#include <iostream>
#include <string>
#include "Stmt.h"
#include "InstructionBuffer.h"

class Pushi: public Stmt {
    public:
        std::string opcode;
        std::string integer;
        Pushi(std::string statement);
        std::string getOpcode();
        std::string getOperands();
        std::string serialize();
};

#endif