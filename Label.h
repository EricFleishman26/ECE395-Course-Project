#ifndef LABEL_H_
#define LABEL_H_

#include <iostream>
#include <string>
#include "Stmt.h"
#include "InstructionBuffer.h"
#include "TableEntry.h"
#include "SymbolTable.h"

class Label: public Stmt {
    public:
        std::string name;
        Label(std::string statement);
        void serialize();
        std::string getOpcode();
        std::string getOperands();
};

#endif