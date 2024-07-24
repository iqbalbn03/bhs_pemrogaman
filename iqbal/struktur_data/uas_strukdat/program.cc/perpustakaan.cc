#include "include.h"

void menu_pustakawan() {
    int choice;
    while (true) {
        cout << "\nMenu Pustakawan:\n";
        cout << "1. Tambah Buku\n";
        cout << "2. Tampilkan Semua Buku\n";
        cout << "3. Perbarui Buku\n";
        cout << "4. Hapus Buku\n";
        cout << "5. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> choice;

        if (choice == 1) {
            tambah_buku();
        } else if (choice == 2) {
            tampilkan_buku();
        } else if (choice == 3) {
            int id_buku;
            string judul_buku, penulis, genre_buku, tahun_terbit;
            cout << "Masukkan ID buku untuk diperbarui: ";
            cin >> id_buku;
            cin.ignore();
            cout << "Masukkan judul buku baru: ";
            getline(cin, judul_buku);
            cout << "Masukkan penulis baru: ";
            getline(cin, penulis);
            cout << "Masukkan genre buku baru: ";
            getline(cin, genre_buku);
            cout << "Masukkan tahun terbit baru: ";
            getline(cin, tahun_terbit);
            perbarui_buku(id_buku, judul_buku, penulis, genre_buku, tahun_terbit);
        } else if (choice == 4) {
            int id_buku;
            cout << "Masukkan ID buku untuk dihapus: ";
            cin >> id_buku;
            hapus_buku(id_buku);
        } else if (choice == 5) {
            break;
        } else {
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    }
}

void menu_mahasiswa() {
    int choice;
    while (true) {
        cout << "\nMenu Mahasiswa:\n";
        cout << "1. Tampilkan Semua Buku\n";
        cout << "2. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> choice;

        if (choice == 1) {
            tampilkan_buku();
        } else if (choice == 2) {
            break;
        } else {
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    }
}

int main() {
    int user_type;
    cout << "Pilih jenis pengguna:\n";
    cout << "1. Pustakawan\n";
    cout << "2. Mahasiswa\n";
    cout << "Masukkan pilihan: ";
    cin >> user_type;

    if (user_type == 1) {
        string username, password;
        cout << "Masukkan username: ";
        cin >> username;
        cout << "Masukkan password: ";
        cin >> password;
        if (login_pustakawan(username, password)) {
            menu_pustakawan();
        } else {
            cout << "Login gagal." << endl;
        }
    } else if (user_type == 2) {
        string nim;
        cout << "Masukkan NIM: ";
        cin >> nim;
        if (login_mahasiswa(nim)) {
            menu_mahasiswa();
        } else {
            cout << "Login gagal." << endl;
        }
    } else {
        cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
