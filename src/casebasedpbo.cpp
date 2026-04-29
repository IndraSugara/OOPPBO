#include<iostream>

using namespace std;

class Militer 
{
protected:

    string nama;
    int personel;

public:
    void set_data_mil (string namo, int person){

        nama = namo;
        personel = person;
    }
    void get_data_mil (){
        cout << "Nama instansi: " << nama << endl;
        cout << "Jumlah Personel: " << personel << endl;
    }
};

class AD : public Militer{

    private:
    int jumlah_kendaraanad;

    public:
    void set_data_ad(int jumlah){
        jumlah_kendaraanad=jumlah;
    }
    void get_data_ad(){
        cout << "Jumlah alutsista Angkatan Darat: " << jumlah_kendaraanad << endl;
    }
};

class AL : public Militer{
    private: int jumlah_kendaraanal;

    public:
    void set_data_al(int jumlah){

        jumlah_kendaraanal=jumlah;
    }
    void get_data_al(){
        cout << "Jumlah alutsista Angkatan Laut: " << jumlah_kendaraanal << endl;

    }
};

class AU : public Militer{
    private: int jumlah_kendaraanau;

    public:
    void set_data_au(int jumlah){

        jumlah_kendaraanau=jumlah;
    }
    void get_data_au(){
        cout << "Jumlah alutsista Angkatan Udara: " << jumlah_kendaraanau << endl;

    }
};

int main(){
    Militer m;
    m.set_data_mil("TNI", 20000);
    m.get_data_mil();

    AD ad;
    ad.set_data_ad(3000);
    ad.get_data_ad();

    AL al;
    al.set_data_al(2000);
    al.get_data_al();

    AU au;
    au.set_data_au(1000);
    au.get_data_au();

    return 0;
}

