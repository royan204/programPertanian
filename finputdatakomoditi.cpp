#include "finputdatakomoditi.h"
#include "ui_finputdatakomoditi.h"

Finputdatakomoditi::Finputdatakomoditi(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Finputdatakomoditi)
{
    ui->setupUi(this);
}

Finputdatakomoditi::~Finputdatakomoditi()
{
    delete ui;
}
