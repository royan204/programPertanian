#ifndef PROGRAMPERTANIAN_H
#define PROGRAMPERTANIAN_H

#include <QMainWindow>

#include <finputdatapetugas.h>
#include <finputdatakomoditi.h>
#include <finputdataproduksi.h>
#include <finputrekapdataproduksi.h>

#include <fcaridatapetugas.h>
#include <fcaridatakomoditi.h>
#include <fcarirekapdataproduksi.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class programPertanian;
}
QT_END_NAMESPACE

class programPertanian : public QMainWindow
{
    Q_OBJECT

public:
    programPertanian(QWidget *parent = nullptr);
    ~programPertanian();

private slots:
    void on_tbl_input_data_petugas_clicked();

    void on_tbl_input_data_komoditi_clicked();

    void on_tbl_input_data_produksi_clicked();

    void on_tbl_input_rekap_clicked();

    void on_tbl_cari_data_petugas_clicked();

    void on_tbl_cari_data_komoditi_clicked();

    void on_tbl_cari_rekap_clicked();

private:
    Ui::programPertanian *ui;

    Finputdatapetugas *finputdatapetugas;
    Finputdataproduksi *finputdataproduksi;
    Finputdatakomoditi *finputdatakomoditi;
    Finputrekapdataproduksi *finputrekapdataproduksi;

    Fcaridatapetugas *fcaridatapetugas;
    Fcaridatakomoditi *fcaridatakomoditi;
    Fcarirekapdataproduksi *fcarirekapdataproduksi;
};
#endif // PROGRAMPERTANIAN_H
