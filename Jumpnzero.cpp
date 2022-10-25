#include <iostream>
#include <string>
#include "Jumpnzero.h"

Jumpnzero::Jumpnzero(std::string statement) {
    opcode = "OP_JUMPNZERO";
    operands = statement.substr(10, statement.length() - 10);
}

std::string Jumpnzero::getOpcode() {
    return opcode;
}

std::string Jumpnzero::getOperands() {
    return operands;
}

void Jumpnzero::serialize() {
    std::cout << opcode << std::endl;
}