#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan panjang array: ";
    cin >> n;

    int array[n];

    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "Array yang dimasukkan: ";
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
