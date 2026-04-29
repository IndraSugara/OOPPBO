#include <iostream>
using namespace std;

class Universitas{

    protected:
    string nama_univ;
    string alamat_univ;

    public:
    void set_data_univ(){
        cout << "masukkan nama Universitas: "; cin >> nama_univ;
        out << "masukkan alamat Universitas: "; cin >> alamat_univ;
    }
    public:
        void showdatauniv(){
        cout << "Nama Universitas: " << nama_univ<< endl;
        cout<< "Alamat: "<< alamat_univ<< endl;
    
    }

};
class Fakultas:public Universitas{
    string nama_fakultas;
    string gedung_fakultas;

    public:
    void set_data_fak(){
        cout << "masukkan nama Fakultas: "; cin >> nama_fakultas;
        out << "masukkan gedung Fakultas: "; cin >> gedung_fakultas;
    }
    public:
        void showdatafak(){
        cout << "Nama Fakultas: " << nama_fakultas << endl;
        cout<< "Gedung: "<< gedung_fakultas << endl;
}
};
class Jurusan:public Fakultas{
    public:

    string nama_jurusan;
    public:
    void set_data_jur(){
        cout << "masukkan nama Jurusan: "; cin >> nama_jurusan;
    }
    public:
        void showdatajur(){
        cout << "Nama Jurusan: " << nama_jurusan << endl;
}
};
class Hima:public Jurusan
