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

void Jump::serialize() {

    TableEntry* tableEntry = SymbolTable::getFromTable(label);

    std::cout << opcode << " " << std::get<0>(tableEntry->entry) << std::endl;

}

std::string Jump::getOpcode() {
    return opcode;
}

std::string Jump::getOperands() {
    return label;
}
