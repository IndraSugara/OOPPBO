#include <iostream>

using namespace std;

int absolut(int x) {
    return x < 0 ? -x : x;
}

int main() {
    int N, X;
    cin >> N >> X;

    int kupon[N];
    for (int i = 0; i < N; i++) {
        cin >> kupon[i];
    }

    int minSelisih = absolut(kupon[0] - X);

    for (int i = 1; i < N; i++) {
        int selisih = absolut(kupon[i] - X);
        if (selisih < minSelisih) {
            minSelisih = selisih;
        }
    }

    int hitSelisih = 0;
    for (int i = 0; i < N; i++) {
        if (absolut(kupon[i] - X) == minSelisih) {
            hitSelisih++;
        }
    }

    int pemenang[hitSelisih];
    int index = 0;
    for (int i = 0; i < N; i++) {
        if (absolut(kupon[i] - X) == minSelisih) {
            pemenang[index++] = kupon[i];
        }
    }

    for (int i = 0; i < hitSelisih - 1; i++) {
        for (int j = 0; j < hitSelisih - i - 1; j++) {
            if (pemenang[j] > pemenang[j + 1]) {
                int temp = pemenang[j];
                pemenang[j] = pemenang[j + 1];
                pemenang[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < hitSelisih; i++) {
        cout << pemenang[i] << " ";
    }

    return 0;
}