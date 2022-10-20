#include <iostream>
#include <string>
#include <tuple>
#include "Gosub.h"
#include "TableEntry.h"
#include "SymbolTable.h"

Gosub::Gosub(std::string statement) {
    opcode = "OP_GOSUB";
    label = statement.substr(6, statement.length() - 6);
}

std::string Gosub::getOpcode() {
    return opcode;
}

std::string Gosub::getOperands() {
    return label;
}

void Gosub::serialize() {

    TableEntry* tableEntry = SymbolTable::getFromTable(label);

    std::cout << opcode << " " << std::get<0>(tableEntry->entry) << std::endl;
}