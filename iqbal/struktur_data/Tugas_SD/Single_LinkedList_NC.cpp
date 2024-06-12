#include <iostream>
#include <cstdlib> // Library untuk clear screen

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insertDepan(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void insertTengah(int value, int position) {
        Node* newNode = new Node;
        newNode->data = value;
        
        if (position == 0) {
            insertDepan(value);
        } else {
            Node* current = head;
            int count = 0;
            while (count < position - 1 && current != NULL) {
                current = current->next;
                count++;
            }
            if (current != NULL) {
                newNode->next = current->next;
                current->next = newNode;
            } else {
                cout << "Posisi tidak valid." << endl;
            }
        }
    }

    void insertBelakang(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void deleteDepan() {
        if (head == NULL) {
            cout << "Linked list kosong." << endl;
        } else {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void deleteTengah(int position) {
        if (position == 0) {
            deleteDepan();
        } else {
            Node* current = head;
            int count = 0;
            while (count < position - 1 && current != NULL) {
                current = current->next;
                count++;
            }
            if (current != NULL && current->next != NULL) {
                Node* temp = current->next;
                current->next = temp->next;
                delete temp;
            } else {
                cout << "Posisi tidak valid." << endl;
            }
        }
    }

    void deleteBelakang() {
        if (head == NULL) {
            cout << "Linked list kosong." << endl;
        } else if (head->next == NULL) {
            delete head;
            head = NULL;
        } else {
            Node* current = head;
            while (current->next->next != NULL) {
                current = current->next;
            }
            delete current->next;
            current->next = NULL;
        }
    }

    void tampilkanData() {
        if (head == NULL) {
            cout << "Linked list kosong." << endl;
        } else {
            Node* current = head;
            cout << "Isi Linked List: ";
            while (current != NULL) {
                cout << current->data << " -> ";
                current = current->next;
            }
            cout << "NULL";
            cout << endl;
        }
    }
};

int main() {
    LinkedList list;
    char choice;
    int value, position;

    do {
        
        cout << "Menu:" << endl;
        cout << "a. Insert Depan" << endl;
        cout << "b. Insert Tengah" << endl;
        cout << "c. Insert Belakang" << endl;
        cout << "d. Delete Depan" << endl;
        cout << "e. Delete Tengah" << endl;
        cout << "f. Delete Belakang" << endl;
        cout << "g. Tampilkan Data" << endl;
        cout << "h. Keluar" << endl;
        cout << "Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 'a':
                cout << "Masukkan nilai: ";
                cin >> value;
                list.insertDepan(value);
                cin.ignore(); // Membersihkan buffer input sebelum melanjutkan
                cin.get(); // Menunggu input dari pengguna sebelum melanjutkan
                system("clear"); 
                break;
            case 'b':
                cout << "Masukkan nilai: ";
                cin >> value;
                cout << "Masukkan posisi: ";
                cin >> position;
                list.insertTengah(value, position);
                cin.ignore(); // Membersihkan buffer input sebelum melanjutkan
                cin.get(); // Menunggu input dari pengguna sebelum melanjutkan
                system("clear"); 
                break;
            case 'c':
                cout << "Masukkan nilai: ";
                cin >> value;
                list.insertBelakang(value);
                cin.ignore(); // Membersihkan buffer input sebelum melanjutkan
                cin.get(); // Menunggu input dari pengguna sebelum melanjutkan
                system("clear"); 
                break;
            case 'd':
                list.deleteDepan();
                cin.ignore(); // Membersihkan buffer input sebelum melanjutkan
                cin.get(); // Menunggu input dari pengguna sebelum melanjutkan
                system("clear"); 
                break;
            case 'e':
                cout << "Masukkan posisi: ";
                cin >> position;
                list.deleteTengah(position);
                cin.ignore(); // Membersihkan buffer input sebelum melanjutkan
                cin.get(); // Menunggu input dari pengguna sebelum melanjutkan
                system("clear"); 
                break;
            case 'f':
                list.deleteBelakang();
                cin.ignore(); // Membersihkan buffer input sebelum melanjutkan
                cin.get(); // Menunggu input dari pengguna sebelum melanjutkan
                system("clear"); 
                break;
            case 'g':
                list.tampilkanData();
                cout << endl;
                cout << "Tekan tombol Enter untuk melanjutkan...";
                cin.ignore(); // Membersihkan buffer input sebelum melanjutkan
                cin.get(); // Menunggu input dari pengguna sebelum melanjutkan
                system("clear");
                break;
            case 'h':
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }

        
    } while (choice != 'h');

    return 0;
}