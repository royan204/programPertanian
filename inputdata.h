#ifndef INPUTDATA_H
#define INPUTDATA_H
#include <QDate>
#include <QString>

class inputData
{
public:
    inputData();
};

class DataPetugas
{
public:
    DataPetugas();
    DataPetugas(QString kodepetugas, QString namapetugas, QString tempatlahir, QDate tanggallahir, QString agama, QString jeniskelamin, QString jabatan, QString alamat);

    void setKodePetugas(QString KODEPETUGAS);
    QString getKodePetugas() const;

    void setNamaPetugas(QString NAMAPETUGAS);
    QString getNamaPetugas() const;

    void setTempatLahir(QString TEMPATLAHIR);
    QString getTempatLahir() const;

    void setTanggalLahir(QDate TANGGALLAHIR);
    QDate getTanggalLahir() const;

    void setAgama(QString AGAMA);
    QString getAgama() const;

    void setJenisKelamin(QString JENISKELAMIN);
    QString getJenisKelamin() const;

    void setJabatan(QString JABATAN);
    QString getJabatan() const;

    void setAlamat(QString ALAMAT);
    QString getAlamat() const;

private:
    QString kodepetugas;
    QString namapetugas;
    QString tempatlahir;
    QDate tanggallahir;
    QString agama;
    QString jeniskelamin;
    QString jabatan;
    QString alamat;
};

class DataKomoditi
{
public:
    DataKomoditi();
    DataKomoditi(QString kodekomoditi, QString namakomoditi, QString jeniskomoditi, double hargakomoditi);

    void setKodeKomoditi(QString KODEKOMODITI);
    QString getKodeKomoditi() const;

    void setNamaKomoditi(QString NAMAKOMODITI);
    QString getNamaKomoditi() const;

    void setJenisKomoditi(QString JENISKOMODITI);
    QString getJenisKomoditi() const;

    void setHargaKomoditi(double HARGAKOMODITI);
    double getHargaKomoditi() const;

private:
    QString kodekomoditi;
    QString namakomoditi;
    QString jeniskomoditi;
    double hargakomoditi;
};

class DataProduksi
{
public:
    DataProduksi();
    DataProduksi(QString kodepetugas, QString namapetugas, QString kodekomoditi, QString kecamatan, double luaspanen, double produksi, QString jeniskomoditi, int tahun);

    void setKodePetugas(QString KODEPETUGAS);
    QString getKodePetugas() const;

    void setNamaPetugas(QString NAMAPETUGAS);
    QString getNamaPetugas() const;

    void setKodeKomoditi(QString KODEKOMODITI);
    QString getKodeKomoditi() const;

    void setKecamatan(QString KECAMATAN);
    QString getKecamatan() const;

    void setLuasPanen(double LUASPANEN);
    double getLuasPanen() const;

    void setProduksi(double PRODUKSI);
    double getProduksi() const;

    double getRataRata() const;
    double getJumlahProduksi() const;

    void setJenisKomoditi(QString JENISKOMODITI);
    QString getJenisKomoditi() const;

    void setTahun(int TAHUN);
    int getTahun() const;

private:
    QString kodepetugas;
    QString namapetugas;
    QString kodekomoditi;
    QString kecamatan;
    double luaspanen;
    double produksi;
    double ratarata;
    double jumlahproduksi;
    QString jeniskomoditi;
    int tahun;

    void updateRataRata();
    void updateJumlahProduksi();
};

class RekapJumlahProduksi
{
public:
    RekapJumlahProduksi();
    RekapJumlahProduksi(QString koderekap, QString namakomoditi, QString jeniskomoditi, QString satuan, double kuantum, double harga, int tahun);

    void setKodeRekap(QString KODEREKAP);
    QString getKodeRekap() const;

    void setNamaKomoditi(QString NAMAKOMODITI);
    QString getNamaKomoditi() const;

    void setJenisKomoditi(QString JENISKOMODITI);
    QString getJenisKomoditi() const;

    void setSatuan(QString SATUAN);
    QString getSatuan() const;

    void setKuantum(double KUANTUM);
    double getKuantum() const;

    void setHarga(double HARGA);
    double getHarga() const;

    void setTahun(int TAHUN);
    int getTahun() const;

private:
    QString koderekap;
    QString namakomoditi;
    QString jeniskomoditi;
    QString satuan;
    double kuantum;
    double harga;
    int tahun;
};

#endif // INPUTDATA_H
