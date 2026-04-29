#include <iostream>

using namespace std;

struct Tuple {
    int nilai;
    string status;
};

int main() {
    Tuple hasilPemindaian;
    hasilPemindaian.nilai = 100;
    hasilPemindaian.status = "Lulus";

    cout << "Nilai: " << hasilPemindaian.nilai << endl;
    cout << "Status: " << hasilPemindaian.status << endl;

    return 0;
}
