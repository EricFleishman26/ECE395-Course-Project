#include <iostream>
#include <string>
#include "Div.h"

Div::Div() {
    opcode = "OP_DIV";
}

std::string Div::serialize() {
    return "Div \n";
}

std::string Div::getOpcode() {
    return opcode;
}

std::string Div::getOperands() {
    return "Unimp";
}