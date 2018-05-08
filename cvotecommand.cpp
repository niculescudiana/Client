#include "cvotecommand.h"
#include<iostream>
#include<QDebug>
#include"ballot1.h"

CVoteCommand::CVoteCommand(){}
CVoteCommand::~CVoteCommand(){}

void CVoteCommand::execute()
{
    qDebug() << "Vote Command created!";
    Ballot1* ballot=new Ballot1();

    ballot->exec();

    QString mesaj;
    mesaj.append("3;1;");
    mesaj.append(ballot->option);

    char* cstr;
    cstr = new char [mesaj.size()+1];
    sprintf(cstr,"%s",(const char *)mesaj.toStdString().c_str());
    message=cstr;
}
const char* CVoteCommand::returnMessage()
{
    return message;
}


