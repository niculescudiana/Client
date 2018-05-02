#ifndef COMMAND_FACTORY_H
#define COMMAND_FACTORY_H
#include "icommand.h"
#include <QDebug>
class CommandFactory
{
public:
    char command_name[10];

public:
    CommandFactory();
    ~CommandFactory();
    void read_command(const char* name);
    ICommand* create_command(const char *name);
};

#endif // COMMAND_FACTORY_H
