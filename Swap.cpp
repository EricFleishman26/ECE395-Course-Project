#include <iostream>
#include <string>
#include "Swap.h"

Swap::Swap() {
    opcode = "OP_SWAP";
}

std::string Swap::serialize() {
    return "Swap \n";
}

std::string Swap::getOpcode() {
    return opcode;
}

std::string Swap::getOperands() {
    return "Unimp";
}