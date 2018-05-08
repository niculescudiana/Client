#include "menuvoting1.h"
#include "ui_menuvoting1.h"

MenuVoting1::MenuVoting1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuVoting1)
{
    ui->setupUi(this);
}

MenuVoting1::~MenuVoting1()
{
    delete ui;
}

void MenuVoting1::on_pushButton1_clicked()
{
    flag=31;
}

void MenuVoting1::on_pushButton2_clicked()
{
    flag=32;
}
