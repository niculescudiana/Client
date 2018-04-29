#include "clogincommand.h"
#include<iostream>

CLoginCommand::CLoginCommand(){}
CLoginCommand::~CLoginCommand(){}

void CLoginCommand::execute(){
    std::cout << "Login Command created!\n";
}
