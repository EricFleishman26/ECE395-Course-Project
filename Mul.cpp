#include <iostream>
#include <string>
#include "Mul.h"

Mul::Mul() {
    opcode = "OP_MUL";
}

void Mul::serialize() {
    std::cout << "Mul" << std::endl;
}