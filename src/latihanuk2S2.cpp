#include <iostream>
#include <iomanip>
using namespace std;

// Definisi kelas dasar Pembelian
class Pembelian {
protected:
    double jumlah; // Atribut untuk menyimpan jumlah pembelian

public:
    // Konstruktor untuk menginisialisasi jumlah
    Pembelian(double j) : jumlah(j) {}

    // Method virtual untuk mendapatkan jumlah pembelian
    virtual double getJumlah() {
        return jumlah;
    }

    // Method virtual untuk menghitung total pembelian (di-override di kelas turunan)
    virtual double hitungTotal() = 0;

    // Method untuk menghitung pajak jika total >= 500.000
    double hitungPajak(double total) {
        if (total >= 500000) {
            return 0.03 * total; // Pajak 3% dari total pembelian
        } else {
            return 0; // Tidak ada pajak jika total pembelian < 500.000
        }
    }
};

// Kelas turunan untuk pembelian makanan
class PembelianMakanan : public Pembelian {
public:
    // Konstruktor untuk menginisialisasi jumlah
    PembelianMakanan(double j) : Pembelian(j) {}

    // Implementasi method hitungTotal
    double hitungTotal() override {
        return getJumlah();
    }
};

// Kelas turunan untuk pembelian minuman
class PembelianMinuman : public Pembelian {
public:
    // Konstruktor untuk menginisialisasi jumlah
    PembelianMinuman(double j) : Pembelian(j) {}

    // Implementasi method hitungTotal
    double hitungTotal() override {
        return getJumlah();
    }
};

int main() {
    // Membuat objek PembelianMakanan dan PembelianMinuman
    Pembelian* makanan = new PembelianMakanan(300000); // Contoh pembelian makanan 300.000
    Pembelian* minuman = new PembelianMinuman(250000); // Contoh pembelian minuman 250.000

    // Mengatur output untuk menggunakan format fixed dan dua tempat desimal
    cout << fixed << setprecision(2);

    // Menghitung dan menampilkan total pembelian makanan
    double totalMakanan = makanan->hitungTotal();
    cout << "Jumlah pembelian makanan: " << totalMakanan << endl;

    // Menghitung dan menampilkan total pembelian minuman
    double totalMinuman = minuman->hitungTotal();
    cout << "Jumlah pembelian minuman: " << totalMinuman << endl;

    // Menghitung total pembelian
    double totalPembelian = totalMakanan + totalMinuman;
    cout << "Total pembelian: " << totalPembelian << endl;

    // Menghitung dan menampilkan pajak jika total pembelian >= 500.000
    double pajak = makanan->hitungPajak(totalPembelian);
    cout << "Pajak yang harus dibayar: " << pajak << endl;

    // Menampilkan total pembelian setelah pajak
    double totalSetelahPajak = totalPembelian + pajak;
    cout << "Total pembelian setelah pajak: " << totalSetelahPajak << endl;

    // Membersihkan memori yang dialokasikan secara dinamis
    delete makanan;
    delete minuman;

    return 0;
}