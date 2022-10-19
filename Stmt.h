#ifndef STMT_H_
#define STMT_H_

#include <string>

class Stmt {
    public:
        static int numVariables;
        virtual void serialize() = 0;
};

#endif