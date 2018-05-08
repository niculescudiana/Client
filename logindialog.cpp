#include "logindialog.h"
#include "ui_logindialog.h"
#include "socket.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

}

LoginDialog::~LoginDialog()
{
    delete ui;
}


void LoginDialog::on_pushButtonLogin_clicked()
{
    QString usrName=ui->lineEditUsername->text();
    QString pwd=ui->lineEditPassword->text();

    char* cstr;
    cstr = new char [usrName.size()+1];
    sprintf(cstr,"%s",(const char *)usrName.toStdString().c_str());

    char* cstr2;
    cstr2 = new char [pwd.size()+1];
    sprintf(cstr2,"%s",(const char *)pwd.toStdString().c_str());

    username=cstr;
    password=cstr2;


   this->hide();

}

void LoginDialog::on_pushButtonReset_clicked()
{
    ui->lineEditUsername->setText("");
    ui->lineEditPassword->setText("");
}
