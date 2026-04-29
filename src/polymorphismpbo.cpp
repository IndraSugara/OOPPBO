#include <iostream>
using namespace std;

class Kendaraan {
public:
    virtual void bergerak() {
        cout << "\nKendaraan dapat bergerak" << endl;
    }
};

class Mobil : public Kendaraan {
public:
    void bergerak() {
        cout << "Mobil berjalan di darat" << endl;
    }
};

class Kapal : public Kendaraan {
public:
    void bergerak() {
        cout << "Kapal berlayar di air" << endl;
    }
};

class Pesawat : public Kendaraan {
public:
    void bergerak() {
        cout << "Pesawat terbang di udara" << endl;
    }
};

int main() {
    Pesawat p;
    Mobil m;
    Kapal k;
    Kendaraan K;

    Kendaraan *k1 = &p;
    Kendaraan *k2 = &m;
    Kendaraan *k3 = &k;
    Kendaraan *k4 = &K;

    k4->bergerak();
    k1->bergerak();
    k2->bergerak();
    k3->bergerak();

    return 0;
}
