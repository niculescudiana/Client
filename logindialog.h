#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H
#include "socket.h"
#include <QDialog>
//#include "registerdialog.h"

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

private slots:

    void on_pushButtonLogin_clicked();

    void on_pushButtonReset_clicked();

public:
    const char* getUsername(){return username;}
    const char* getPassword(){return password;}

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
