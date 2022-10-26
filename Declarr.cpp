#include <iostream>
#include <string>
#include <regex>
#include "Declarr.h"
#include "InstructionBuffer.h"
#include "TableEntry.h"
#include "SymbolTable.h"

Declarr::Declarr(std::string statement) {

    std::string operands = statement.substr(8, statement.length() - 8);
    
    std::string wordBreaker = "";

    for(auto i : operands) {

        if(i == ' ') {
            arrName = wordBreaker;
            wordBreaker = "";
        }
        else {
            wordBreaker = wordBreaker + i;
        }

    }

    arrLength = std::stoi(wordBreaker);

    if(SymbolTable::getFromTable(arrName) != nullptr) {
        if(Stmt::inSubroutine) {
            SymbolTable::remove(arrName);
            TableEntry* entry = new TableEntry(SymbolTable::varLocation, arrLength);
            SymbolTable::insertTable(arrName, entry);
            SymbolTable::varLocation += arrLength;
        }
        else {
            //Error for double declaring
        }
    }
    else {
        TableEntry* entry = new TableEntry(SymbolTable::varLocation, arrLength);
        SymbolTable::insertTable(arrName, entry);
        SymbolTable::varLocation += arrLength;
    }

    if(!Stmt::inSubroutine) {
        Stmt::numVariables += arrLength;
    }


}

std::string Declarr::getOpcode() {
    return "Ignore";
}

std::string Declarr::getOperands() {
    return "Ignore";
}

std::string Declarr::serialize() {
    return "";
}