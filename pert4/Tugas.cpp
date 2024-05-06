#include <iostream>
#include <limits> // Untuk clear input buffer

using namespace std;

// Definisi fungsi-fungsi
void tambah(double add1, double add2) {
    cout << "Hasil tambah: " << (add1 + add2) << endl;
}

void kurang(double sub1, double sub2) {
    cout << "Hasil kurang: " << (sub1 - sub2) << endl;
}

void kali(double mul1, double mul2) {
    cout << "Hasil kali: " << (mul1 * mul2) << endl;
}

void bagi(double div1, double div2) {
    if (div2 != 0) {
        cout << "Hasil bagi: " << (div1 / div2) << endl;
    } else {
        cout << "Error: Tidak dapat melakukan pembagian dengan nol." << endl;
    }
}

// Deklarasi fungsi-fungsi
void tambah(double add1, double add2);
void kurang(double sub1, double sub2);
void kali(double mul1, double mul2);
void bagi(double div1, double div2);

int main() {
    int pilihan;
    char ulang;
    double angka1, angka2;
    

    do {
        cout << "1. tambah" << endl;
        cout << "2. kurang" << endl;
        cout << "3. kali" << endl;
        cout << "4. bagi" << endl;

        cout << "Pilihan anda: ";
        cin >> pilihan;

        // Membersihkan input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (pilihan) {
            case 1:
                cout << "Masukkan dua bilangan untuk ditambah: ";
                cin >> angka1 >> angka2;
                tambah(angka1, angka2);
                break;
            case 2:
                cout << "Masukkan dua bilangan untuk dikurangkan: ";
                cin >> angka1 >> angka2;
                kurang(angka1, angka2);
                break;
            case 3:
                cout << "Masukkan dua bilangan untuk dikali: ";
                cin >> angka1 >> angka2;
                kali(angka1, angka2);
                break;
            case 4:
                cout << "Masukkan dua bilangan untuk dibagi: ";
                cin >> angka1 >> angka2;
                bagi(angka1, angka2);
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }

        cout << endl;
        cout << "Ingin memilih menu lain (y/t)? ";
        cin >> ulang;
        cout << endl;

    } while (ulang != 't' && ulang != 'T');

    return 0;
}

