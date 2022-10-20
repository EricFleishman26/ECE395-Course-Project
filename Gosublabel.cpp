#include <iostream>
#include <string>
#include "Gosublabel.h"
#include "TableEntry.h"
#include "SymbolTable.h"
#include "InstructionBuffer.h"

Gosublabel::Gosublabel(std::string statement) {
    name = statement.substr(11, statement.length() - 11);
    TableEntry* entry = new TableEntry(InstructionBuffer::currentIndex + Stmt::numLabels, 0);
    SymbolTable::insertTable(name, entry);
}

std::string Gosublabel::getOpcode() {
    return "Ignore Gosublabel";
}

std::string Gosublabel::getOperands() {
    return name;
}

void Gosublabel::serialize() {
    //Do nothing
}