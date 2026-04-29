#include <iostream>
#include <string>
using namespace std;


class Karyawan {
protected:
    string nama;
    int gaji;

public:
    Karyawan(string nama, int gaji) : nama(nama), gaji(gaji) {}

    void tampilkanInformasi() {
        cout << "Nama: " << nama << endl;
        cout << "Gaji: " << gaji << endl;
    }
};


class PegawaiTetap : public Karyawan {
private:
    int tunjangan;

public:
    PegawaiTetap(string nama, int gaji, int tunjangan)
        : Karyawan(nama, gaji), tunjangan(tunjangan) {}

    void tampilkanInformasi() {
        Karyawan::tampilkanInformasi();
        cout << "Tunjangan: " << tunjangan << endl;
    }
};


class PegawaiKontrak : public Karyawan {
private:
    int durasiKontrak;  // dalam bulan

public:
    PegawaiKontrak(string nama, int gaji, int durasiKontrak)
        : Karyawan(nama, gaji), durasiKontrak(durasiKontrak) {}

    void tampilkanInformasi() {
        Karyawan::tampilkanInformasi();
        cout << "Durasi Kontrak: " << durasiKontrak << " bulan" << endl;
    }
};

int main() {
    PegawaiTetap pegawaiTetap("Widya", 5000000, 1000000);
    PegawaiKontrak pegawaiKontrak("Tito", 4000000, 12);

    cout << "Informasi Pegawai Tetap:" << endl;
    pegawaiTetap.tampilkanInformasi();

    cout << "\nInformasi Pegawai Kontrak:" << endl;
    pegawaiKontrak.tampilkanInformasi();

    return 0;
}