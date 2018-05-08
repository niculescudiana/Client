#include "cvotecommand3.h"
#include<iostream>
#include<QDebug>
#include"ballot2.h"

CVoteCommand3::CVoteCommand3(){}
CVoteCommand3::~CVoteCommand3(){}

void CVoteCommand3::execute()
{
    qDebug() << "Vote Command created!";
    Ballot2* ballot=new Ballot2();

    ballot->exec();

    QString mesaj;
    mesaj.append("3;3;");
    mesaj.append(ballot->option);

    char* cstr;
    cstr = new char [mesaj.size()+1];
    sprintf(cstr,"%s",(const char *)mesaj.toStdString().c_str());
    message=cstr;
}
const char* CVoteCommand3::returnMessage()
{
    return message;
}


