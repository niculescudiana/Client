#ifndef CLOGINCOMMAND_H
#define CLOGINCOMMAND_H
#include "icommand.h"
#include "socket.h"

class CLoginCommand : public ICommand
{
public:
    const char* message;
    CLoginCommand();
    ~CLoginCommand();
    void execute();
    const char* returnMessage();
};

#endif // CLOGINCOMMAND_H
