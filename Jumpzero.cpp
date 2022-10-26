#include <iostream>
#include <string>
#include "Jumpzero.h"
#include "InstructionBuffer.h"
#include "SymbolTable.h"

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
    
    TableEntry* tableEntry = SymbolTable::getFromTable(operands);
    int location = std::get<0>(tableEntry->entry);

    std::string serial = "JumpZero, " + operands + ", " + "(" + std::to_string(location) + ")\n";

    return serial;
}