#include <iostream>
#include <string>
#include "Negate.h"

Negate::Negate() {
    opcode = "OP_NEGATE";
}

std::string Negate::serialize() {
    return "Negate \n";
}

std::string Negate::getOpcode() {
    return opcode;
}

std::string Negate::getOperands() {
    return "Unimp";
}