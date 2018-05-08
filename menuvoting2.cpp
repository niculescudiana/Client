#include "menuvoting2.h"
#include "ui_menuvoting2.h"

MenuVoting2::MenuVoting2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuVoting2)
{
    ui->setupUi(this);
}

MenuVoting2::~MenuVoting2()
{
    delete ui;
}

void MenuVoting2::on_pushButton_clicked()
{
    flag=33;
}

void MenuVoting2::on_pushButton_2_clicked()
{
    flag=32;
}
