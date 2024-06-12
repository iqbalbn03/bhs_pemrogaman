#include <iostream>
#include <limits> // Untuk clear input buffer

using namespace std;

// Function prototypes
void displayArray(int* array, int size);
int calculateTotal(int* array, int size);
int* findMin(int* array, int size);
int* findMax(int* array, int size);
void bubbleSort(int* array, int size, bool ascending);

int main() {
    int pilihan;
    int n;
    char ulang;

    do {
        cout << "1. Bubble sort" << endl;
        cout << "2. Pointer" << endl;
        cout << "3. Rekursif" << endl;
        cout << "Pilihan anda: ";
        cin >> pilihan;

        // Membersihkan input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (pilihan) {
            case 1:
                cout << "Masukkan panjang array: ";
                cin >> n;

                if (n <= 0) {
                    cout << "Panjang array harus lebih dari 0." << endl;
                    break;
                }

                int array[n];
                cout << "Masukkan elemen-elemen array:" << endl;
                for (int i = 0; i < n; ++i) {
                    cout << "Elemen ke-" << i + 1 << ": ";
                    cin >> array[i];
                }

                for (int i = 0; i < n - 1; ++i) {
                    for (int j = 0; j < n - i - 1; ++j) {
                        if (array[j] > array[j + 1]) {
                            int temp = array[j];
                            array[j] = array[j + 1];
                            array[j + 1] = temp;
                        }
                    }
                }

                cout << "Array setelah diurutkan: ";
                for (int i = 0; i < n; ++i) {
                    cout << array[i] << " ";
                }
                cout << endl;
                break;
            case 2:
                cout << "Masukkan panjang array: ";
                cin >> n;

                if (n <= 0) {
                    cout << "Panjang array harus lebih dari 0." << endl;
                    break;
                }

                int* ptrArray = new int[n];
                cout << "Masukkan elemen-elemen array:" << endl;
                for (int i = 0; i < n; ++i) {
                    cout << "Elemen ke-" << i + 1 << ": ";
                    cin >> ptrArray[i];
                }

                cout << "Array yang dimasukkan: ";
                displayArray(ptrArray, n);

                int total = calculateTotal(ptrArray, n);
                cout << "Jumlah total nilai dalam array: " << total << endl;

                int* min = findMin(ptrArray, n);
                int* max = findMax(ptrArray, n);
                cout << "Nilai minimum dalam array: " << *min << endl;
                cout << "Nilai maksimum dalam array: " << *max << endl;

                bubbleSort(ptrArray, n, true);
                cout << "Array setelah diurutkan secara ascending: ";
                displayArray(ptrArray, n);

                bubbleSort(ptrArray, n, false);
                cout << "Array setelah diurutkan secara descending: ";
                displayArray(ptrArray, n);

                delete[] ptrArray;
                break;
            case 3:
                // Implementasi fungsi rekursif dapat ditambahkan di sini
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }

        cout << "Ingin memilih menu lain (y/t)? ";
        cin >> ulang;
        cout << endl;

    } while (ulang != 't' && ulang != 'T');

    return 0;
}

void displayArray(int* array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int calculateTotal(int* array, int size) {
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += array[i];
    }
    return total;
}

int* findMin(int* array, int size) {
    int* min = array;
    for (int i = 1; i < size; ++i) {
        if (array[i] < *min) {
            min = &array[i];
        }
    }
    return min;
}

int* findMax(int* array, int size) {
    int* max = array;
    for (int i = 1; i < size; ++i) {
        if (array[i] > *max) {
            max = &array[i];
        }
    }
    return max;
}

void bubbleSort(int* array, int size, bool ascending) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (ascending ? (array[j] > array[j + 1]) : (array[j] < array[j + 1])) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
