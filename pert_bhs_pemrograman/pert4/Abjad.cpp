#include <iostream>
#include <cctype> // Sertakan untuk fungsi toupper dan tolower
using namespace std;

int main() {
    // Array karakter yang merepresentasikan abjad dari 'a' hingga 'z'
    char abjad[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
                    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    // Hitung jumlah elemen dalam array
    int panjang = sizeof(abjad) / sizeof(abjad[0]);

    // Loop melalui array
    for (int i = 0; i < panjang; ++i) {
        char hurufKecil = abjad[i];
        char hurufBesar = toupper(abjad[i]);  // Konversi ke huruf besar

        // Cetak kedua versi (huruf kecil dan huruf besar)
        cout << "Huruf Kecil: " << hurufKecil << ", Huruf Besar: " << hurufBesar << endl;
    }

    return 0;
}
