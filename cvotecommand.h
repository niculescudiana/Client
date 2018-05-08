#ifndef CVOTECOMMAND_H
#define CVOTECOMMAND_H
#include "icommand.h"

class CVoteCommand: public ICommand
{
public:
    const char* message;
    CVoteCommand();
    ~CVoteCommand();
    void execute();
    const char* returnMessage();
};

#endif // CVOTECOMMAND_H
