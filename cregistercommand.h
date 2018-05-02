#ifndef CREGISTERCOMMAND_H
#define CREGISTERCOMMAND_H
#include "icommand.h"

class CRegisterCommand:public ICommand
{
public:
    const char* message;
    CRegisterCommand();
    ~CRegisterCommand();
    void execute();
    const char* returnMessage();
};

#endif // CREGISTERCOMMAND_H
