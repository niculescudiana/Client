#ifndef BALLOT1_H
#define BALLOT1_H

#include <QDialog>

namespace Ui {
class Ballot1;
}

class Ballot1 : public QDialog
{
    Q_OBJECT

public:
    explicit Ballot1(QWidget *parent = 0);
    ~Ballot1();
    int flag;
    QString option;

private slots:
    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_pushButton_clicked();

private:
    Ui::Ballot1 *ui;
};

#endif // BALLOT1_H
