#include "command_factory.h"
#include "CLoginCommand.h"
#include "CVoteCommand.h"
#include "cregistercommand.h"
#include <iostream>

CommandFactory::CommandFactory(){}

CommandFactory::~CommandFactory(){}

ICommand *CommandFactory::create_command(const char* name)
{
    if (strcmp(name, "login") == 0)
        return new CLoginCommand();
   // else
     //    if (strcmp(name, "vote") == 0)
       //         return new CVoteCommand();
    if(strcmp(name, "register")==0)
        return new CRegisterCommand();
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
