#include <iostream>
using namespace std;

int keuntungan(int h[], int untung, int n) {
    int Pharga = h[0];
    if (n <= 0 ) return 0;
    for (int i = 1 ; i < n; i++) {
        if (h[i] > Pharga) {
            untung += h[i] - Pharga;
            Pharga = h[i];
        } else {
            Pharga = h[i];
        }
    }
    return untung;
}
int main() {
    system("color a");
    int n; 
    cin >> n;
    int h[n];
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
   cout << keuntungan(h, 0, n);

    return 0;
}