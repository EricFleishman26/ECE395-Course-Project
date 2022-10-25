#include <iostream>
#include <string>
#include "Pushscal.h"
#include "InstructionBuffer.h"
#include "TableEntry.h"
#include "SymbolTable.h"

Pushscal::Pushscal(std::string statement) {
    opcode = "OP_PUSHSCALAR";
    operands = statement.substr(9, statement.length() - 9);
}

std::string Pushscal::getOpcode() {
    return opcode;
}

std::string Pushscal::getOperands() {
    return operands;
}

void Pushscal::serialize() {
    std::cout << opcode << std::endl;
}