#include <iostream>
using namespace std;

int main(){

    string name;
    int nim;

    cout << "Masukkan nama: ";
    getline(cin, name);

    cout << "Masukkan NIM: ";
    cin >> nim;
    system("clear");

    cout << " Nama: " << name << endl;
    cout << " NIM: " << nim << endl;

    return 0;
}