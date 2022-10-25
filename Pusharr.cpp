#include <iostream>
#include <string>
#include "Pusharr.h"

Pusharr::Pusharr(std::string statement) {
    opcode = "OP_PUSHARRAY";
    operands = statement.substr(8, statement.length() - 8);

}

std::string Pusharr::getOpcode() {
    return opcode;
}

std::string Pusharr::getOperands() {
    return operands;
}

std::string Pusharr::serialize() {
    std::string serial = "PushArray " + operands + ", " + "(0)\n";
    return serial;
}