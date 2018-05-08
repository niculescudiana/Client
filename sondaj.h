#ifndef SONDAJ_H
#define SONDAJ_H

#include <QDialog>

namespace Ui {
class Sondaj;
}

class Sondaj : public QDialog
{
    Q_OBJECT


public:
    int flag;
    QString option;
    explicit Sondaj(QWidget *parent = 0);
    ~Sondaj();

private slots:
    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_pushButtonSubmit_clicked();

private:
    Ui::Sondaj *ui;
};

#endif // SONDAJ_H
