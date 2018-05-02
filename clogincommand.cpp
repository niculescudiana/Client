#include "clogincommand.h"
#include<iostream>
#include"logindialog.h"

CLoginCommand::CLoginCommand(){}
CLoginCommand::~CLoginCommand(){}

void CLoginCommand::execute(){
    std::cout << "Login Command created!\n";
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
    message=cstr;

}
    else
        if(login->flag==2)
            message="register";

}

const char* CLoginCommand::returnMessage()
{
    return message;
}


