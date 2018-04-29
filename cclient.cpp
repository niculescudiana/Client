
#include "cclient.h"
#include "logindialog.h"
#include <ctime>
#include "socket.h"


CClient::CClient()
{

}

void CClient::startClient()
{
socket mp_socket;
mp_socket.test();


LoginDialog* login=new LoginDialog();

//if(login->exec()==QDialog::Accepted())


login->exec();

if(login->flag==1){
mp_socket.send("1;");
mp_socket.send(login->getUsername());
mp_socket.send(";");
mp_socket.send(login->getPassword());
}

else
    if(login->flag==2){

       mp_socket.send("2;");
       mp_socket.send(login->getRegisterUsername());
       mp_socket.send(";");
       mp_socket.send(login->getRegisterPassword());
    }

}
