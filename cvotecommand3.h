#ifndef CVOTECOMMAND3_H
#define CVOTECOMMAND3_H
#include"icommand.h"

class CVoteCommand3:public ICommand
{
public:
    const char* message;
    CVoteCommand3();
    ~CVoteCommand3();
    void execute();
    const char* returnMessage();
};

#endif // CVOTECOMMAND3_H
