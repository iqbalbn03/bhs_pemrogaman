#include <iostream>
using namespace std;

int main() {
    int n, i, j;

    cout << ("Masukkan tinggi segitiga: ");
    cin >> n ;

    // Mencetak segitiga Kiri
    cout << "Segitiga Kiri: " << endl;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << "* ";   
        }
        cout << endl;
    }

    // Mencetak segitiga Kanan
    cout << "Segitiga Kanan: " << endl;
    for (i = 1; i <= n; i++) {
        for (j = 1; j > i; j++) {
            cout << " ";   
        }
        for (j = i; j >= 1; j--) {
            cout << "* ";   
        }
        cout << endl;
    }

    // Mencetak segitiga kanan
    cout << ("\nSegitiga Kanan:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
        cout << " ";
        }
        for (j = 1; j <= i; j++) {
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}

