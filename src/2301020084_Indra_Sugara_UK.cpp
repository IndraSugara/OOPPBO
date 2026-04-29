#include <iostream>
using namespace std;

class Gaji {
protected:
    int pokok;

public:
    virtual void SetGajiPokok(int jml) {
        pokok = jml;
    }
    double hitung(double pajak) {
        return pokok * (1.0 - pajak);
    }
};

class Karyawan : public Gaji {
public:
    void GetGajiGol(int gol) {
        if (gol == 3)
            cout << fixed<< "Gaji Bersih (potong pajak 5%): " << hitung(0.05) << endl;
        else if (gol == 4)
            cout << fixed << "Gaji bersih (potong pajak 15%): " << hitung(0.15) << endl;
    }
    virtual void Moto() {
        cout << "Setiap Kesulitan, pasti ada kemudahan" << endl;
    }
    virtual void Persembahan() {
        cout << "Terimakasih yang sedalam-dalamnya kepada asisten praktikum yang telah mendapingu" << endl;
    }
    virtual void Fasilitas() = 0;
};

class Lakilaki : public Karyawan {
public:
    void Fasilitas() override {
        cout << "Fasilitas Karyawan Laki laki" << endl;
        cout << "1. Jas" << endl;
        cout << "2. Celana Panjang" << endl;
        cout << "3. Kendaraan Operasional" << endl;
    }
};

class Perempuan : public Karyawan {
public:
    void Fasilitas() override {
        cout << "Fasilitas Karyawan Perempuan" << endl;
        cout << "1. Blazer" << endl;
        cout << "2. Rok" << endl;
        cout << "3. Kendaraan Operasional" << endl;
    }
};

int main() {
    Lakilaki pria;
    Perempuan wanita;

    Karyawan* karyawan = &pria;
	karyawan = &wanita;
	karyawan->SetGajiPokok(5000000);
    karyawan->GetGajiGol(3);
    karyawan->SetGajiPokok(4500000);
    karyawan->GetGajiGol(4);
	
    karyawan->Fasilitas();
    karyawan->Persembahan();

    karyawan = &pria;
    karyawan->Fasilitas();
    karyawan->Moto();

    return 0;
}
