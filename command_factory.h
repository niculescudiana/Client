#ifndef COMMAND_FACTORY_H
#define COMMAND_FACTORY_H
#include "icommand.h"
#include <QDebug>
class Command_Factory
{
public:
    char command_name[10];

public:
    Command_Factory();
    ~Command_Factory();
    void read_command(const char* name);
    ICommand* create_command(const char *name);
};

#endif // COMMAND_FACTORY_H
