#ifndef MENUDIALOG_H
#define MENUDIALOG_H

#include <QDialog>

namespace Ui {
class MenuDialog;
}

class MenuDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MenuDialog(QWidget *parent = 0);
    ~MenuDialog();
    int flag;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MenuDialog *ui;
};

#endif // MENUDIALOG_H
