#include <iostream>
#include <string>
#include "Poparr.h"
#include "InstructionBuffer.h"
#include "TableEntry.h"
#include "SymbolTable.h"

Poparr::Poparr(std::string statement) {
    opcode = "OP_POPARRAY";
    operands = statement.substr(7, statement.length() - 7);

    if(!Stmt::inSubroutine) {
        Stmt::numVariables++;
    }
}

std::string Poparr::getOpcode() {
    return opcode;
}

std::string Poparr::getOperands() {
    return operands;
}

void Poparr::serialize() {
    std::cout << opcode << std::endl;
}