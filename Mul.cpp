#include <iostream>
#include <string>
#include "Mul.h"

Mul::Mul() {
    opcode = "OP_MUL";
}

std::string Mul::serialize() {
    return "Mul \n";
}

std::string Mul::getOpcode() {
    return opcode;
}

std::string Mul::getOperands() {
    return "Unimp";
}