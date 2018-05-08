#include "clogincommand.h"
#include<iostream>
#include"logindialog.h"
#include<QDebug>

CLoginCommand::CLoginCommand(){}
CLoginCommand::~CLoginCommand(){}

void CLoginCommand::execute(){
    qDebug() << "Login Command created!\n";
    LoginDialog* login=new LoginDialog();

    login->exec();


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

const char* CLoginCommand::returnMessage()
{
    return message;
}


