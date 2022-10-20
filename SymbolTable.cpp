#include <iostream>
#include <string>
#include <tuple>
#include <map>
#include "SymbolTable.h"

SymbolTable* SymbolTable::table = nullptr;

SymbolTable::SymbolTable() {
}

SymbolTable* SymbolTable::getSymbolTable() {
    if(table == nullptr) {
        SymbolTable* s = new SymbolTable();
        SymbolTable::table = s;
    }

    return table;
}

void SymbolTable::insertTable(std::string key, TableEntry* data) {

    std::map<std::string, TableEntry*> dummy = table->map;
    

    table->map.insert(std::pair<std::string, TableEntry*>(key, data));

}

TableEntry* SymbolTable::getFromTable(std::string key) {

    auto iterator = table->map.find(key);

    return iterator->second;

}

std::map<std::string, TableEntry*> SymbolTable::getMap() {
    return table->map;
}