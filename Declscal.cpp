#include <iostream>
#include <string>
#include "Declscal.h"
#include "InstructionBuffer.h"
#include "TableEntry.h"
#include "SymbolTable.h"

Declscal::Declscal(std::string statement) {

    scalName = statement.substr(9, statement.length() - 9);

    if(SymbolTable::getFromTable(scalName) != nullptr) {
        if(Stmt::inSubroutine) {
            SymbolTable::remove(scalName);
            TableEntry* entry = new TableEntry(SymbolTable::varLocation, 1);
            SymbolTable::insertTable(scalName, entry);
            SymbolTable::varLocation++;
        }
        else {
            //Error for double defining
            std::cout << "error: attempting to add variable with name " << scalName << " twice" << std::endl;
            exit(1);
        }
    }
    else {
        TableEntry* entry = new TableEntry(SymbolTable::varLocation, 1);
        SymbolTable::insertTable(scalName, entry);
        SymbolTable::varLocation++;
    }


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