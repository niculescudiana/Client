#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int flag;

private slots:
    void on_pushButtonLogin_clicked();

    void on_pushButtonRegister_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
