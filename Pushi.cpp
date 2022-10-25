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

std::string Pushi::serialize() {
    std::string serial = "PushI  (" + integer + ")\n";

    return serial;
}

std::string Pushi::getOpcode() {
    return opcode;
}

std::string Pushi::getOperands() {
    return "Unimp";
}