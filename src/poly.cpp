#include <iostream>
using namespace std;

// Kelas Sofa
class Sofa {
public:
    void berat() const {
        cout << "Sofa beratnya 30 kg" << endl;
    }
};

// Kelas Kasur
class Kasur {
public:
    void berat() const {
        cout << "Kasur beratnya 50 kg" << endl;
    }
};

// Kelas Kulkas
class Kulkas {
public:
    void berat() const {
        cout << "Kulkas beratnya 70 kg" << endl;
    }
};

// Fungsi yang menerima objek Sofa dan mencetak beratnya
void cetakBerat(const Sofa &sofa) {
    sofa.berat();
}

// Fungsi yang menerima objek Kasur dan mencetak beratnya
void cetakBerat(const Kasur &kasur) {
    kasur.berat();
}

// Fungsi yang menerima objek Kulkas dan mencetak beratnya
void cetakBerat(const Kulkas &kulkas) {
    kulkas.berat();
}

int main() {
    // Membuat objek dari masing-masing kelas
    Sofa sofa;
    Kasur kasur;
    Kulkas kulkas;

    // Memanggil fungsi cetakBerat untuk masing-masing objek
    cetakBerat(sofa);
    cetakBerat(kasur);
    cetakBerat(kulkas);

    return 0;
}