
#include "cclient.h"
#include "logindialog.h"
#include <ctime>
#include "socket.h"
#include"command_factory.h"
#include"icommand.h"
#include"mainwindow.h"
#include "menudialog.h"
#include "ccommandhandler.h"

CClient::CClient()
{

}

void CClient::startClient()
{
mp_socket.test();
command_number=0;

MenuDialog* menu= new MenuDialog();
menu->exec();

command_number=menu->flag;

CCommandHandler* CommandHandler= new CCommandHandler();
CommandHandler->createCommand(command_number);
const char* message= CommandHandler->getMessage();
QString msg=message;
int x=msg.split(";")[0].toInt();
if(x==1 || x==2){
username=msg.split(";")[1].toStdString();
password=msg.split(";")[2].toStdString();
}
mp_socket.send(message);

//commandHandler();

mp_socket.waitforreadyRead();

}

/*
void CClient::commandHandler()
{
    CommandFactory* CommandFact=new CommandFactory();
    if(command_number==1){
    ICommand* MyCommand=CommandFact->create_command("login");
    MyCommand->execute();
    const char* str;
    str=MyCommand->returnMessage();
        mp_socket.send(str);
    }
    else if(command_number==2)
    {
       ICommand* MyCommand=CommandFact->create_command("register");
       MyCommand->execute();
       const char* str;
       str=MyCommand->returnMessage();
       mp_socket.send(str);
    }
}

*/
