#include "include.h"
#include <fstream>

const char* hostname = "127.0.0.1";
const char* user = "root";
const char* pass = "123";
const char* dbname = "perpustakaan";
unsigned int port = 31235;
const char* unixsocket = NULL;
unsigned long clientflag = 0;

MYSQL* connect_db() {
    MYSQL* conn = mysql_init(0);
    if (conn) {
        conn = mysql_real_connect(conn, hostname, user, pass, dbname, port, unixsocket, clientflag);
    } 
    return conn;
}

bool login_pustakawan(const string& username, const string& password) {
    MYSQL* conn = connect_db();
    if (conn) {
        stringstream query;
        query << "SELECT * FROM pustakawan WHERE username = '" << username << "' AND password = '" << password << "'";
        if (mysql_query(conn, query.str().c_str())) {
            cerr << "Login gagal: " << mysql_error(conn) << endl;
            mysql_close(conn);
            return false;
        }

        MYSQL_RES* res = mysql_store_result(conn);
        bool logged_in = mysql_num_rows(res) > 0;
        mysql_free_result(res);
        mysql_close(conn);
        return logged_in;
    }
    return false;
}

bool login_mahasiswa(const string& nim) {
    MYSQL* conn = connect_db();
    if (!conn) {
        cerr << "Gagal terhubung ke database." << endl;
        return false;
    }

    stringstream query;
    query << "SELECT nama FROM mahasiswa WHERE nim = '" << nim << "'";

    if (mysql_query(conn, query.str().c_str())) {
        cerr << "Query gagal: " << mysql_error(conn) << endl;
        mysql_close(conn);
        return false;
    }

    MYSQL_RES* res = mysql_store_result(conn);
    if (!res) {
        cerr << "mysql_store_result gagal: " << mysql_error(conn) << endl;
        mysql_close(conn);
        return false;
    }

    bool logged_in = mysql_num_rows(res) > 0;
    if (logged_in) {
        MYSQL_ROW row = mysql_fetch_row(res);
        cout << "Login Berhasil! Hallo: " << row[0] << endl;
    }

    mysql_free_result(res);
    mysql_close(conn);
    return logged_in;
}


void log_activity(const string& activity) {
    ofstream logfile("activity.log", ios_base::app);
    if (logfile.is_open()) {
        logfile << activity << endl;
        logfile.close();
    } else {
        cerr << "Tidak dapat membuka file log." << endl;
    }
}

void tambah_buku() {
    system("clear");
    string judul_buku, penulis, tahun_terbit, genre_buku;
    cout << "judul buku     : ";
    cin.ignore();
    getline(cin, judul_buku);
    cout << "penulis        : ";
    getline(cin, penulis);
    cout << "tahun terbit   : ";
    getline(cin, tahun_terbit);
    cout << "genre buku     : ";
    getline(cin, genre_buku);

    MYSQL *conn = connect_db();
    if (conn) {
        stringstream query;
        query << "INSERT INTO buku (judul_buku, penulis, tahun_terbit, genre_buku) VALUES ('"
              << judul_buku << "', '" << penulis << "', '" << tahun_terbit << "', '" << genre_buku << "')";
        if (mysql_query(conn, query.str().c_str()) == 0) {
            cout << "\nBuku berhasil ditambahkan." << endl;
            log_activity("Buku ditambahkan: " + judul_buku);
        } else {
            cerr << "INSERT failed: " << mysql_error(conn) << endl;
        }
        mysql_close(conn);
    }
}

void tampilkan_buku() {
    MYSQL* conn = connect_db();
    if (conn) {
        if (mysql_query(conn, "SELECT * FROM buku")) {
            cerr << "SELECT gagal: " << mysql_error(conn) << endl;
            mysql_close(conn);
            return;
        }

        MYSQL_RES* res = mysql_store_result(conn);
        if (res == nullptr) {
            cerr << "mysql_store_result gagal: " << mysql_error(conn) << endl;
            mysql_close(conn);
            return;
        }

        MYSQL_ROW row;
        while ((row = mysql_fetch_row(res))) {
            cout << "ID: " << row[0] << ", Judul: " << row[1] << ", Penulis: " << row[2] << ", Genre: " << row[3] << ", tahun terbit: " << row[4] << endl;
        }

        mysql_free_result(res);
        mysql_close(conn);
    }
}

void perbarui_buku(int id_buku, const string& judul_buku, const string& penulis, const string& genre_buku, const string& tahun_terbit) {
    MYSQL* conn = connect_db();
    if (conn) {
        stringstream query;
        query << "UPDATE buku SET judul_buku = '" << judul_buku << "', penulis = '" << penulis << "', genre_buku = '" << genre_buku << "', tahun_terbit = '" << tahun_terbit << "' WHERE id = " << id_buku;
        if (mysql_query(conn, query.str().c_str())) {
            cerr << "UPDATE gagal: " << mysql_error(conn) << endl;
        } else {
            cout << "Buku berhasil diperbarui." << endl;
        }
        mysql_close(conn);
    }
}

void hapus_buku(int id_buku) {
    MYSQL* conn = connect_db();
    if (conn) {
        stringstream query;
        query << "DELETE FROM buku WHERE id = " << id_buku;
        if (mysql_query(conn, query.str().c_str())) {
            cerr << "DELETE gagal: " << mysql_error(conn) << endl;
        } else {
            cout << "Buku berhasil dihapus." << endl;
        }
        mysql_close(conn);
    }
}
