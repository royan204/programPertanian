#include "inputdata.h"

inputData::inputData() {}

// Implementation for DataPetugas
DataPetugas::DataPetugas() {}

DataPetugas::DataPetugas(QString kodepetugas, QString namapetugas, QString tempatlahir, QDate tanggallahir, QString agama, QString jeniskelamin, QString jabatan, QString alamat) {
    this->kodepetugas = kodepetugas;
    this->namapetugas = namapetugas;
    this->tempatlahir = tempatlahir;
    this->tanggallahir = tanggallahir;
    this->agama = agama;
    this->jeniskelamin = jeniskelamin;
    this->jabatan = jabatan;
    this->alamat = alamat;
}

void DataPetugas::setKodePetugas(QString KODEPETUGAS) {
    this->kodepetugas = KODEPETUGAS;
}

QString DataPetugas::getKodePetugas() const {
    return this->kodepetugas;
}

void DataPetugas::setNamaPetugas(QString NAMAPETUGAS) {
    this->namapetugas = NAMAPETUGAS;
}

QString DataPetugas::getNamaPetugas() const {
    return this->namapetugas;
}

void DataPetugas::setTempatLahir(QString TEMPATLAHIR) {
    this->tempatlahir = TEMPATLAHIR;
}

QString DataPetugas::getTempatLahir() const {
    return this->tempatlahir;
}

void DataPetugas::setTanggalLahir(QDate TANGGALLAHIR) {
    this->tanggallahir = TANGGALLAHIR;
}

QDate DataPetugas::getTanggalLahir() const {
    return this->tanggallahir;
}

void DataPetugas::setAgama(QString AGAMA) {
    this->agama = AGAMA;
}

QString DataPetugas::getAgama() const {
    return this->agama;
}

void DataPetugas::setJenisKelamin(QString JENISKELAMIN) {
    this->jeniskelamin = JENISKELAMIN;
}

QString DataPetugas::getJenisKelamin() const {
    return this->jeniskelamin;
}

void DataPetugas::setJabatan(QString JABATAN) {
    this->jabatan = JABATAN;
}

QString DataPetugas::getJabatan() const {
    return this->jabatan;
}

void DataPetugas::setAlamat(QString ALAMAT) {
    this->alamat = ALAMAT;
}

QString DataPetugas::getAlamat() const {
    return this->alamat;
}

// Implementation for DataKomoditi
DataKomoditi::DataKomoditi() {}

DataKomoditi::DataKomoditi(QString kodekomoditi, QString namakomoditi, QString jeniskomoditi, double hargakomoditi) {
    this->kodekomoditi = kodekomoditi;
    this->namakomoditi = namakomoditi;
    this->jeniskomoditi = jeniskomoditi;
    this->hargakomoditi = hargakomoditi;
}

void DataKomoditi::setKodeKomoditi(QString KODEKOMODITI) {
    this->kodekomoditi = KODEKOMODITI;
}

QString DataKomoditi::getKodeKomoditi() const {
    return this->kodekomoditi;
}

void DataKomoditi::setNamaKomoditi(QString NAMAKOMODITI) {
    this->namakomoditi = NAMAKOMODITI;
}

QString DataKomoditi::getNamaKomoditi() const {
    return this->namakomoditi;
}

void DataKomoditi::setJenisKomoditi(QString JENISKOMODITI) {
    this->jeniskomoditi = JENISKOMODITI;
}

QString DataKomoditi::getJenisKomoditi() const {
    return this->jeniskomoditi;
}

void DataKomoditi::setHargaKomoditi(double HARGAKOMODITI) {
    this->hargakomoditi = HARGAKOMODITI;
}

double DataKomoditi::getHargaKomoditi() const {
    return this->hargakomoditi;
}

// Implementation for DataProduksi
DataProduksi::DataProduksi() {}

DataProduksi::DataProduksi(QString kodepetugas, QString namapetugas, QString kodekomoditi, QString kecamatan, double luaspanen, double produksi, QString jeniskomoditi, int tahun) {
    this->kodepetugas = kodepetugas;
    this->namapetugas = namapetugas;
    this->kodekomoditi = kodekomoditi;
    this->kecamatan = kecamatan;
    this->luaspanen = luaspanen;
    this->produksi = produksi;
    this->jeniskomoditi = jeniskomoditi;
    this->tahun = tahun;
    updateRataRata();
    updateJumlahProduksi();
}

