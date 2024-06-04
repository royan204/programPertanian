#ifndef FINPUTREKAPDATAPRODUKSI_H
#define FINPUTREKAPDATAPRODUKSI_H

#include <QWidget>

namespace Ui {
class Finputrekapdataproduksi;
}

class Finputrekapdataproduksi : public QWidget
{
    Q_OBJECT

public:
    explicit Finputrekapdataproduksi(QWidget *parent = nullptr);
    ~Finputrekapdataproduksi();

private:
    Ui::Finputrekapdataproduksi *ui;
};

#endif // FINPUTREKAPDATAPRODUKSI_H
