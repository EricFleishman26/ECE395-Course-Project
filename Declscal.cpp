#include <iostream>
#include <string>
#include "Declscal.h"
#include "InstructionBuffer.h"
#include "TableEntry.h"
#include "SymbolTable.h"

Declscal::Declscal(std::string statement) {

    scalName = statement.substr(9, statement.length() - 9);
    TableEntry* entry = new TableEntry(InstructionBuffer::currentIndex, 0);
    SymbolTable::insertTable(scalName, entry);

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

void Declscal::serialize() {
    //Do nothing
}