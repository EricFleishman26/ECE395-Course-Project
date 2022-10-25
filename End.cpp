#include <iostream>
#include <string>
#include "End.h"

End::End() {
    opcode = "OP_END";
}

std::string End::getOpcode() {
    return opcode;
}

std::string End::getOperands() {
    return "Ignore";
}

std::string End::serialize() {
    return "";
}