#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    if (n <= 1) {
        return 1; // Basis: faktorial dari 0 atau 1 adalah 1
    } else {
        return n * faktorial(n - 1); // Rekurens: n * faktorial(n-1)
    }
}

int main() {
    int n;
    char ulang;

    do {
        cout << "Masukkan nilai untuk dihitung faktorialnya: ";
        cin >> n;

        if (n < 0) {
            cout << "Bilangan harus non-negatif." << endl;
        } else {
            int hasil = faktorial(n);
            cout << "Faktorial dari " << n << " adalah: " << hasil << endl;
        }

        cout << "Ingin menghitung faktorial untuk bilangan lain (y/t)? ";
        cin >> ulang;
        cout << endl;

    } while (ulang != 't' && ulang != 'T');

    return 0;
}
