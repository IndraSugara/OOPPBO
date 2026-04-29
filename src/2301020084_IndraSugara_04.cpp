#include <bits/stdc++.h>
#include <string>
using namespace std;

class Hewan{

    private:
        string nama;
        string warna;
        int panjang;

    public:
        void set_data (string nama_hewan, string warna_hewan, int panjang_hewan){
            nama = nama_hewan;
            warna = warna_hewan;
            panjang = panjang_hewan;
        }

        void get_data_hewan(){
            cout << "| " << nama << " | " << warna << " | " << panjang << " |" << endl;
        }
};

int main(){
    Hewan hewan[5];
    hewan[0].set_data("Kucing", "Putih", 50);
    hewan[1].set_data("Macan", "Kuning Belang", 150);
    hewan[2].set_data("Ikan", "Perak", 30);
    hewan[3].set_data("Ayam", "Hitam Belang", 40);
    hewan[4].set_data("Kelinci", "Abu-abu", 20);
    
    for(int i=0;i<=4;i++){
    hewan[i].get_data_hewan();
    }
    return 0;
}
