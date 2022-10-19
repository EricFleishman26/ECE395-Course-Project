#include <iostream>
#include <string>
#include "InstructionBuffer.h"

int InstructionBuffer::currentIndex = 0;
InstructionBuffer* InstructionBuffer::instance = nullptr;

InstructionBuffer::InstructionBuffer() {
}

InstructionBuffer* InstructionBuffer::getInstructionBuffer() {

    if(InstructionBuffer::instance == nullptr) {
        InstructionBuffer::instance = new InstructionBuffer();
    }

    return instance;
}

void InstructionBuffer::addToBuffer(Stmt* statement) {

    instance->buffer[currentIndex] = statement;
    currentIndex++;

}

Stmt* InstructionBuffer::getStatementFromBuffer(int index) {
    return instance->buffer[index];
}