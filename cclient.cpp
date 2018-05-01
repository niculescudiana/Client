
#include "cclient.h"
#include "logindialog.h"
#include <ctime>
#include "socket.h"
//#include <Windows.h>

CClient::CClient()
{

}

void CClient::startClient()
{
mp_socket.test();

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


}


