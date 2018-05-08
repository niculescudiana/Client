#include "ccommandhandler.h"
#include"menuvoting1.h"
#include"menuvoting2.h"

CCommandHandler::CCommandHandler(){}
CCommandHandler::~CCommandHandler(){}

void CCommandHandler::createCommand(QByteArray message){

    QString msg=message;
    int x=msg.split(";")[0].toInt();
    if(x==1)
        createCommand(1);
    if(x==2)
        createCommand(2);

    if(x==3){
        int y=msg.split(";")[1].toInt();
        if(y==1){
            MenuVoting1* vote1=new MenuVoting1();
            vote1->exec();
            int cmd_nb=vote1->flag;
            createCommand(cmd_nb);

        }
         if(y==2) {
            MenuVoting2* vote2=new MenuVoting2();
            vote2->exec();
            int cmd_nb=vote2->flag;
            createCommand(cmd_nb);

        }
            }

}

void CCommandHandler::createCommand(int cmd_nb)
{
    command_number=cmd_nb;
    CommandFactory* CommandFact=new CommandFactory();
    if(command_number==1)
    {
        ICommand* MyCommand=CommandFact->create_command("login");
        MyCommand->execute();
        //const char* str;
        MessageToSend=MyCommand->returnMessage();
            //mp_socket.send(str);
    }
    else if(command_number==2)
    {
       ICommand* MyCommand=CommandFact->create_command("register");
       MyCommand->execute();
       //const char* str;
       MessageToSend=MyCommand->returnMessage();
       //mp_socket.send(str);
    }
    else if(command_number==31)
    {
        ICommand* MyCommand=CommandFact->create_command("vote1");
        MyCommand->execute();
         MessageToSend=MyCommand->returnMessage();

    }
    else if(command_number==32)
    {
        ICommand* MyCommand= CommandFact->create_command("sondaj");
        MyCommand->execute();
        MessageToSend=MyCommand->returnMessage();
    }
    else if(command_number==33)
    {
        ICommand* MyCommand= CommandFact->create_command("vote2");
        MyCommand->execute();
        MessageToSend=MyCommand->returnMessage();
    }
}
