#include <iostream>

using namespace std;

class Poligon {
	protected:
		int lebar, tinggi;
	public:
		void set_nilai_input (int a, int b)
			{ lebar=a; tinggi=b; }
		virtual int luas ()
			{ return 0; }
};

class Persegi: public Poligon {
	public:
		int luas()
			{ return lebar*tinggi; }
};

class Segitiga: public Poligon {
	public:
		int luas()
			{ return lebar*tinggi/2; }
};

int main () {
	Persegi perseg;
	Segitiga setig;
	Poligon poli;
	Poligon *poli1 = &perseg;
	Poligon *poli2 = &setig;
	Poligon *poli3 = &poli;
	poli1->set_nilai_input(8,5);
	poli2->set_nilai_input(8,5);
	poli3->set_nilai_input(8,5);
	cout << poli1->luas() << '\n';
	cout << poli2->luas() << '\n';
	cout << poli3->luas() << '\n';
	return 0;
}