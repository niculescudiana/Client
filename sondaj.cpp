#include "sondaj.h"
#include "ui_sondaj.h"

Sondaj::Sondaj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sondaj)
{
    ui->setupUi(this);
    flag=0;
}

Sondaj::~Sondaj()
{
    delete ui;
}

void Sondaj::on_checkBox_stateChanged(int arg1)
{
    if(arg1){
        option=ui->checkBox->text();
        ui->checkBox_2->setChecked(0);
    }
}

void Sondaj::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1){
        option=ui->checkBox_2->text();
        ui->checkBox->setChecked(0);
    }
}

void Sondaj::on_pushButtonSubmit_clicked()
{
    if(ui->checkBox->isChecked())
        flag=1;
    if(ui->checkBox_2->isChecked())
        flag=2;
    if(flag==0)
        this->exec();
    else
        this->accept();
}
