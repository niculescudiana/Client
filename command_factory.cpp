#include "command_factory.h"
#include "CLoginCommand.h"
#include "CVoteCommand.h"
#include "cvotecommand2.h"
#include "cvotecommand3.h"
#include "cregistercommand.h"
#include <iostream>

CommandFactory::CommandFactory(){}

CommandFactory::~CommandFactory(){}

ICommand *CommandFactory::create_command(const char* name)
{
    if (strcmp(name, "login") == 0)
        return new CLoginCommand();
    if(strcmp(name, "register")==0)
        return new CRegisterCommand();
    if(strcmp(name,"vote1")==0)
        return new CVoteCommand();
    if(strcmp(name,"sondaj")==0)
        return new CVoteCommand2();
    if(strcmp(name,"vote3")==0)
        return new CVoteCommand3();

}

void CommandFactory::read_command(const char* name) {
    if (strcmp(name, "login") == 0)
        create_command(name);
     else
          if (strcmp(name, "vote") == 0)
                create_command(name);
    else
              qDebug()<<"Comanda invalida!";
}
