#include <iostream>
#include <string>
#include "Add.h"

Add::Add() {
    opcode = "OP_ADD";
}

void Add::serialize() {
    std::cout << opcode << std::endl;
}

std::string Add::getOpcode() {
    return opcode;
}

std::string Add::getOperands() {
    return "Unimp";
}