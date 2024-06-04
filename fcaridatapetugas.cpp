#include "fcaridatapetugas.h"
#include "ui_fcaridatapetugas.h"

Fcaridatapetugas::Fcaridatapetugas(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Fcaridatapetugas)
{
    ui->setupUi(this);
}

Fcaridatapetugas::~Fcaridatapetugas()
{
    delete ui;
}
