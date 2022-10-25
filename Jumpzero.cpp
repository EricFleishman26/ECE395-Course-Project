#include <iostream>
#include <string>
#include "Jumpzero.h"

Jumpzero::Jumpzero(std::string statement) {
    opcode = "OP_JUMPZERO";
    operands = statement.substr(9, statement.length() - 9);
}

std::string Jumpzero::getOpcode() {
    return opcode;
}

std::string Jumpzero::getOperands() {
    return operands;
}

void Jumpzero::serialize() {
    std::cout << opcode << std::endl;
}