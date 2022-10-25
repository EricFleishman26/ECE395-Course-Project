#include <iostream>
#include <string>
#include "Pusharr.h"

Pusharr::Pusharr(std::string statement) {
    opcode = "OP_PUSHARRAY";
    operands = statement.substr(8, statement.length() - 8);

    if(!Stmt::inSubroutine) {
        Stmt::numVariables++;
    }
}

std::string Pusharr::getOpcode() {
    return opcode;
}

std::string Pusharr::getOperands() {
    return operands;
}

void Pusharr::serialize() {
    std::cout << opcode << std::endl;
}