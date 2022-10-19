#include <iostream>
#include <string>
#include "Dup.h"

Dup::Dup() {
    opcode = "OP_DUP";
}

void Dup::serialize() {
    std::cout << "Dup" << std::endl;
}