#include <iostream>
#include <algorithm>

using namespace std;

int keuntungan(int h[], int untung, int n) {
    int hargaP = h[0];
    if (n <= 0 ) return 0;
    for (int i = 1; i < n-1; i++) {
        if (h[i] > hargaP) {
            untung += h[i] - hargaP;
            hargaP = h[i];
        } else {
            hargaP = h[i];
        }
    }
    return untung;
}

int main() {
    int n;
    cin >> n;
    int h[n];
    cout << sizeof(h)<<endl;
    cout << sizeof(h[0]);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    int x = sizeof(h)/sizeof(h[0],greater<int>());


    sort(h,h+x);
    cout << keuntungan(h, 0, n);
    for (int i = 0; i < n; i++) {
        cout << h[i];
    }

    return 0;
}
