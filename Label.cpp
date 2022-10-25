#include <iostream>
#include <string>
#include "Label.h"
#include "TableEntry.h"
#include "SymbolTable.h"
#include "InstructionBuffer.h"

Label::Label(std::string statement) {

    name = statement.substr(6, statement.length() - 6);
    TableEntry* entry = new TableEntry(InstructionBuffer::currentIndex, 0);
    SymbolTable::insertTable(name, entry);

}

void Label::serialize() {
    //Do nothing
}

std::string Label::getOpcode() {
    return "Ignore Label";
}

std::string Label::getOperands() {
    return "Unimp";
}