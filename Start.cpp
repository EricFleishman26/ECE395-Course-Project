#include <iostream>
#include <string>
#include "Start.h"

Start::Start() {

}

std::string Start::serialize() {
    std::string serial = "Start " + std::to_string(Stmt::numVariables) + "\n";
    return serial;
}

std::string Start::getOpcode() {
    return opcode;
}

std::string Start::getOperands() {
    return "Unimp";
}