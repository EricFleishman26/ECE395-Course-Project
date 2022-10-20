#include <iostream>
#include <string>
#include "Swap.h"

Swap::Swap() {
    opcode = "OP_SWAP";
}

void Swap::serialize() {
    std::cout << "Swap" << std::endl;
}

std::string Swap::getOpcode() {
    return opcode;
}

std::string Swap::getOperands() {
    return "Unimp";
}