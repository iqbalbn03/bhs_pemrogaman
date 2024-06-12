#include <iostream>

using namespace std;

int main() {
    int menu;
    while (true) {
        cout << "Silahkan memilih menu:" << endl;
        cout << "1. Makanan" << endl;
        cout << "2. Minuman" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih salah satu menu (1-3): ";
        cin >> menu;
        system("clear");

        switch (menu) {
            case 1: {
                int makanan;
                while (true) {
                    cout << "Silahkan pilih menu makanan:" << endl;
                    cout << "1. Pecel Lele" << endl;
                    cout << "2. Nasi Goreng" << endl;
                    cout << "3. Kembali" << endl;
                    cout << "Pilih salah satu menu (1-3): ";
                    cin >> makanan;
                    system("clear");

                    switch (makanan) {
                        case 1: {
                            int qty;
                            const int hargaPecelLele = 15000;
                            cout << "Pecel Lele." << endl;
                            cout << "Masukkan jumlah yg ingin di beli (qty): ";
                            cin >> qty;

                            int total = hargaPecelLele * qty;
                            cout << "Total harga untuk " << qty << " Pecel Lele adalah: Rp. " << total << endl;
                            
                            break;
                            system("clear");
                        }
                        case 2: {
                            int qty;
                            const int hargaNasiGoreng = 13000;
                            cout << "Anda memilih Nasi Goreng." << endl;
                            cout << "Masukkan jumlah (qty): ";
                            cin >> qty;

                            int total = hargaNasiGoreng * qty;
                            cout << "Total harga untuk " << qty << " Nasi Goreng adalah: Rp. " << total << endl;
                            
                            break;
                            system("clear");
                        }
                        case 3:
                            cout << "Kembali ke menu utama." << endl;
                            goto main_menu;
                        default:
                            cout << "Hanya pilih antara 1, 2, atau 3." << endl;
                    }
                }
                main_menu: 
                break;
            }
            case 2:{
                cout << "Silahkan pilih menu minuman." << endl;
                int qty;
                            const int hargaMinuman = 5000;
                            cout << "Es Teh Manis." << endl;
                            cout << "Masukkan jumlah yg ingin di beli (qty): ";
                            cin >> qty;

                            int total = hargaMinuman * qty;
                            cout << "Total harga untuk " << qty << " Es Teh Manis adalah: Rp. " << total << endl;
                    
                break;
                system("clear");
            }
            case 3:
                cout << "Terima kasih sudah membeli, Silahkan datang kembali" << endl;
                return 0;
            default:
                cout << "Hanya pilih antara 1, 2, atau 3." << endl;
        }
    }

    return 0;
}
