#ifndef CVOTECOMMAND_H
#define CVOTECOMMAND_H
#include "icommand.h"

class CVoteCommand: public ICommand
{
public:
    CVoteCommand();
    ~CVoteCommand();
    void execute();
};

#endif // CVOTECOMMAND_H
