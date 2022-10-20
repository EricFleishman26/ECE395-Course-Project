#include <iostream>
#include <string>
#include "Pop.h"

Pop::Pop() {
    opcode = "OP_POP";
}

void Pop::serialize() {
    std::cout << "Pop" << std::endl;
}

std::string Pop::getOpcode() {
    return opcode;
}

std::string Pop::getOperands() {
    return "Unimp";
}