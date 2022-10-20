#include <iostream>
#include <string>
#include "Mul.h"

Mul::Mul() {
    opcode = "OP_MUL";
}

void Mul::serialize() {
    std::cout << "Mul" << std::endl;
}

std::string Mul::getOpcode() {
    return opcode;
}

std::string Mul::getOperands() {
    return "Unimp";
}