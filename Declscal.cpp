#include <iostream>
#include <string>
#include "Declscal.h"
#include "InstructionBuffer.h"
#include "TableEntry.h"
#include "SymbolTable.h"

Declscal::Declscal(std::string statement) {

    scalName = statement.substr(9, statement.length() - 9);

    TableEntry* entry = new TableEntry(SymbolTable::varLocation, 1);
    SymbolTable::insertTable(scalName, entry);
    SymbolTable::varLocation++;

    if(!Stmt::inSubroutine) {
        Stmt::numVariables++;
    }


}

std::string Declscal::getOpcode() {
    return "Ignore";
}

std::string Declscal::getOperands() {
    return "Ignore";
}

std::string Declscal::serialize() {
    return "";
}