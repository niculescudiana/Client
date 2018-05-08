#ifndef MENUVOTING2_H
#define MENUVOTING2_H

#include <QDialog>

namespace Ui {
class MenuVoting2;
}

class MenuVoting2 : public QDialog
{
    Q_OBJECT

public:
    explicit MenuVoting2(QWidget *parent = 0);
    ~MenuVoting2();
    int flag;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MenuVoting2 *ui;
};

#endif // MENUVOTING2_H
