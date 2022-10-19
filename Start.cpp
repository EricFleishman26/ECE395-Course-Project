#include <iostream>
#include <string>
#include "Start.h"

Start::Start() {

}

void Start::serialize() {
    std::cout << "Start " << Stmt::numVariables << std::endl;
}