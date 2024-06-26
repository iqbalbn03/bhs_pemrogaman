
#include <iostream>
#include <queue> // Library antrian
#include <string>

using namespace std;

// Struct untuk data pasien
struct Pasien {
    string nama;
    int nomorAntrian;
    // ... (data lain)
};

int main() {
    queue<Pasien> antrian;
    int nomorAntrianTerakhir = 0; // Mulai dari 0

    while (true) {
        // Tampilkan menu
        cout << "Menu:\n";
        cout << "1. Tambah Pasien\n";
        cout << "2. Panggil Pasien\n";
        cout << "3. Tampilkan Antrian\n";
        cout << "4. Keluar\n";
        cout << "Pilihan: ";
        int pilihan;
        cin >> pilihan;

        if (pilihan == 1) {
            // Tambah pasien baru
            Pasien pasienBaru;
            cout << "Nama: ";
            cin >> pasienBaru.nama;
            nomorAntrianTerakhir++;
            pasienBaru.nomorAntrian = nomorAntrianTerakhir;
            antrian.push(pasienBaru);
            cout << "Pasien berhasil ditambahkan.\n";
        } else if (pilihan == 2) {
            // Panggil pasien berikutnya
            if (!antrian.empty()) {
                Pasien pasienDipanggil = antrian.front();
                antrian.pop();
                cout << "Pasien dipanggil: " << pasienDipanggil.nama << " (Nomor " << pasienDipanggil.nomorAntrian << ")\n";
            } else {
                cout << "Antrian kosong.\n";
            }
        } else if (pilihan == 3) {
            // Tampilkan antrian
            if (antrian.empty()) {
                cout << "Antrian kosong.\n";
            } else {
                cout << "Daftar Antrian:\n";
                queue<Pasien> temp = antrian; // Salin antrian untuk iterasi
                while (!temp.empty()) {
                    Pasien pasien = temp.front();
                    temp.pop();
                    cout << "- " << pasien.nama << " (Nomor " << pasien.nomorAntrian << ")\n";
                }
            }
        } else if (pilihan == 4) {
            cout << "Keluar dari aplikasi.\n";
            break; // Keluar dari loop
        } else {
            cout << "Pilihan tidak valid.\n";
        }
    }

    return 0;
}
