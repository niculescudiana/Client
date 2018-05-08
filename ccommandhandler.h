#ifndef CCOMMANDHANDLER_H
#define CCOMMANDHANDLER_H
#include "command_factory.h"

class CCommandHandler
{
    int command_number;
    const char* MessageToSend;
public:
    CCommandHandler();
    ~CCommandHandler();
    void createCommand(int cmd_nb);
    void createCommand(QByteArray message);
    const char* getMessage(){return MessageToSend;}
};

#endif // CCOMMANDHANDLER_H
