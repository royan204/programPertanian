#include "fcarirekapdataproduksi.h"
#include "ui_fcarirekapdataproduksi.h"

Fcarirekapdataproduksi::Fcarirekapdataproduksi(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Fcarirekapdataproduksi)
{
    ui->setupUi(this);
}

Fcarirekapdataproduksi::~Fcarirekapdataproduksi()
{
    delete ui;
}
