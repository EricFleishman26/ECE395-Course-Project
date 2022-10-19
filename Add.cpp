#include <iostream>
#include <string>
#include "Add.h"

Add::Add() {
    opcode = "OP_ADD";
}

void Add::serialize() {
    std::cout << "Add" << std::endl;
}