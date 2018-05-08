#ifndef BALLOT2_H
#define BALLOT2_H

#include <QDialog>

namespace Ui {
class Ballot2;
}

class Ballot2 : public QDialog
{
    Q_OBJECT

public:
    explicit Ballot2(QWidget *parent = 0);
    ~Ballot2();
    int flag;
    QString option;

private:
    Ui::Ballot2 *ui;
};

#endif // BALLOT2_H
