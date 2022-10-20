#include <iostream>
#include <string>
#include "Start.h"

Start::Start() {

}

void Start::serialize() {
    std::cout << "Start " << Stmt::numVariables << std::endl;
}

std::string Start::getOpcode() {
    return opcode;
}

std::string Start::getOperands() {
    return "Unimp";
}