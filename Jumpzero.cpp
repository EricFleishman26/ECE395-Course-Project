#include <iostream>
#include <string>
#include "Jumpzero.h"
#include "InstructionBuffer.h"

Jumpzero::Jumpzero(std::string statement) {
    opcode = "OP_JUMPZERO";
    operands = statement.substr(9, statement.length() - 9);
}

std::string Jumpzero::getOpcode() {
    return opcode;
}

std::string Jumpzero::getOperands() {
    return operands;
}

std::string Jumpzero::serialize() {
    std::string serial = "JumpZero, " + operands + ", " + "(" + std::to_string(InstructionBuffer::currentIndex) + ")\n";

    return serial;
}