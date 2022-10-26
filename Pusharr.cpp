#include <iostream>
#include <string>
#include "Pusharr.h"
#include "SymbolTable.h"

Pusharr::Pusharr(std::string statement) {
    opcode = "OP_PUSHARRAY";
    operands = statement.substr(8, statement.length() - 8);

}

std::string Pusharr::getOpcode() {
    return opcode;
}

std::string Pusharr::getOperands() {
    return operands;
}

std::string Pusharr::serialize() {
    TableEntry* tableEntry = SymbolTable::getFromTable(operands);
    int location = std::get<0>(tableEntry->entry);

    std::string serial = "PushArray " + operands + ", (" + std::to_string(location) + ")\n";
    return serial;
}