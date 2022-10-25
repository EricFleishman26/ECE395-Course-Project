#include <iostream>
#include <string>
#include "Return.h"

Return::Return() {
    opcode = "OP_RETURN";
}

std::string Return::getOpcode() {
    return opcode;
}

std::string Return::getOperands() {
    return "Ignore";
}

std::string Return::serialize() {
    return "Return\n";
}