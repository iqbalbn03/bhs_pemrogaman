#include <iostream>
#include <stack>
#include <string>
#include <cstdlib> // Untuk system("clear")

using namespace std;

struct Book {
    string title;
    string author;
    int year;
};

// Fungsi untuk menampilkan buku
void displayBook(Book book) {
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Year: " << book.year << endl;
}

int main() {
    stack<Book> bookStack; // Tumpukan buku

    while (true) {
        system("clear"); // clear screen versi linux/wsl
        //system("cls") untuk versi windows

        cout << "Operasi yang tersedia: " << endl;
        cout << "1. Push (menambahkan buku)" << endl;
        cout << "2. Pop (menghapus buku paling atas)" << endl;
        cout << "3. Peek (melihat buku paling atas)" << endl;
        cout << "4. isEmpty (memeriksa apakah tumpukan kosong)" << endl;
        cout << "5. Size (melihat jumlah buku dalam tumpukan)" << endl;
        cout << "6. Exit" << endl;
        cout << "Pilih operasi (1-6): ";

        int choice;
        cin >> choice;

        // Membersihkan buffer setelah menggunakan cin
        cin.ignore();

        switch (choice) {
            case 1: {
                Book newBook;
                cout << "Masukkan judul buku: ";
                getline(cin, newBook.title);
                cout << "Masukkan nama penulis: ";
                getline(cin, newBook.author);
                cout << "Masukkan tahun terbit: ";
                cin >> newBook.year;
                bookStack.push(newBook);
                cout << "Buku telah ditambahkan ke dalam tumpukan." << endl;
                break;
            }
            case 2: {
                if (bookStack.empty()) {
                    cout << "Tumpukan kosong. Tidak ada buku untuk dihapus." << endl;
                } else {
                    bookStack.pop();
                    cout << "Buku paling atas telah dihapus dari tumpukan." << endl;
                }
                break;
            }
            case 3: {
                if (bookStack.empty()) {
                    cout << "Tumpukan kosong. Tidak ada buku yang dilihat." << endl;
                } else {
                    cout << "Buku paling atas dalam tumpukan:" << endl;
                    displayBook(bookStack.top());
                }
                break;
            }
            case 4: {
                if (bookStack.empty()) {
                    cout << "Tumpukan kosong." << endl;
                } else {
                    cout << "Tumpukan tidak kosong." << endl;
                }
                break;
            }
            case 5: {
                cout << "Jumlah buku dalam tumpukan: " << bookStack.size() << endl;
                break;
            }
            case 6: {
                cout << "Program berakhir." << endl;
                return 0;
            }
            default:
                cout << "Operasi tidak valid. Silakan masukkan nomor operasi yang benar." << endl;
        }

        // Membersihkan buffer setelah menggunakan cin
        cin.ignore();
        cin.get();
    }

    return 0;
}
