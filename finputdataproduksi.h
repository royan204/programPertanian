#ifndef FINPUTDATAPRODUKSI_H
#define FINPUTDATAPRODUKSI_H

#include <QWidget>

namespace Ui {
class Finputdataproduksi;
}

class Finputdataproduksi : public QWidget
{
    Q_OBJECT

public:
    explicit Finputdataproduksi(QWidget *parent = nullptr);
    ~Finputdataproduksi();

private:
    Ui::Finputdataproduksi *ui;
};

#endif // FINPUTDATAPRODUKSI_H
