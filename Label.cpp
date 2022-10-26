#include <iostream>
#include <string>
#include "Label.h"
#include "TableEntry.h"
#include "SymbolTable.h"
#include "InstructionBuffer.h"

Label::Label(std::string statement) {

    name = statement.substr(6, statement.length() - 6);

    if(SymbolTable::getFromTable(name) == nullptr) {
        TableEntry* entry = new TableEntry(InstructionBuffer::currentIndex, 0);
        SymbolTable::insertTable(name, entry);
    }
    else {
        std::cout << "error: attempting to add label with name " << name << " twice" << std::endl;
        exit(1);
    }

}

std::string Label::serialize() {
    return "";
}

std::string Label::getOpcode() {
    return "Ignore Label";
}

std::string Label::getOperands() {
    return "Unimp";
}