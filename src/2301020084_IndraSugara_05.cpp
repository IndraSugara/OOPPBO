#include <iostream>
using namespace std;

class Hewan{
    protected:
        string nama;
        string warna;
        int panjang;
};

class Ikan: public Hewan{
    private:
        string jenis_air;
        string jenis_kulit;
        
        public:
            void set_data(string nama_hewan, string warna_hewan, int panjang_hewan, string air, string kulit){
                nama = nama_hewan;
                warna = warna_hewan;
                panjang = panjang_hewan;
                jenis_air = air;
                jenis_kulit = kulit;
            }
            void get_data_ikan(){
                cout << "| " << nama << " | " << warna << " | " << panjang << " | " << jenis_air << " | " << jenis_kulit << " |" << endl;
            }
};

int main(){
    Ikan ikan;
    string nama[5]={"Kakap", "Lele", "Nila", "Sembilang", "Kerapu"};
    string warna[5]={"Silver", "Hitam", "Silver Kehitaman", "Hitam", "Hitam"};
    int panjang[5]={35,35,20,40,25};
    string air[5]={"Air Asin", "Air Tawar", "Air Tawar", "Air Asin", "Air Asin"};
    string kulit[5]={"Bersisik", "Tidak Bersisik", "Bersisik", "Tidak Bersisik", "Bersisik"};

    for (int i = 0; i < 5; i++)
    {
        ikan.set_data(nama[i], warna[i], panjang[i], air[i], kulit[i]);
        ikan.get_data_ikan();
    }

    return 0;
}