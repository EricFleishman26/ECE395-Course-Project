#ifndef SYMBOLTABLE_H_
#define SYMBOLTABLE_H_

#include <iostream>
#include <map>
#include <memory>
#include <string>
#include "TableEntry.h"

class SymbolTable {
    private:
        SymbolTable(std::string key, TableEntry* data);
    public:
        static SymbolTable* table;
        static SymbolTable* getSymbolTable(std::string key, TableEntry* data);
};

#endif