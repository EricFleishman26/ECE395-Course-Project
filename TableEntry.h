#ifndef TABLEENTRY_H_
#define TABLEENTRY_H_

#include <iostream>
#include <string>
#include <tuple>

class TableEntry {
    public:
        std::tuple <int, int> entry;
        TableEntry(int location, int length);
};


#endif