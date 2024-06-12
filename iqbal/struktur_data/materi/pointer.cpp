#include <iostream>
using namespace std;

// Function prototypes
int* displayArray(int* array, int size);
int NilaiTotal(int* array, int size);
int* cariMin(int* array, int size);
int* cariMax(int* array, int size);
int* bubbleSort(int* array, int size, bool ascending = true);

int main() {
    int n;
    cout << "Masukkan panjang array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Panjang array harus lebih dari 0." << endl;
        return 1;
    }

    int* array = new int[n];

    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> array[i];
    }

    cout << endl;
    
    cout << "Nilai dalam Array : ";
    displayArray(array, n);

    int total = NilaiTotal(array, n);
    cout << "total nilai dalam array: " << total << endl;

    int* min = cariMin(array, n);
    int* max = cariMax(array, n);
    cout << "Nilai maksimum dalam array: " << *max << endl;
    cout << "Nilai minimum dalam array: " << *min << endl;
    

    cout << "Array setelah diurutkan secara ascending: ";
    displayArray(bubbleSort(array, n, true), n);

    cout << "Array setelah diurutkan secara descending: ";
    displayArray(bubbleSort(array, n, false), n);

    delete[] array;
    return 0;
}





int* displayArray(int* array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << *(array + i) << " ";
    }
    cout << endl;
    return array;
}

int NilaiTotal(int* array, int size) {
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += *(array + i);
    }
    return total;
}

int* cariMin(int* array, int size) {
    int* min = array;
    for (int i = 1; i < size; ++i) {
        if (*(array + i) < *min) {
            min = array + i;
        }
    }
    return min;
}

int* cariMax(int* array, int size) {
    int* max = array;
    for (int i = 1; i < size; ++i) {
        if (*(array + i) > *max) {
            max = array + i;
        }
    }
    return max;
}

int* bubbleSort(int* array, int size, bool ascending) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (ascending ? (*(array + j) > *(array + j + 1)) : (*(array + j) < *(array + j + 1))) {
                int temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
            }
        }
    }
    return array;
}
