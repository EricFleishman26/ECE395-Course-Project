#include <iostream>
#include <string>
#include "PrintTOS.h"

PrintTOS::PrintTOS() {
    opcode = "OP_PRINTTOS";
}

void PrintTOS::serialize() {
    std::cout << "PrintTOS" << std::endl;
}

std::string PrintTOS::getOpcode() {
    return opcode;
}

std::string PrintTOS::getOperands() {
    return "Unimp";
}