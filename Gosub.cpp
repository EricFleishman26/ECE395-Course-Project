#include <iostream>
#include <string>
#include <tuple>
#include "Gosub.h"
#include "TableEntry.h"
#include "SymbolTable.h"

Gosub::Gosub(std::string statement) {
    opcode = "OP_GOSUB";
    label = statement.substr(6, statement.length() - 6);
    Stmt::inSubroutine = true;
}

std::string Gosub::getOpcode() {
    return opcode;
}

std::string Gosub::getOperands() {
    return label;
}

std::string Gosub::serialize() {

    TableEntry* tableEntry = SymbolTable::getFromTable(label);

    return "GoSub " + label + "(" + std::to_string(std::get<0>(tableEntry->entry)) + ")\n";
}