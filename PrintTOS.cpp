#include <iostream>
#include <string>
#include "PrintTOS.h"

PrintTOS::PrintTOS() {
    opcode = "OP_PRINTTOS";
}

std::string PrintTOS::serialize() {
    return "PrintTOS \n";
}

std::string PrintTOS::getOpcode() {
    return opcode;
}

std::string PrintTOS::getOperands() {
    return "Unimp";
}