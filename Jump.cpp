#include <iostream>
#include <string>
#include <tuple>
#include "Jump.h"
#include "TableEntry.h"
#include "SymbolTable.h"

Jump::Jump(std::string statement) {

    opcode = "OP_JUMP";
    label = statement.substr(5, statement.length() - 5);
}

std::string Jump::serialize() {

    TableEntry* tableEntry = SymbolTable::getFromTable(label);

    return "Jump, " + std::to_string(std::get<0>(tableEntry->entry)) + "\n";

}

std::string Jump::getOpcode() {
    return opcode;
}

std::string Jump::getOperands() {
    return label;
}
