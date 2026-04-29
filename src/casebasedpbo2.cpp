#include <iostream>

using namespace std;


class KendaraanDarat {
public:
    void Berjalan() {
        cout << "Berjalan di Darat." << endl;
    }
};


class KendaraanAir {
public:
    void Selancar() {
        cout << "Berselancar di Air." << endl;
    }
};

class KendaraanAmphibi : public KendaraanDarat, public KendaraanAir {
public:
    void show() {
        Berjalan();
        Selancar();
    }
};

int main() {
    KendaraanAmphibi motor_amphibi;

    motor_amphibi.show();

    return 0;
}