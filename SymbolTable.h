#ifndef SYMBOLTABLE_H_
#define SYMBOLTABLE_H_

#include <iostream>
#include <string>
#include <tuple>
#include <map>
#include "TableEntry.h"

class SymbolTable {
    private:
        static SymbolTable* table;
        std::map<std::string, TableEntry*> map;
        SymbolTable();
    public:
        static SymbolTable* getSymbolTable();
        static void insertTable(std::string key, TableEntry* data);
        static int varLocation;
        static TableEntry* getFromTable(std::string key);
        std::map<std::string, TableEntry*> getMap();
};

#endif
