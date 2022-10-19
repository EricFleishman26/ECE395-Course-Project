#include <iostream>
#include <string>
#include "Div.h"

Div::Div() {
    opcode = "OP_DIV";
}

void Div::serialize() {
    std::cout << "Div" << std::endl;
}