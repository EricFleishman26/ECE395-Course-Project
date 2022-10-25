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
    std::string serial = "PopArray " + operands + ", " + "(0)";
    return serial;
}