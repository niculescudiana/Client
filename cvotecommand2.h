#ifndef CVOTECOMMAND2_H
#define CVOTECOMMAND2_H
#include"icommand.h"


class CVoteCommand2:public ICommand
{
public:
    const char* message;
    CVoteCommand2();
    ~CVoteCommand2();
    void execute();
    const char* returnMessage();
};

#endif // CVOTECOMMAND2_H
