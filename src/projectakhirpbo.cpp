# include <iostream> 
# include <vector>
using namespace std;

class Perusahaan {
    
    protected :
        string Nama, Alamat, JenisUsaha;
        unsigned int JumlahKaryawan;
        long unsigned int Valuasi;
        
        
        // Getter
        string GetNama () const {
            
            return Nama;
        }
        string GetAlamat() const {
            
            return Alamat;
        }
        string GetJenisUsaha () const {
            
            return JenisUsaha;
        }
        
        unsigned int GetJumlahKaryawan() const {
            
            return JumlahKaryawan;
        }
        
        long unsigned int GetValuasi () const {
            
            return Valuasi;
        }
    
    public :
    
        // setter 
        
         string SetNama (string __Nama)  {
            Nama = __Nama;
            return Nama;
        }
        string SetAlamat(string __Alamat)  {
            Alamat = __Alamat;
            return Alamat;
        }
        string SetJenisUsaha (string __Jenis)  {
            JenisUsaha = __Jenis;
            return JenisUsaha;
        }
        
        unsigned int SetJumlahKaryawan(unsigned int __Jumlah)  {
            JumlahKaryawan = __Jumlah;
            return JumlahKaryawan;
        }
        
        long unsigned int SetValuasi (long unsigned int __Valuasi)  {
            Valuasi = __Valuasi;
            return Valuasi;
        }
        
        
        
        
    
    
};


class Department : public Perusahaan {
    protected :
        string NamaDept;
        unsigned int BanyakAnggota;
        long unsigned int Anggaran ;
    
        // Getter
        string GetNamaDept () const {
            
            return NamaDept;
        }
        unsigned int GetBanyakAnggota () const {
            
            return BanyakAnggota;
        }
        long unsigned int GetAnggaran () const {
            
            return Anggaran;
        }

    public :
        // setter 
        
        string SetNama (string __NamaDept)  {
            NamaDept = __NamaDept;
            return NamaDept;
        }
        unsigned int SetBanyakAnggota(unsigned int __BanyakAnggota)  {
            BanyakAnggota = __BanyakAnggota;
            return BanyakAnggota;
        }
        long unsigned int SetAnggaran (long unsigned int __Anggaran)  {
            Anggaran = __Anggaran;
            return Anggaran;
        }
    
    
    
    

    
    
    
    
    
};


class Karyawan {
    private:
            
        string NamaKaryawan, Jabatan; 
        unsigned int Gaji,Umur,LamaBekerja;
        char JenisKelamin;

        // Getter
        string GetNamaKaryawan () const {
            
            return NamaKaryawan;
        }
        string GetJabatan() const {
            
            return Jabatan;
        }
        unsigned int GetGaji () const {
            
            return Gaji;
        }
        
        unsigned int GetUmur() const {
            
            return Umur;
        }
        
        unsigned int GetLamaBekerja () const {
            
            return LamaBekerja;
        }

        char GetJenisKelamin() const{

            return JenisKelamin;
        }
    public: 
        // setter 
        
        string SetNamaKaryawan (string __NamaKaryawan)  {
            NamaKaryawan = __NamaKaryawan;
            return NamaKaryawan;
        }
        string SetJabatan(string __Jabatan)  {
            Jabatan = __Jabatan;
            return Jabatan;
        }
        unsigned int SetGaji (unsigned int __Gaji)  {
            Gaji = __Gaji;
            return Gaji;
        }
        
        unsigned int SetUmur(unsigned int __Umur)  {
            Umur = __Umur;
            return Umur;
        }
        
        unsigned int SetLamaBekerja (long unsigned int __LamaBekerja)  {
            LamaBekerja = __LamaBekerja;
            return LamaBekerja;
        }

        char SetJenisKelamin(char __JenisKelamin){
            JenisKelamin = __JenisKelamin;
            return JenisKelamin;
        }

            
    
    
};






int main(){
    
    
    
    
    
}
