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

std::string Popscal::serialize() {
    TableEntry* tableEntry = SymbolTable::getFromTable(operands);
    int location = std::get<0>(tableEntry->entry);

    std::string serial = "PopScalar " + operands + ", (" + std::to_string(location) + ")\n";
    return serial;
}