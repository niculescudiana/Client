#-------------------------------------------------
#
# Project created by QtCreator 2018-04-24T23:42:45
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Client1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    socket.cpp \
    logindialog.cpp \
    clogincommand.cpp \
    command_factory.cpp \
    cvotecommand.cpp \
    icommand.cpp \
    registerdialog.cpp \
    cvote.cpp \
    cclient.cpp \
    ballotwindow.cpp

HEADERS += \
        mainwindow.h \
    socket.h \
    logindialog.h \
    clogincommand.h \
    command_factory.h \
    cvotecommand.h \
    icommand.h \
    registerdialog.h \
    cvote.h \
    cclient.h \
    ballotwindow.h

FORMS += \
        mainwindow.ui \
    logindialog.ui \
    registerdialog.ui \
    ballotwindow.ui