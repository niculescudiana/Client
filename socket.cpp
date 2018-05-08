#include "socket.h"
#include<stdlib.h>
#include<windows.h>
#include"ccommandhandler.h"

socket::socket(QObject *parent)
{

}

void socket::send(const char *data)
{
    msocket->write(data);
}

void socket::connected()
{
qDebug()<<"Connected";
}

void socket::disconnected()
{
qDebug()<<"Disconnected";
}

void socket:: bytesWritten(qint64 bytes)
{
qDebug()<<"we wrote: "<<bytes;
}

void socket::readyRead()
{
    qDebug()<<"Reading..."<<msocket->bytesAvailable();

        qDebug()<<"Reading...";
        QByteArray data =msocket->readAll();

        CCommandHandler* CommandHandler= new CCommandHandler();
        CommandHandler->createCommand(data);



        if(strcmp(data,"buzz")==0)
            qDebug()<< "Am primit buzz";
        if(strcmp(data,"login")==0)
            qDebug()<< "Am primit login";
        if(strcmp(data,"register")==0)
            qDebug()<<"Am primit register";

}

void socket::waitforreadyRead()
{
    msocket->waitForReadyRead(5000);
}

void socket::test()
{
msocket=new QTcpSocket();
connect(msocket,SIGNAL(connected()),this,SLOT(connected()));
connect(msocket,SIGNAL(disconnected()),this,SLOT(disconnected()));
connect(msocket,SIGNAL(readyRead()),this,SLOT(readyRead()));
connect(msocket,SIGNAL(bytesWritten(qint64)),this,SLOT(bytesWritten(qint64)));
connect(msocket,SIGNAL(send(const char*)),this,SLOT( send(const char*)));
qDebug()<<"Connecting...";
msocket->connectToHost("172.16.5.143",1234);
if(!msocket->waitForConnected(1000))
    qDebug()<<"Error: "<<msocket->errorString();
}
