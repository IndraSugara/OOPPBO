#include <iostream>
#include <conio.h>
using namespace std;

class Ikan {
   
private:
    int idx = 0;
    string jenis_air[4];
    string nama_ikan[4];
    int panjang_ikan[4];
    int umur_panen[4];

public:
    void set_data(string jenis, string nama, int panjang, int umur) {
        jenis_air[idx] = jenis;
        nama_ikan[idx] = nama;
        panjang_ikan[idx] = panjang;
        umur_panen[idx] = umur;
        idx++;
    }

    void get_data(int id) {
        cout << "| " << nama_ikan[id] << " | " << jenis_air[id] << " | " << panjang_ikan[id] << " | " << umur_panen[id] << " |" << endl;
    }
    int get_ikan(){
        return idx;
    }
};

int main() {
    Ikan ikan;

    ikan.set_data("Air Asin", "Kakap", 50, 8);
    ikan.set_data("Air Tawar", "Nila", 20, 12);
    ikan.set_data("Air Tawar", "Lele", 30, 6);
    ikan.set_data("Air Asin", "Kerapu", 40, 9);

    for (int i = 0; i < ikan.get_ikan(); i++) {
        ikan.get_data(i);
    }
    return 0;
}