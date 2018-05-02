#include "menudialog.h"
#include "ui_menudialog.h"

MenuDialog::MenuDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuDialog)
{
    ui->setupUi(this);
}

MenuDialog::~MenuDialog()
{
    delete ui;
}

void MenuDialog::on_pushButton_clicked()
{
    flag=1;
}

void MenuDialog::on_pushButton_2_clicked()
{
    flag=2;
}
