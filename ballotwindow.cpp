#include "ballotwindow.h"
#include "ui_ballotwindow.h"

BallotWindow::BallotWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BallotWindow)
{
    ui->setupUi(this);
}

BallotWindow::~BallotWindow()
{
    delete ui;
}
