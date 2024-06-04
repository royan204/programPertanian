#include "finputdatapetugas.h"
#include "ui_finputdatapetugas.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDate>

Finputdatapetugas::Finputdatapetugas(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Finputdatapetugas)
{
    ui->setupUi(this);

    // Menyiapkan koneksi ke database
    Koneksi = QSqlDatabase::addDatabase("QODBC");
    Koneksi.setDatabaseName("db_pertanian");
    Koneksi.setUserName("root");
    Koneksi.setPassword("qwertyuiop");

    if (!Koneksi.open()){
        qDebug() << Koneksi.lastError().text();
        QMessageBox::critical(this, "Database Error", Koneksi.lastError().text());
    } else {
        qDebug() << "Database Terkoneksi";
    }
    // Menghubungkan sinyal tombol dengan slot
    connect(ui->btnSimpanDataPetugas, &QPushButton::clicked, this, &Finputdatapetugas::on_btnSimpanDataPetugas_clicked);
    connect(ui->btnEditDataPetugas, &QPushButton::clicked, this, &Finputdatapetugas::on_btnEditDataPetugas_clicked);
    connect(ui->btnHapusDataPetugas, &QPushButton::clicked, this, &Finputdatapetugas::on_btnHapusDataPetugas_clicked);
}

Finputdatapetugas::~Finputdatapetugas()
{
    delete ui;
}

void Finputdatapetugas::on_btnSimpanDataPetugas_clicked()
{
    ujiinputdatapetugas.setKodePetugas(ui->kodePetugasLineEdit->text());
    ujiinputdatapetugas.setNamaPetugas(ui->namaPetugasLineEdit->text());
    ujiinputdatapetugas.setTempatLahir(ui->tempatLahirLineEdit->text());
    ujiinputdatapetugas.setTanggalLahir(ui->tanggalLahirDateEdit->date());
    ujiinputdatapetugas.setAgama(ui->agamaLineEdit->text());
    ujiinputdatapetugas.setJenisKelamin(ui->jenisKelaminComboBox->currentText());
    ujiinputdatapetugas.setJabatan(ui->jabatanComboBox->currentText());
    ujiinputdatapetugas.setAlamat(ui->alamatLabel->text());

    QSqlQuery sql(Koneksi);
    sql.prepare("INSERT INTO data_petugas (kodepetugas, namapetugas, tempatlahir, tanggallahir, agama, jeniskelamin, jabatan, alamat) "
                "VALUES (:kodepetugas, :namapetugas, :tempatlahir, :tanggallahir, :agama, :jeniskelamin, :jabatan, :alamat)");

    sql.bindValue(":kodepetugas", ui->kodePetugasLineEdit->text());
    sql.bindValue(":namapetugas", ui->namaPetugasLineEdit->text());
    sql.bindValue(":tempatlahir", ui->tempatLahirLineEdit->text());
    sql.bindValue(":tanggallahir", ui->tanggalLahirDateEdit->date());
    sql.bindValue(":agama", ui->agamaLineEdit->text());
    sql.bindValue(":jeniskelamin", ui->jenisKelaminComboBox->currentText());
    sql.bindValue(":jabatan", ui->jabatanComboBox->currentText());
    sql.bindValue(":alamat", ui->alamatLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }

}


void Finputdatapetugas::on_btnEditDataPetugas_clicked()
{

}


void Finputdatapetugas::on_btnHapusDataPetugas_clicked()
{
    QString kodepetugas = ui->kodePetugasLineEdit->text();

    QSqlQuery sql(Koneksi);
    sql.prepare("DELETE FROM karyawan WHERE kodepetugas = :kodepetugas");
    sql.bindValue(":kodepetugas", kodepetugas);

    if (sql.exec()){
        qDebug() << "Data Berhasil Dihapus";
        QMessageBox::information(this, "Success", "Data berhasil dihapus.");
    } else {
        qDebug() << sql.lastError().text();
        QMessageBox::critical(this, "Database Error", "Gagal menghapus data: " + sql.lastError().text());
    }
}

