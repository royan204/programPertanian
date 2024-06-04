#include "finputrekapdataproduksi.h"
#include "ui_finputrekapdataproduksi.h"

Finputrekapdataproduksi::Finputrekapdataproduksi(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Finputrekapdataproduksi)
{
    ui->setupUi(this);
}

Finputrekapdataproduksi::~Finputrekapdataproduksi()
{
    delete ui;
}
