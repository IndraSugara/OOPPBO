#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int days = 0;

    while (A > 0) {
        int makanA = min(3, A);
        A -= makanA;
        days++;
    }

    while (B > 0) {
        int makanB = min(3, B);
        B -= makanB;
        days++;
    }

    while (C > 0 && D > 0) {
        int makanCD = min(C, D);
        makanCD = min(makanCD, 3);
        C -= makanCD;
        D -= makanCD;
        days++;
    }

    while (C > 0) {
        int makanC = min(3, C);
        C -= makanC;
        days++;
    }

    while (D > 0) {
        int makanD = min(3, D);
        D -= makanD;
        days++;
    }

    cout << days << endl;

    return 0;
}