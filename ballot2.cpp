#include "ballot2.h"
#include "ui_ballot2.h"

Ballot2::Ballot2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ballot2)
{
    ui->setupUi(this);
    flag=0;
}

Ballot2::~Ballot2()
{
    delete ui;
}
