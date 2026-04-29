# include <iostream> 
# include <vector>
using namespace std;
class Perusahaan {
protected:
string Nama, Alamat, JenisUsaha;
unsigned int JumlahKaryawan;
long unsigned int Valuasi;

string GetNama() const { return Nama; }
string GetAlamat() const { return Alamat; }
string GetJenisUsaha() const { return JenisUsaha; }
unsigned int GetJumlahKaryawan() const { return JumlahKaryawan; }
long unsigned int GetValuasi() const { return Valuasi; }
public:

void SetNama(string __Nama) { Nama = __Nama; }
void SetAlamat(string __Alamat) { Alamat = __Alamat; }
void SetJenisUsaha(string __Jenis) { JenisUsaha = __Jenis; }
void SetJumlahKaryawan(unsigned int __Jumlah) { JumlahKaryawan = __Jumlah; }
void SetValuasi(long unsigned int __Valuasi) { Valuasi = __Valuasi; }
// Virtual function for Polymorphism
virtual void DisplayInfo() const {
    cout << "Nama Perusahaan: " << GetNama() << endl;
    cout << "Alamat: " << GetAlamat() << endl;
    cout << "Jenis Usaha: " << GetJenisUsaha() << endl;
    cout << "Jumlah Karyawan: " << GetJumlahKaryawan() << endl;
    cout << "Valuasi: " << GetValuasi() << endl;
}
};
class Department : public Perusahaan {
protected:
string NamaDept;
unsigned int BanyakAnggota;
long unsigned int Anggaran;
// Getter
string GetNamaDept() const { return NamaDept; }
unsigned int GetBanyakAnggota() const { return BanyakAnggota; }
long unsigned int GetAnggaran() const { return Anggaran; }
public:
// Setter
void SetNamaDept(string __NamaDept) { NamaDept = __NamaDept; }
void SetBanyakAnggota(unsigned int __BanyakAnggota) { BanyakAnggota = __BanyakAnggota; }
void SetAnggaran(long unsigned int __Anggaran) { Anggaran = __Anggaran; }
// Override virtual function
void DisplayInfo() const override {
    Perusahaan::DisplayInfo();
    cout << "Nama Departemen: " << GetNamaDept() << endl;
    cout << "Banyak Anggota: " << GetBanyakAnggota() << endl;
    cout << "Anggaran: " << GetAnggaran() << endl;
}
};
// Multiple inheritance: Karyawan inheriting from both Perusahaan and Department
class Karyawan : public Department {
private:
string NamaKaryawan, Jabatan;
unsigned int Gaji, Umur, LamaBekerja;
char JenisKelamin;
// Getter
string GetNamaKaryawan() const { return NamaKaryawan; }
string GetJabatan() const { return Jabatan; }
unsigned int GetGaji() const { return Gaji; }
unsigned int GetUmur() const { return Umur; }
unsigned int GetLamaBekerja() const { return LamaBekerja; }
char GetJenisKelamin() const { return JenisKelamin; }
public:
// Setter
void SetNamaKaryawan(string __NamaKaryawan) { NamaKaryawan = __NamaKaryawan; }
void SetJabatan(string __Jabatan) { Jabatan = __Jabatan; }
void SetGaji(unsigned int __Gaji) { Gaji = __Gaji; }
void SetUmur(unsigned int __Umur) { Umur = __Umur; }
void SetLamaBekerja(unsigned int __LamaBekerja) { LamaBekerja = __LamaBekerja; }
void SetJenisKelamin(char __JenisKelamin) { JenisKelamin = __JenisKelamin; }
// Override virtual function
void DisplayInfo() const override {
    Department::DisplayInfo();
    cout << "Nama Karyawan: " << GetNamaKaryawan() << endl;
    cout << "Jabatan: " << GetJabatan() << endl;
    cout << "Gaji: " << GetGaji() << endl;
    cout << "Umur: " << GetUmur() << endl;
    cout << "Lama Bekerja: " << GetLamaBekerja() << endl;
    cout << "Jenis Kelamin: " << GetJenisKelamin() << endl;
}
};
int main() {
vector<Karyawan> karyawanList;
Karyawan karyawan;
karyawan.SetNama("Tech Corp");
karyawan.SetAlamat("Jalan Jendral Sudirman No. 123");
karyawan.SetJenisUsaha("Teknologi");
karyawan.SetJumlahKaryawan(500);
karyawan.SetValuasi(1000000000);

karyawan.SetNamaDept("R&D");
karyawan.SetBanyakAnggota(100);
karyawan.SetAnggaran(500000000);

karyawan.SetNamaKaryawan("John Doe");
karyawan.SetJabatan("Software Engineer");
karyawan.SetGaji(10000000);
karyawan.SetUmur(30);
karyawan.SetLamaBekerja(5);
karyawan.SetJenisKelamin('M');

karyawanList.push_back(karyawan);

for (const auto& k : karyawanList) {
    k.DisplayInfo();
    cout << endl;
}

return 0;
}