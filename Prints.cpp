#include <iostream>
#include <string>
#include "Prints.h"

Prints::Prints(std::string statement) {
    opcode = "OP_PRINTS";
    
    std::string stringToStore = statement.substr(7, statement.length() - 7);

    sb = new StringBuffer(stringToStore);

}

void Prints::serialize() {
    std::cout << "Prints " << sb->storedString << std::endl;
}