#ifndef FINPUTDATAKOMODITI_H
#define FINPUTDATAKOMODITI_H

#include <QWidget>

namespace Ui {
class Finputdatakomoditi;
}

class Finputdatakomoditi : public QWidget
{
    Q_OBJECT

public:
    explicit Finputdatakomoditi(QWidget *parent = nullptr);
    ~Finputdatakomoditi();

private:
    Ui::Finputdatakomoditi *ui;
};

#endif // FINPUTDATAKOMODITI_H
