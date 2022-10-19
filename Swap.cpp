#include <iostream>
#include <string>
#include "Swap.h"

Swap::Swap() {
    opcode = "OP_SWAP";
}

void Swap::serialize() {
    std::cout << "Swap" << std::endl;
}