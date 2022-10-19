#ifndef TABLEENTRY_H_
#define TABLEENTRY_H_

#include <iostream>
#include <string>
#include <tuple>

class TableEntry {
    public:
        TableEntry(int location, int length);
        tuple <int, int> entry;
};

#endif