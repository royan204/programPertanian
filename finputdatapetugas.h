#ifndef FINPUTDATAPETUGAS_H
#define FINPUTDATAPETUGAS_H

#include <inputdata.h>
#include <QWidget>
#include <QtSql>
#include <inputdata.h>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

namespace Ui {
class Finputdatapetugas;
}

class Finputdatapetugas : public QWidget
{
    Q_OBJECT

public:
    explicit Finputdatapetugas(QWidget *parent = nullptr);
    ~Finputdatapetugas();

private slots:
    void on_btnSimpanDataPetugas_clicked();

    void on_btnEditDataPetugas_clicked();

    void on_btnHapusDataPetugas_clicked();

private:
    Ui::Finputdatapetugas *ui;
    DataPetugas ujiinputdatapetugas;
    QSqlDatabase Koneksi;
};

#endif // FINPUTDATAPETUGAS_H
