#ifndef GOSUBLABEL_H_
#define GOSUBLABEL_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Gosublabel: public Stmt {
    public:
        std::string name;
        Gosublabel(std::string statement);
        void serialize();
        std::string getOpcode();
        std::string getOperands();
};

#endif