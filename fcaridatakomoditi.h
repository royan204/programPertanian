#ifndef FCARIDATAKOMODITI_H
#define FCARIDATAKOMODITI_H

#include <QWidget>

namespace Ui {
class Fcaridatakomoditi;
}

class Fcaridatakomoditi : public QWidget
{
    Q_OBJECT

public:
    explicit Fcaridatakomoditi(QWidget *parent = nullptr);
    ~Fcaridatakomoditi();

private:
    Ui::Fcaridatakomoditi *ui;
};

#endif // FCARIDATAKOMODITI_H
