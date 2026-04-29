#include <iostream>
using namespace std;

void predict (int A, int B, int C, int D){

    int hari = 0;
    while (A > 0 || B > 0 || C > 0 || D > 0) {
        int makan = 0;
        if (A > 0) {
            int makanA = min(3, A);
            makan += makanA;
            A -= makanA;
        }
        else if (makan < 3 && B > 0 && A == 0) {
            int makanB = min(3 - makan, B);
            makan += makanB;
            B -= makanB;
        }
        if (makan < 3 && C > 0 && B == 0) {
            int makanC = min(3 - makan, C);
            makan += makanC;
            C -= makanC;
        }
        else if (makan < 3 && D > 0 && C == 0) {
            int makanD = min(3 - makan, D);
            makan += makanD;
            D -= makanD;
        }
        if (B > 0 && C > 0) {
            int makanBC = min(B, C);
            makanBC = min(makanBC, 3 - makan);
            B -= makanBC;
            C -= makanBC;
            makan += makanBC;
        }
        hari++;
    }
    

    cout << hari << endl;
}

int main() {
    int A, B, C, D;
    cin >> A ;
    cin >> B ;
    cin >> C ;
    cin >> D ;

predict(A,B,C,D);

    return 100;
}
