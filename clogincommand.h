#ifndef CLOGINCOMMAND_H
#define CLOGINCOMMAND_H
#include "icommand.h"
#include "socket.h"

class CLoginCommand : public ICommand
{
public:
    CLoginCommand();
    ~CLoginCommand();
    void execute();
};

#endif // CLOGINCOMMAND_H
