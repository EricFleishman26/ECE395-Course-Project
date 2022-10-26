#include <iostream>
#include <string>
#include "Jumpnzero.h"
#include "InstructionBuffer.h"
#include "SymbolTable.h"

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
    TableEntry* tableEntry = SymbolTable::getFromTable(operands);
    int location = std::get<0>(tableEntry->entry);

    std::string serial = "JumpNZero, " + operands + ", " + "(" + std::to_string(location) + ")\n";

    return serial;
}