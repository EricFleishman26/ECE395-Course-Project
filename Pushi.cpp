#include <iostream>
#include <string>
#include <regex>
#include "Pushi.h"

Pushi::Pushi(std::string statement) {
    opcode = "OP_PUSHI";

    std::regex reg(R"((?:^|\s)([+-]?[[:digit:]]+(?:\.[[:digit:]]+)?)(?=$|\s))");
    std::smatch m;
    while (regex_search(statement, m, reg)) {
        integer = m[1];
        break;
    }  

}

void Pushi::serialize() {
    std::cout << opcode << "  " << "(" << integer << ")" << std::endl;
}

std::string Pushi::getOpcode() {
    return opcode;
}

std::string Pushi::getOperands() {
    return "Unimp";
}