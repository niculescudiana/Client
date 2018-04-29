#include "mainwindow.h"
#include <QApplication>
#include "socket.h"
#include <QString>
#include<iostream>
#include "logindialog.h"
#include"cclient.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CClient Client;
    Client.startClient();



    return a.exec();
}
