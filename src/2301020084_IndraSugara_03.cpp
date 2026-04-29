#include <iostream> 
using namespace std;

class Persegi{

    private:
        float panjang;
        float lebar;

    public:
        Persegi(float P_Persegi, float L_Persegi){
            panjang = P_Persegi;
            lebar = L_Persegi;
        }
        float get_luas(){
            return panjang * lebar;
        }
        float get_volume_balok(float T_Balok){
            return panjang*lebar*T_Balok;
        }
        ~Persegi(){
			panjang = 0;
			lebar = 0;
		}
};

int main(){
    Persegi Persegi(5,3);
    cout << "Luas persegi: " << Persegi.get_luas() << endl;
    cout << "Volume Persegi: " << Persegi.get_volume_balok(4) << endl;
    return 0; 
}
