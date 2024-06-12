#include <iostream>
#include <string> // untuk menggunakan tipe data string
using namespace std;

int main()
{
    
    string name; // Menggunakan tipe data string untuk nama
    long nim;

    cout << "Nama : ";
    getline(cin, name); // Menggunakan getline() untuk membaca seluruh baris input
    
    cout << "NIM : ";
    cin >> nim; 
    system("clear");
    
    cout << "===========================" << endl;

    cout << "Nama: " << name << endl;
    cout << "NIM: " << nim << endl;
    cout << "===========================" << endl;
    

    for (int i = 1; i <= 10; i++) {
        cout << i << " " << 11 - i << endl; 
    }
    cout << "===========================" << endl;

    int a;
    int b;

    cout << " masukkan angka 1: ";
    cin >> a;
    cout << " masukkan angka 2: ";
    cin >> b;
    cout << endl;
    

    cout << "hasil: " << a+b;
    

    cout << endl;

    int x;
    int y;

    cout << "masukkan angka pertama :";
    cin >> x;
    cout << "masukkan angka kedua :";
    cin >> y;

    for(x; x <= y; x++){
        cout << x << endl;
    }

    string arr[3] = {"ball", "dit", "yes"};

    for (int a = 0; a <= 2; a++)
    {
        cout << arr[a] << endl;
    }
    for (int j = 2; j >= 0; j-- )
    {
        cout << arr[j] << endl;
    }
    

    return 0;
}
