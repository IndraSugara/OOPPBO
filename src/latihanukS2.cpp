#include <iostream>
using namespace std;

// Definisi kelas dasar Penghasilan
class Penghasilan {
protected:
    unsigned long int penghasilan; // Atribut untuk menyimpan jumlah penghasilan

public:
    // Konstruktor untuk menginisialisasi penghasilan
    Penghasilan(unsigned long int p) : penghasilan(p) {}

    // Method virtual untuk menghitung pajak
    virtual unsigned long int hitungPajak() = 0;

    // Method untuk mendapatkan jumlah penghasilan
    unsigned long int getJumlahPenghasilan() {
        return penghasilan;
    }
};

// Kelas turunan untuk penghasilan yang tidak kena pajak
class PenghasilanTidakKenaPajak : public Penghasilan {
public:
    // Konstruktor untuk menginisialisasi penghasilan
    PenghasilanTidakKenaPajak(unsigned long int p) : Penghasilan(p) {}

    // Implementasi method hitungPajak
    unsigned long int hitungPajak() override {
        return 0;
    }
};

// Kelas turunan untuk penghasilan yang kena pajak
class PenghasilanKenaPajak : public Penghasilan {
public:
    // Konstruktor untuk menginisialisasi penghasilan
    PenghasilanKenaPajak(unsigned long int p) : Penghasilan(p) {}

    // Implementasi method hitungPajak
    unsigned long int hitungPajak() override {
        if (penghasilan > 2000000) {
            return 0.05 * penghasilan;
        } else {
            return 0;
        }
    }
};

// Fungsi utama
int main() {
    int a,b;

    cout << "Masukkan gaji 1: "; cin >> a;
    cout << endl;
    cout << "Masukkan gaji 2: "; cin >> b;
    
    // Membuat objek PenghasilanKenaPajak dan PenghasilanTidakKenaPajak
    Penghasilan* penghasilan1 = new PenghasilanTidakKenaPajak(a); 
    Penghasilan* penghasilan2 = new PenghasilanKenaPajak(b); 

    // Menghitung dan menampilkan pajak dari penghasilan pertama
    unsigned long int pajak1 = penghasilan1->hitungPajak();
    unsigned long int total1 = penghasilan1->getJumlahPenghasilan() - pajak1;
    cout << "Penghasilan 1: " << penghasilan1->getJumlahPenghasilan() << endl;
    cout << "Pajak yang harus dibayar: " << pajak1 << endl;
    cout << "Total penghasilan setelah pajak: " << total1 << endl;
    cout << endl;

    // Menghitung dan menampilkan pajak dari penghasilan kedua
    unsigned long int pajak2 = penghasilan2->hitungPajak();
    unsigned long int total2 = penghasilan2->getJumlahPenghasilan() - pajak2;
    cout << "Penghasilan 2: " << penghasilan2->getJumlahPenghasilan() << endl;
    cout << "Pajak yang harus dibayar: " << pajak2 << endl;
    cout << "Total penghasilan setelah pajak: " << total2 << endl;

    // Membersihkan memori yang dialokasikan secara dinamis
    delete penghasilan1;
    delete penghasilan2;

    return 0;
}