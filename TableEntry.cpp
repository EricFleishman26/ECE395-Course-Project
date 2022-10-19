#include <iostream>
#include <string>
#include "TableEntry.h"

TableEntry::TableEntry(int location, int length) {
    tuple <int, int> temp(location, length);
    entry = temp;
}
