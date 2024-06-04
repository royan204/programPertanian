#ifndef FCARIREKAPDATAPRODUKSI_H
#define FCARIREKAPDATAPRODUKSI_H

#include <QWidget>

namespace Ui {
class Fcarirekapdataproduksi;
}

class Fcarirekapdataproduksi : public QWidget
{
    Q_OBJECT

public:
    explicit Fcarirekapdataproduksi(QWidget *parent = nullptr);
    ~Fcarirekapdataproduksi();

private:
    Ui::Fcarirekapdataproduksi *ui;
};

#endif // FCARIREKAPDATAPRODUKSI_H
