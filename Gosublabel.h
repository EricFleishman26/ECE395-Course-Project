#ifndef GOSUBLABEL_H_
#define GOSUBLABEL_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Gosublabel: public Stmt {
    public:
        int dataMemorySize;
        std::string name;
        Gosublabel(std::string statement);
        std::string getOpcode();
        std::string getOperands();
        std::string serialize();
};

#endif