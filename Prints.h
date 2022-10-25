#ifndef PRINTS_H_
#define PRINTS_H_

#include <iostream>
#include <string>
#include "Stmt.h"
#include "StringBuffer.h"

class Prints: public Stmt {
    public:
        std::string opcode;
        StringBuffer* sb;
        Prints(std::string statement);
        std::string getOpcode();
        std::string getOperands();
        std::string serialize();
};

#endif