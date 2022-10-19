#ifndef INSTRUCTIONBUFFER_H_
#define INSTRUCTIONBUFFER_H_

#include <iostream>
#include <string>
#include "Stmt.h"

class InstructionBuffer {
    private:
        static InstructionBuffer* instance;
        int bufferLength;
        Stmt* buffer[100];
        InstructionBuffer();
    public:
        static int currentIndex ;
        static InstructionBuffer* getInstructionBuffer();
        static void addToBuffer(Stmt* statement);
        static Stmt* getStatementFromBuffer(int index);
};

#endif