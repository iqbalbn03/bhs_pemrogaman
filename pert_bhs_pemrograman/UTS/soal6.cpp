#include <iostream>
using namespace std;

void menu();
void tambah();
void kali();
void kurang();
void bagi();

int main() {
    menu();
    tambah();
    kali();
    kurang();
    bagi();
    return 0;
}

void menu() {
    cout << "Pilihan operasi:\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
}

void tambah() {
    double num1, num2;
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan angka kedua: ";
    cin >> num2;
    cout << "Hasil penjumlahan: " << num1 + num2 << endl;
}

void kali() {
    double num1, num2;
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan angka kedua: ";
    cin >> num2;
    cout << "Hasil perkalian: " << num1 * num2 << endl;
}

void kurang() {
    double num1, num2;
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan angka kedua: ";
    cin >> num2;
    cout << "Hasil pengurangan: " << num1 - num2 << endl;
}

void bagi() {
    double num1, num2;
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan angka kedua: ";
    cin >> num2;
    if (num2 != 0) {
        cout << "Hasil pembagian: " << num1 / num2 << endl;
    } else {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
    }
}
