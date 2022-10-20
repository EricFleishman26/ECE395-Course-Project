#include <iostream>
#include <string>
#include "Div.h"

Div::Div() {
    opcode = "OP_DIV";
}

void Div::serialize() {
    std::cout << opcode << std::endl;
}

std::string Div::getOpcode() {
    return opcode;
}

std::string Div::getOperands() {
    return "Unimp";
}