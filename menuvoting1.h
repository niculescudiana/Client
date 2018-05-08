#ifndef MENUVOTING1_H
#define MENUVOTING1_H

#include <QDialog>

namespace Ui {
class MenuVoting1;
}

class MenuVoting1 : public QDialog
{
    Q_OBJECT

public:
    explicit MenuVoting1(QWidget *parent = 0);
    ~MenuVoting1();
    int flag;

private slots:
    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

private:
    Ui::MenuVoting1 *ui;
};

#endif // MENUVOTING1_H
