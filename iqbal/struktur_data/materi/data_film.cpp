#include <iostream>
using namespace std;

struct Film {
    string judul;
    string sutradara;
    int tahun_rilis;
    float rating;
};

void isiDataFilm(Film &fl)
{
    cout << "Masukkan judul    : ";
    getline(cin, fl.judul);

    cout << "Masukkan sutradara   : ";
    getline(cin, fl.sutradara);

    cout << "Masukkan tahun rilis   : ";
    cin >> fl.tahun_rilis;
    
    cout << "Masukkan rating   : ";
    cin >> fl.rating;

    cin.ignore();
}

int main()
{
    Film fl1;
    Film fl2;

    cout << "===============================================" << endl;
    isiDataFilm(fl1);

    cout << "===============================================" << endl;
    isiDataFilm(fl2);

    cout << "===============================================" << endl;
    cout << "Data Film 1" << endl;
    cout << "Judul    : " << fl1.judul << endl;
    cout << "Sutradara  : " << fl1.sutradara << endl;
    cout << "Tahun Rilis  : " << fl1.tahun_rilis << endl;
    cout << "Rating    : " << fl1.rating << endl;

    cout << "===============================================" << endl;
    cout << "Data Film 2" << endl;
    cout << "Judul    : " << fl2.judul << endl;
    cout << "Sutradara  : " << fl2.sutradara << endl;
    cout << "Tahun Rilis  : " << fl2.tahun_rilis << endl;
    cout << "Rating    : " << fl2.rating << endl;

    return 0;
}
