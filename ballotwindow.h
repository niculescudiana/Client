#ifndef BALLOTWINDOW_H
#define BALLOTWINDOW_H

#include <QMainWindow>

namespace Ui {
class BallotWindow;
}

class BallotWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BallotWindow(QWidget *parent = 0);
    ~BallotWindow();

private:
    Ui::BallotWindow *ui;
};

#endif // BALLOTWINDOW_H
