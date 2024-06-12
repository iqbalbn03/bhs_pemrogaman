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
