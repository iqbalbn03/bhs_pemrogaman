#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> antrian; // Membuat antrean untuk menyimpan bilangan bulat

    antrian.push(10); // Memasukkan elemen 10 ke antrean
    antrian.push(25); // Memasukkan elemen 25 ke antrean
    antrian.push(5);  // Memasukkan elemen 5 ke antrean

    cout << "Ukuran antrean: " << antrian.size() << endl; // Output: Ukuran antrean: 3

    cout << "Elemen depan: " << antrian.front() << endl;  // Output: Elemen depan: 10
    antrian.pop(); // Mengeluarkan elemen depan (10) dari antrean

    cout << "Elemen depan (setelah pop): " << antrian.front() << endl; // Output: Elemen depan (setelah pop): 25

    return 0;
}
