#include "command_factory.h"
#include "CLoginCommand.h"
#include "CVoteCommand.h"
#include <iostream>

Command_Factory::Command_Factory(){}

Command_Factory::~Command_Factory(){}

ICommand* Command_Factory::create_command(const char* name)
{
    if (strcmp(name, "login") == 0)
        return new CLoginCommand;
    else
         if (strcmp(name, "vote") == 0)
                return new CVoteCommand;
}

void Command_Factory::read_command(const char* name) {
    if (strcmp(name, "login") == 0)
        create_command(name);
     else
          if (strcmp(name, "vote") == 0)
                create_command(name);
    else
              qDebug()<<"Comanda invalida!";
}
