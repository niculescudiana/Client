#include "socket.h"

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
qDebug()<<"Reading...";


QByteArray data =msocket->readAll();
//msocket->write(data);
qDebug()<<data;

if(strcmp(data,"buzz")==0)
    qDebug()<< "Am primit buzz";
if(strcmp(data,"login")==0)
    qDebug()<< "Am primit login";


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
msocket->connectToHost("192.168.0.106",1234);
if(!msocket->waitForConnected(1000))
    qDebug()<<"Error: "<<msocket->errorString();
//msocket->readyRead();
}
