#include <iostream>
#include <string>
#include "Poparr.h"
#include "InstructionBuffer.h"
#include "TableEntry.h"
#include "SymbolTable.h"

Poparr::Poparr(std::string statement) {
    opcode = "OP_POPARRAY";
    operands = statement.substr(7, statement.length() - 7);

}

std::string Poparr::getOpcode() {
    return opcode;
}

std::string Poparr::getOperands() {
    return operands;
}

std::string Poparr::serialize() {
    TableEntry* tableEntry = SymbolTable::getFromTable(operands);
    int location = std::get<0>(tableEntry->entry);

    std::string serial = "PopArray " + operands + ", (" + std::to_string(location) + ")\n";
    return serial;
}