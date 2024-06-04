#include "programpertanian.h"
#include "ui_programpertanian.h"

programPertanian::programPertanian(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::programPertanian)
{
    ui->setupUi(this);

    finputdatapetugas = new Finputdatapetugas;
    finputdatakomoditi = new Finputdatakomoditi;
    finputdataproduksi = new Finputdataproduksi;
    finputrekapdataproduksi = new Finputrekapdataproduksi;

    fcaridatapetugas = new Fcaridatapetugas;
    fcaridatakomoditi = new Fcaridatakomoditi;
    fcarirekapdataproduksi = new Fcarirekapdataproduksi;


}

programPertanian::~programPertanian()
{
    delete ui;
}

void programPertanian::on_tbl_input_data_petugas_clicked()
{
    finputdatapetugas->show();
}


void programPertanian::on_tbl_input_data_komoditi_clicked()
{
    finputdatakomoditi->show();
}


void programPertanian::on_tbl_input_data_produksi_clicked()
{
    finputdataproduksi->show();
}


void programPertanian::on_tbl_input_rekap_clicked()
{
    finputrekapdataproduksi->show();
}


void programPertanian::on_tbl_cari_data_petugas_clicked()
{
    fcaridatapetugas->show();
}


void programPertanian::on_tbl_cari_data_komoditi_clicked()
{
    fcaridatakomoditi->show();
}


void programPertanian::on_tbl_cari_rekap_clicked()
{
    fcarirekapdataproduksi->show();
}

