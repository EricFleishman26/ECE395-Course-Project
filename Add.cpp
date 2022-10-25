#include <iostream>
#include <string>
#include "Add.h"

Add::Add() {
    opcode = "OP_ADD";
}

std::string Add::serialize() {
    return "Add \n";
}

std::string Add::getOpcode() {
    return opcode;
}

std::string Add::getOperands() {
    return "Unimp";
}