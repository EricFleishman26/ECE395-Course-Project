#include <iostream>
#include <string>
#include "Negate.h"

Negate::Negate() {
    opcode = "OP_NEGATE";
}

void Negate::serialize() {
    std::cout << "Negate" << std::endl;
}

std::string Negate::getOpcode() {
    return opcode;
}

std::string Negate::getOperands() {
    return "Unimp";
}