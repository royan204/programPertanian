#include "fcaridatakomoditi.h"
#include "ui_fcaridatakomoditi.h"

Fcaridatakomoditi::Fcaridatakomoditi(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Fcaridatakomoditi)
{
    ui->setupUi(this);
}

Fcaridatakomoditi::~Fcaridatakomoditi()
{
    delete ui;
}
