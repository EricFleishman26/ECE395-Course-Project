#include <iostream>
#include <string>
#include "Dup.h"

Dup::Dup() {
    opcode = "OP_DUP";
}

void Dup::serialize() {
    std::cout << opcode << std::endl;
}

std::string Dup::getOpcode() {
    return opcode;
}

std::string Dup::getOperands() {
    return "Unimp";
}