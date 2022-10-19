#include <iostream>
#include <string>
#include <map>
#include <memory>
#include "SymbolTable.h"

SymbolTable::SymbolTable(std::string key, TableEntry* data) {

    definedMap = new std::map<std::string, TableEntry*>();

}