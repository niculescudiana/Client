
#include "cclient.h"
#include "logindialog.h"
#include <ctime>
#include "socket.h"
#include"command_factory.h"
#include"icommand.h"
#include"mainwindow.h"
#include "menudialog.h"

CClient::CClient()
{

}

int showmenu()
{
    MainWindow* menu=new MainWindow();
    menu->show();

    int nr=menu->flag;
    return nr;
}

void CClient::startClient()
{
mp_socket.test();
command_number=0;

MenuDialog* menu= new MenuDialog();
menu->exec();

command_number=menu->flag;

commandHandler();

/*

LoginDialog* login=new LoginDialog();

login->exec();

if(login->flag==1){
QString mesaj;
mesaj.append("1;");
mesaj.append(login->getUsername());
mesaj.append(";");
mesaj.append(login->getPassword());

char* cstr;
cstr = new char [mesaj.size()+1];
sprintf(cstr,"%s",(const char *)mesaj.toStdString().c_str());

mp_socket.send(cstr);
}

else
    if(login->flag==2){

       mp_socket.send("2;");
       mp_socket.send(login->getRegisterUsername());
       mp_socket.send(";");
       mp_socket.send(login->getRegisterPassword());
    }


mp_socket.waitforreadyRead();

*/

}


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

