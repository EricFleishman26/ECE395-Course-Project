#include <iostream>
#include <string>
#include "PrintTOS.h"

PrintTOS::PrintTOS() {
    opcode = "OP_PRINTTOS";
}

void PrintTOS::serialize() {
    std::cout << "PrintTOS" << std::endl;
}