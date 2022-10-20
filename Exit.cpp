#include <iostream>
#include <string>
#include "Exit.h"

Exit::Exit() {
    opcode = "OP_EXIT_PROGRAM";
}

void Exit::serialize() {
    std::cout << "Exit" << std::endl;
}

std::string Exit::getOpcode() {
    return opcode;
}

std::string Exit::getOperands() {
    return "Unimp";
}