/********************************************************************************
** Form generated from reading UI file 'ballotwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALLOTWINDOW_H
#define UI_BALLOTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BallotWindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BallotWindow)
    {
        if (BallotWindow->objectName().isEmpty())
            BallotWindow->setObjectName(QStringLiteral("BallotWindow"));
        BallotWindow->resize(800, 600);
        menubar = new QMenuBar(BallotWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        BallotWindow->setMenuBar(menubar);
        centralwidget = new QWidget(BallotWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        BallotWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(BallotWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        BallotWindow->setStatusBar(statusbar);

        retranslateUi(BallotWindow);

        QMetaObject::connectSlotsByName(BallotWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BallotWindow)
    {
        BallotWindow->setWindowTitle(QApplication::translate("BallotWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BallotWindow: public Ui_BallotWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALLOTWINDOW_H
