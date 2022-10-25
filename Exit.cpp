#include <iostream>
#include <string>
#include "Exit.h"

Exit::Exit() {
    opcode = "OP_EXIT_PROGRAM";
}

std::string Exit::serialize() {
    return "Exit \n";
}

std::string Exit::getOpcode() {
    return opcode;
}

std::string Exit::getOperands() {
    return "Unimp";
}