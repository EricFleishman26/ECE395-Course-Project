#include <iostream>
#include <string>
#include <regex>
#include "Pushi.h"

Pushi::Pushi(std::string statement) {
    opcode = "OP_PUSHI";

    integer = statement.substr(6, statement.length() - 6);

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