void DataProduksi::setKodePetugas(QString KODEPETUGAS) {
    this->kodepetugas = KODEPETUGAS;
}

QString DataProduksi::getKodePetugas() const {
    return this->kodepetugas;
}

void DataProduksi::setNamaPetugas(QString NAMAPETUGAS) {
    this->namapetugas = NAMAPETUGAS;
}

QString DataProduksi::getNamaPetugas() const {
    return this->namapetugas;
}

void DataProduksi::setKodeKomoditi(QString KODEKOMODITI) {
    this->kodekomoditi = KODEKOMODITI;
}

QString DataProduksi::getKodeKomoditi() const {
    return this->kodekomoditi;
}

void DataProduksi::setKecamatan(QString KECAMATAN) {
    this->kecamatan = KECAMATAN;
}

QString DataProduksi::getKecamatan() const {
    return this->kecamatan;
}

void DataProduksi::setLuasPanen(double LUASPANEN) {
    this->luaspanen = LUASPANEN;
    updateRataRata();
    updateJumlahProduksi();
}

double DataProduksi::getLuasPanen() const {
    return this->luaspanen;
}

void DataProduksi::setProduksi(double PRODUKSI) {
    this->produksi = PRODUKSI;
    updateRataRata();
    updateJumlahProduksi();
}

double DataProduksi::getProduksi() const {
    return this->produksi;
}

double DataProduksi::getRataRata() const {
    return this->ratarata;
}

double DataProduksi::getJumlahProduksi() const {
    return this->jumlahproduksi;
}

void DataProduksi::setJenisKomoditi(QString JENISKOMODITI) {
    this->jeniskomoditi = JENISKOMODITI;
}

QString DataProduksi::getJenisKomoditi() const {
    return this->jeniskomoditi;
}

void DataProduksi::setTahun(int TAHUN) {
    this->tahun = TAHUN;
}

int DataProduksi::getTahun() const {
    return this->tahun;
}

void DataProduksi::updateRataRata() {
    if (luaspanen != 0) {
        this->ratarata = produksi / luaspanen;
    } else {
        this->ratarata = 0;
    }
}

void DataProduksi::updateJumlahProduksi() {
    this->jumlahproduksi = produksi * luaspanen;
}

// Implementation for RekapJumlahProduksi
RekapJumlahProduksi::RekapJumlahProduksi() {}

RekapJumlahProduksi::RekapJumlahProduksi(QString koderekap, QString namakomoditi, QString jeniskomoditi, QString satuan, double kuantum, double harga, int tahun) {
    this->koderekap = koderekap;
    this->namakomoditi = namakomoditi;
    this->jeniskomoditi = jeniskomoditi;
    this->satuan = satuan;
    this->kuantum = kuantum;
    this->harga = harga;
    this->tahun = tahun;
}

void RekapJumlahProduksi::setKodeRekap(QString KODEREKAP) {
    this->koderekap = KODEREKAP;
}

QString RekapJumlahProduksi::getKodeRekap() const {
    return this->koderekap;
}

void RekapJumlahProduksi::setNamaKomoditi(QString NAMAKOMODITI) {
    this->namakomoditi = NAMAKOMODITI;
}

QString RekapJumlahProduksi::getNamaKomoditi() const {
    return this->namakomoditi;
}

void RekapJumlahProduksi::setJenisKomoditi(QString JENISKOMODITI) {
    this->jeniskomoditi = JENISKOMODITI;
}

QString RekapJumlahProduksi::getJenisKomoditi() const {
    return this->jeniskomoditi;
}

void RekapJumlahProduksi::setSatuan(QString SATUAN) {
    this->satuan = SATUAN;
}

QString RekapJumlahProduksi::getSatuan() const {
    return this->satuan;
}

void RekapJumlahProduksi::setKuantum(double KUANTUM){
    this->kuantum = KUANTUM;
}

double RekapJumlahProduksi::getKuantum() const {
    return this->kuantum;
}

void RekapJumlahProduksi::setHarga(double HARGA){
    this->harga = HARGA;
}

double RekapJumlahProduksi::getHarga() const {
    return this->harga;
}

void RekapJumlahProduksi::setTahun(int TAHUN){
    this->tahun = TAHUN;
}

int RekapJumlahProduksi::getTahun() const {
    return this->tahun;
}
