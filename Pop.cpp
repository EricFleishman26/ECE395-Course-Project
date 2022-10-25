#include <iostream>
#include <string>
#include "Pop.h"

Pop::Pop() {
    opcode = "OP_POP";
}

std::string Pop::serialize() {
    return "Pop \n";
}

std::string Pop::getOpcode() {
    return opcode;
}

std::string Pop::getOperands() {
    return "Unimp";
}