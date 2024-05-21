#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Masukkan angka pertama: ";
    cin >> num1;

    cout << "Masukkan angka kedua: ";
    cin >> num2;

    cout << "Penjumlahan: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << "Pengurangan: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << "Perkalian: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Pembagian: " << num1 << " : " << num2 << " = " << num1 / num2 << endl;
    } else {
        cout << "Pembagian: Tidak bisa dibagi dengan nol." << endl;
    }

    return 0;
}
