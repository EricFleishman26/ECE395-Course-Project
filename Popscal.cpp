#include <iostream>
#include <string>
#include "Popscal.h"
#include "InstructionBuffer.h"
#include "TableEntry.h"
#include "SymbolTable.h"

Popscal::Popscal(std::string statement) {
    opcode = "OP_POPSCAL";
    operands = statement.substr(8, statement.length() - 8);
}

std::string Popscal::getOpcode() {
    return opcode;
}

std::string Popscal::getOperands() {
    return operands;
}

void Popscal::serialize() {
    std::cout << opcode << std::endl;
}