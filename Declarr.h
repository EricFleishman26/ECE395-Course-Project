#ifndef DECLARR_H_
#define DECLARR_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Declarr: public Stmt {
    public:
        std::string arrName;
        int arrLength;
        Declarr(std::string statement);
        std::string getOpcode();
        std::string getOperands();
        void serialize();
};

#endif