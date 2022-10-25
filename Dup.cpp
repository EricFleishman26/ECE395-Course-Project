#include <iostream>
#include <string>
#include "Dup.h"

Dup::Dup() {
    opcode = "OP_DUP";
}

std::string Dup::serialize() {
    return "Dup \n";
}

std::string Dup::getOpcode() {
    return opcode;
}

std::string Dup::getOperands() {
    return "Unimp";
}