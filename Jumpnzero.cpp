#include <iostream>
#include <string>
#include "Jumpnzero.h"
#include "InstructionBuffer.h"

Jumpnzero::Jumpnzero(std::string statement) {
    opcode = "OP_JUMPNZERO";
    operands = statement.substr(10, statement.length() - 10);
}

std::string Jumpnzero::getOpcode() {
    return opcode;
}

std::string Jumpnzero::getOperands() {
    return operands;
}

std::string Jumpnzero::serialize() {
    std::string serial = "JumpNZero, " + operands + ", " + "(" + std::to_string(InstructionBuffer::currentIndex) + ")\n";

    InstructionBuffer::currentIndex++;

    return serial;
}