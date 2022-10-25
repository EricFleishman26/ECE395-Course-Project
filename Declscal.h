#ifndef DECLSCAL_H_
#define DECLSCAL_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class Declscal: public Stmt {
    public:
        std::string scalName;
        Declscal(std::string statement);
        std::string getOpcode();
        std::string getOperands();
        void serialize();
};

#endif