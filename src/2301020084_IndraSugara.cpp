
#include <iostream>
using namespace std;

class Universitas {
protected:
    string namaUniversitas;
public:
    Universitas(string nama) : namaUniversitas(nama) {}
    void displayUniversitas() {
        cout << "Nama Universitas: " << namaUniversitas << endl;
    }
};

class Fakultas : public Universitas {
protected:
    string namaFakultas;
public:
    Fakultas(string univ, string fak) : Universitas(univ), namaFakultas(fak) {}
    void displayFakultas() {
        cout << "Nama Fakultas: " << namaFakultas << endl;
        displayUniversitas();
    }
};

class Jurusan : public Fakultas {
protected:
    string namaJurusan;
public:
    Jurusan(string univ, string fak, string jur) : Fakultas(univ, fak), namaJurusan(jur) {}
    void displayJurusan() {
        cout << "Nama Jurusan: " << namaJurusan << endl;
        displayFakultas();
    }
};


class HIMA : public Jurusan {
protected:
    string namaHIMA;
public:
    HIMA(string univ, string fak, string jur, string hima) : Jurusan(univ, fak, jur), namaHIMA(hima) {}
    void displayHIMA() {
        cout << "Nama HIMA: " << namaHIMA << endl;
        displayJurusan();
    }
};

class BEM : public Universitas {
protected:
    string namaBEM;
public:
    BEM(string univ, string bem) : Universitas(univ), namaBEM(bem) {}
    void displayBEM() {
        cout << "Nama BEM: " << namaBEM << endl;
        displayUniversitas();
    }
};

int main() {
    HIMA hima("Universitas ABC", "Fakultas Teknik", "Teknik Informatika", "HIMA Teknik Informatika");
    BEM bem("Universitas ABC", "BEM Universitas ABC");

    hima.displayHIMA();
    cout << endl;
    bem.displayBEM();

    return 0;
}
