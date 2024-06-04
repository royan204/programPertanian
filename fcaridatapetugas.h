#ifndef FCARIDATAPETUGAS_H
#define FCARIDATAPETUGAS_H

#include <QWidget>

namespace Ui {
class Fcaridatapetugas;
}

class Fcaridatapetugas : public QWidget
{
    Q_OBJECT

public:
    explicit Fcaridatapetugas(QWidget *parent = nullptr);
    ~Fcaridatapetugas();

private:
    Ui::Fcaridatapetugas *ui;
};

#endif // FCARIDATAPETUGAS_H
