#include <iostream>
#include <string>
#include <tuple>
#include <map>
#include "SymbolTable.h"

SymbolTable* SymbolTable::table = nullptr;
int SymbolTable::varLocation = 0;

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
    table->map.insert(std::pair<std::string, TableEntry*>(key, data));
}

TableEntry* SymbolTable::getFromTable(std::string key) {

    auto iterator = table->map.find(key);

    if(iterator == table->map.end()) {
        return nullptr;
    }

    return iterator->second;

}

std::map<std::string, TableEntry*> SymbolTable::getMap() {
    return table->map;
}

void SymbolTable::remove(std::string key) {
    table->map.erase(key);
}