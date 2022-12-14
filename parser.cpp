#include <iostream>
#include <fstream>
#include <string>
#include <tuple>
#include <regex>
#include "Stmt.h"
#include "InstructionBuffer.h"
#include "TableEntry.h"
#include "SymbolTable.h"
#include "Pushi.h"
#include "Start.h"
#include "Exit.h"
#include "PrintTOS.h"
#include "Add.h"
#include "Prints.h"
#include "Div.h"
#include "Dup.h"
#include "Mul.h"
#include "Negate.h"
#include "Pop.h"
#include "Swap.h"
#include "Label.h"
#include "Jump.h"
#include "Gosub.h"
#include "Gosublabel.h"
#include "End.h"
#include "Return.h"
#include "Declscal.h"
#include "Pushscal.h"
#include "Popscal.h"
#include "Declarr.h"
#include "Pusharr.h"
#include "Poparr.h"
#include "Jumpzero.h"
#include "Jumpnzero.h"

int Stmt::numVariables = 0;
bool Stmt::inSubroutine = false;

void processStatement(std::string statement);

InstructionBuffer* buffer = InstructionBuffer::getInstructionBuffer();
SymbolTable* sbTable = SymbolTable::getSymbolTable();

int main(int argc, char ** argv) {

    std::ifstream inputFile(argv[1]);
    std::string data;
    std::string lastStatement;
    bool hasEndStatement = false;

    while(std::getline(inputFile, data)) {

        if(data == "end") {
            hasEndStatement = true;
        }

        processStatement(data);
        lastStatement = data;
    }

    if(!hasEndStatement) {
        std::cout << "error: no end statement in program" << std::endl;
        exit(1);
    }

    if(lastStatement != "end") {
        std::cout << "error: code encountered after an end statement" << std::endl;
        exit(1);
    }

    std::ofstream ofile;
    ofile.open(std::string(argv[1]) + ".pout");

    for(int i = 0; i < InstructionBuffer::currentIndex; i++) {
        Stmt* currStatement = InstructionBuffer::getStatementFromBuffer(i);

        ofile << currStatement->serialize();
    }

    inputFile.close();
    ofile.close();

    return 0;
}

void processStatement(std::string statement) {

    std::regex start("(start)(.*)");
    std::regex exit("(exit)(.*)");
    std::regex pushi("(pushi)(.*)");
    std::regex printtos("(printtos)(.*)");
    std::regex add("(add)(.*)");
    std::regex prints("(prints)(.*)");
    std::regex div("(div)(.*)");
    std::regex dup("(dup)(.*)");
    std::regex mul("(mul)(.*)");
    std::regex negate("(negate)(.*)");
    std::regex pop("(pop)(.*)");
    std::regex swap("(swap)(.*)");
    std::regex label("(label)(.*)");
    std::regex jump("(jump)(.*)");
    std::regex gosub("(gosub)(.*)");
    std::regex gosublabel("(gosublabel)(.*)");
    std::regex end("(end)(.*)");
    std::regex returnS("(return)(.*)");
    std::regex declscal("(declscal)(.*)");
    std::regex pushscal("(pushscal)(.*)");
    std::regex popscal("(popscal)(.*)");
    std::regex declarr("(declarr)(.*)");
    std::regex pusharr("(pusharr)(.*)");
    std::regex poparr("(poparr)(.*)");
    std::regex jumpzero("(jumpzero)(.*)");
    std::regex jumpnzero("(jumpnzero)(.*)");
    
    if(std::regex_match(statement, start)) {
        Stmt* stmt = new Start();
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, exit)) {
        Stmt* stmt = new Exit();
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, pushscal)) {
        Stmt* stmt = new Pushscal(statement);
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, pusharr)) {
        Stmt* stmt = new Pusharr(statement);
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, pushi)) {
        Stmt* stmt = new Pushi(statement);
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, printtos)) {
        Stmt* stmt = new PrintTOS();
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, add)) {
        Stmt* stmt = new Add();
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, prints)) {
        Stmt* stmt = new Prints(statement);
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, div)) {
        Stmt* stmt = new Div();
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, dup)) {
        Stmt* stmt = new Dup();
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, mul)) {
        Stmt* stmt = new Mul();
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, negate)) {
        Stmt* stmt = new Negate();
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, popscal)) {
        Stmt* stmt = new Popscal(statement);
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, poparr)) {
        Stmt* stmt = new Poparr(statement);
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, pop)) {
        Stmt* stmt = new Pop();
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, swap)) {
        Stmt* stmt = new Swap();
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, label)) {
        Stmt* stmt = new Label(statement);
    }
    else if(std::regex_match(statement, jumpnzero)) {
        Stmt* stmt = new Jumpnzero(statement);
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, jumpzero)) {
        Stmt* stmt = new Jumpzero(statement);
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, jump)) {
        Stmt* stmt = new Jump(statement);
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, gosublabel)) {
        Stmt* stmt = new Gosublabel(statement);
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, gosub)) {
        Stmt* stmt = new Gosub(statement);
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, end)) {
        Stmt* stmt = new End();
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, returnS)) {
        Stmt* stmt = new Return();
        InstructionBuffer::addToBuffer(stmt);
    }
    else if(std::regex_match(statement, declscal)) {
        Stmt* stmt = new Declscal(statement);
    }
    else if(std::regex_match(statement, declarr)) {
        Stmt* stmt = new Declarr(statement);
    }

}