#include "ballot1.h"
#include "ui_ballot1.h"

Ballot1::Ballot1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ballot1)
{
    ui->setupUi(this);
    flag=0;
}

Ballot1::~Ballot1()
{
    delete ui;
}

void Ballot1::on_checkBox_stateChanged(int arg1)
{
    if(arg1){
        option=ui->checkBox->text();
        ui->checkBox_2->setChecked(0);
        ui->checkBox_3->setChecked(0);
        ui->checkBox_4->setChecked(0);
    }
}

void Ballot1::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1){
        option=ui->checkBox_2->text();
        ui->checkBox->setChecked(0);
        ui->checkBox_3->setChecked(0);
        ui->checkBox_4->setChecked(0);
    }
}

void Ballot1::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1){
        option=ui->checkBox_3->text();
        ui->checkBox_2->setChecked(0);
        ui->checkBox->setChecked(0);
        ui->checkBox_4->setChecked(0);
    }
}

void Ballot1::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1){
        option=ui->checkBox_4->text();
        ui->checkBox_2->setChecked(0);
        ui->checkBox_3->setChecked(0);
        ui->checkBox->setChecked(0);
    }
}

void Ballot1::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked())
        flag=1;
    if(ui->checkBox_2->isChecked())
        flag=2;
    if(ui->checkBox_3->isChecked())
        flag=3;
    if(ui->checkBox_4->isChecked())
        flag=4;
    if(flag==0)
        this->exec();
    else
        this->accept();
}
