#ifndef STMT_H_
#define STMT_H_

#include <string>

class Stmt {
    public:
        static int numVariables;
        static bool inSubroutine;
        virtual void serialize() = 0;
        virtual std::string getOpcode() = 0;
        virtual std::string getOperands() = 0;
};

#endif