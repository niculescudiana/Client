#include "registerdialog.h"
#include "ui_registerdialog.h"
#include <QMessageBox>

RegisterDialog::RegisterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

void RegisterDialog::on_pushButtonSubmit_clicked()
{
    QString usrName=ui->lineEditUsername->text();
    QString pwd=ui->lineEditPassword->text();
    QString pwd2=ui->lineEditPasswordRepeat->text();


    if(pwd.compare(pwd2)!=0)
    {

        QMessageBox::information(this,"Error","You entered two different passwords!");
        ui->lineEditUsername->setText("");
        ui->lineEditPassword->setText("");
        ui->lineEditPasswordRepeat->setText("");
    }

    else{

    char* cstr;
    cstr = new char [usrName.size()+1];
    sprintf(cstr,"%s",(const char *)usrName.toStdString().c_str());

    char* cstr2;
    cstr2 = new char [pwd.size()+1];
    sprintf(cstr2,"%s",(const char *)pwd.toStdString().c_str());

    user=cstr;
    passwd=cstr2;

    accept();
    }

}
