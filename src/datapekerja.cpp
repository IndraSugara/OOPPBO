# include "Deklarasi_projek.h"
# include "Defenisi_projek.cpp"
# include <iostream>


class Pengembang : public Karyawan {

    void Jobdesc () {
        cout << NamaKaryawan << " pada departmen " << NamaDept << " Sebagai pengembang perangkat lunak" << endl;;
    }

};

class Pemasaran : public Karyawan {

     void Jobdesc () {
        cout << NamaKaryawan << " pada departmen " << NamaDept << " Sebagai pemasar produk frozen food" << endl;;
    }


};

class Keuangan : public Karyawan {

     void Jobdesc () {
        cout << NamaKaryawan << " pada departmen " << NamaDept << " Sebagai pengatur keuangan perusahaan" << endl;;
    }


};

class Peneliti : public Karyawan {

    
     void Jobdesc () {
        cout << NamaKaryawan << " pada departmen " << NamaDept << " Sebagai peneliti teknologi pangan perusahaan" << endl;;
    }



};

int main () {

    Pengembang pengembang01;
    Pemasaran pemasaran01;
    Keuangan keuangan01;
    Peneliti peneliti01;

    peneliti01.SetNamaKaryawan("Jayadi");
    peneliti01.SetJabatan("Peneliti");
    peneliti01.SetGaji(2000000);
    peneliti01.SetUmur(25);
    peneliti01.SetLamaBekerja(3);
    peneliti01.SetJenisKelamin("Laki-laki");

    
    
}