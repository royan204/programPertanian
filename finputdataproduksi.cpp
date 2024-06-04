#include "finputdataproduksi.h"
#include "ui_finputdataproduksi.h"

Finputdataproduksi::Finputdataproduksi(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Finputdataproduksi)
{
    ui->setupUi(this);
}

Finputdataproduksi::~Finputdataproduksi()
{
    delete ui;
}
