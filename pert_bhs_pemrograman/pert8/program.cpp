#include <iostream>
#include <string>
using namespace std;

// Definisi Struktur Tugas
struct Tugas {
    int id;
    string bab;
    string deadline;
    int jumlahSoal;
    int jokiId;
};

// Definisi Struktur Joki
struct Joki {
    int id;
    string nama;
    string keahlian;
};

// Fungsi untuk menampilkan informasi tugas
void tampilkanTugas(const Tugas &tugas) {
    cout << "ID Tugas: " << tugas.id << endl;
    cout << "Bab: " << tugas.bab << endl;
    cout << "Deadline: " << tugas.deadline << endl;
    cout << "Jumlah Soal: " << tugas.jumlahSoal << endl;
    cout << "ID Joki: " << tugas.jokiId << endl;
}

// Fungsi untuk menampilkan informasi joki
void tampilkanJoki(const Joki &joki) {
    cout << "ID Joki: " << joki.id << endl;
    cout << "Nama: " << joki.nama << endl;
    cout << "Keahlian: " << joki.keahlian << endl;
}

// Fungsi untuk mengirim tugas
void kirimTugas(const Tugas &tugas, const Joki &joki) {
    cout << "\nSolusi untuk Tugas ID " << tugas.id << " telah dikirim oleh Joki " << joki.nama << ":\n";
    cout << "Solusi: (Simulasi solusi tugas kalkulus)\n";
    cout << "Penjelasan Konsep: (Simulasi penjelasan konsep kalkulus)\n";
}

int main() {
    // Simulasi data joki
    Joki jokis[5] = {
        {1, "Joki A", "Integrasi"},
        {2, "Joki B", "Limit"},
        {3, "Joki C", "Deret"},
        {4, "Joki D", "Fungsi Kontinu"},
        {5, "Joki E", "Fungsi Multivariable"}
    };

    // Simulasi bab kalkulus
    string babKalkulus[5] = {"Integrasi", "Limit", "Deret", "Fungsi Kontinu", "Fungsi Multivariable"};

    char pilihan;
    do {
        // Tampilan awal
        cout << "=== Layanan Jasa Joki Tugas Kalkulus ===\n";
        cout << "\n=== Daftar Bab Kalkulus ===\n";
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << ". " << babKalkulus[i] << endl;
        }

        // Memilih bab kalkulus
        int pilihanBab;
        cout << "Pilih nomor bab kalkulus yang diinginkan: ";
        cin >> pilihanBab;
        if (pilihanBab < 1 || pilihanBab > 5) {
            cout << "Bab yang dipilih tidak valid.\n";
            continue;
        }

        string bab = babKalkulus[pilihanBab - 1];

        // Memasukkan deadline
        string deadline;
        cout << "Masukkan deadline (yyyy-mm-dd): ";
        cin >> deadline;

        // Memasukkan jumlah soal
        int jumlahSoal;
        cout << "Masukkan jumlah soal: ";
        cin >> jumlahSoal;

        // Membuat tugas baru
        Tugas tugas = {1, bab, deadline, jumlahSoal, -1};

        // Pilih joki secara otomatis (misalnya, joki pertama dalam daftar)
        int indexJoki = 0;
        tugas.jokiId = jokis[indexJoki].id;

        cout << "\n=== Informasi Tugas yang Diperbarui ===\n";
        tampilkanTugas(tugas);

        // Hitung total biaya
        int totalBiaya = tugas.jumlahSoal * 30000;
        cout << "Total Biaya: Rp " << totalBiaya << endl;

        // Kirim tugas
        kirimTugas(tugas, jokis[indexJoki]);

        // Tanya pengguna apakah ingin menggunakan layanan kembali
        cout << "\nApakah Anda ingin menggunakan jasa joki kembali? (y/n): ";
        cin >> pilihan;
        cout << endl;
    } while (pilihan == 'y' || pilihan == 'Y');

    return 0;
}
