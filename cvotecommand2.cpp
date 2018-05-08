#include "cvotecommand2.h"
#include<iostream>
#include<QDebug>
#include"sondaj.h"

CVoteCommand2::CVoteCommand2(){}
CVoteCommand2::~CVoteCommand2(){}

void CVoteCommand2::execute()
{
    qDebug() << "Vote Command created!";
    Sondaj* sondaj=new Sondaj();

    sondaj->exec();

    QString mesaj;
    mesaj.append("3;2;");
    mesaj.append(sondaj->option);

    char* cstr;
    cstr = new char [mesaj.size()+1];
    sprintf(cstr,"%s",(const char *)mesaj.toStdString().c_str());
    message=cstr;
}
const char* CVoteCommand2::returnMessage()
{
    return message;
}


