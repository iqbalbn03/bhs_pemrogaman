#ifndef INCLUDE_H
#define INCLUDE_H

#include <iostream>
#include <mysql/mysql.h>
#include <sstream>

using namespace std;

MYSQL* connect_db();
bool login_pustakawan(const string& username, const string& password);
bool login_mahasiswa(const string& nim);

void tambah_buku();
void tampilkan_buku();
void perbarui_buku(int id_buku, const string& judul_buku, const string& penulis, const string& genre_buku, const string& tahun_terbit);
void hapus_buku(int id_buku);
void log_activity(const string& activity);

#endif // INCLUDE_H
