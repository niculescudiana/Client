#ifndef SOCKET_H
#define SOCKET_H

#include<QObject>
#include<QDebug>
#include<QTcpSocket>
#include<QAbstractSocket>

class socket:public QObject
{
    Q_OBJECT

private:
    QTcpSocket *msocket;

public:
    explicit socket(QObject *parent=0);
    void test();

public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();
    void send(const char* data);
    void waitforreadyRead();

};

#endif // SOCKET_H
