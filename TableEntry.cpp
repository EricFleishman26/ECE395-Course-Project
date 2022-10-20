#include <iostream>
#include <string>
#include <tuple>
#include "TableEntry.h"


TableEntry::TableEntry(int location, int length) {

    std::get<0>(entry) = location;
    std::get<1>(entry) = length;

}