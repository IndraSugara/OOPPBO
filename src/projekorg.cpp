#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Masyarakat{
    public:
        string nama;
        string alamat;
        string status;
        int umur;

        Masyarakat(string nama,string alamat,string status,int umur){
           Masyarakat::nama = nama;
           Masyarakat::alamat = alamat;
           Masyarakat::status = status;
           Masyarakat::umur = umur;
        }
         string stringify(){
        return "\n" + nama + " " + alamat + " " + status + " " + to_string (umur);
    }
};

   

class DBase{
    public:
        ifstream in;
        ofstream out;
        string fileName;

        DBase(const char* FileName){
            fileName = FileName;
        }

        void save(Masyarakat data){
            cout<<data.nama<<endl;
            cout<<data.alamat<<endl;
            cout<<data.status<<endl;
            cout<<data.umur<<endl;

            DBase::out.open(DBase::fileName,ios::app);
            
            DBase::out << data.stringify();
            DBase::out.close();
        }
        void showAll(){
            DBase::in.open(DBase::fileName,ios::in);
            string nama,alamat,status;
            int umur;
            int index = 1;

            while(!DBase::in.eof()){
                DBase::in >> nama;
                DBase::in >> alamat;
                DBase::in >> status;
                DBase::in >> umur;

                cout<<index++<<".\t";
                cout<<nama<<".\t";
                cout<<alamat<<".\t";
                cout<<status<<".\t";
                cout<<umur<<endl;

            }
            DBase::in.close();
        }
};


int main(int argc, char const *argv[])
{
    string nama,alamat,status;
    int umur;
    cout<<"=====DATABASE MASYARAKAT====="<<endl;
    cout<<"MASUKKAN NAMA : ";
    getline(cin, nama);
    cout<<"MASUKKAN ALAMAT : ";
    getline(cin, alamat);
    cout<<"MASUKKAN STATUS : ";
    getline(cin, status);
    cout<<"MASUKKAN UMUR : ";
    cin>>umur;
    cin.ignore();

    Masyarakat dataMasyarakat = Masyarakat(nama,alamat,status,umur);
    
    DBase database = DBase("data.txt");

    database.save(dataMasyarakat);

    database.showAll();
   

    return 0;
}