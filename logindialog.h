#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H
#include "socket.h"
#include <QDialog>
#include "registerdialog.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();
    const char *username, *password;
    const char *registerUsername,*registerPassword;
    int flag;

private slots:
    void on_RegisterPushButton_clicked();

    void on_pushButtonLogin_clicked();

    void on_pushButtonReset_clicked();

public:
    const char* getUsername(){return username;}
    const char* getPassword(){return password;}
    const char* getRegisterUsername(){return registerUsername;}
    const char* getRegisterPassword(){return registerPassword;}

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
