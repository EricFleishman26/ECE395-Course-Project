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

std::string Pushscal::serialize() {

    TableEntry* tableEntry = SymbolTable::getFromTable(operands);
    int location = std::get<0>(tableEntry->entry);

    std::string serial = "PushScalar " + operands + ", (" + std::to_string(location) + ")\n";
    return serial;
}