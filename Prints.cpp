#include <iostream>
#include <string>
#include "Prints.h"

Prints::Prints(std::string statement) {
    opcode = "OP_PRINTS";
    
    std::string stringToStore = statement.substr(7, statement.length() - 7);

    sb = new StringBuffer(stringToStore);

}

std::string Prints::serialize() {
    std::string serial = "Prints " + sb->storedString + "\n";
    return serial;
}

std::string Prints::getOpcode() {
    return opcode;
}

std::string Prints::getOperands() {
    return "Unimp";
}