Program ini memanfaatkan struktur data tumpukan (`stack`) dalam bahasa pemrograman C++. Tumpukan adalah struktur data linear yang mengikuti prinsip "Last In, First Out" (LIFO), yang berarti elemen terakhir yang dimasukkan ke dalam tumpukan adalah elemen pertama yang akan dikeluarkan. Program ini juga menggunakan pemanfaatan `stack` dalam string.

Berikut adalah penjelasan cara program ini memanfaatkan tumpukan:

1. **Deklarasi Tumpukan**: Program menggunakan `std::stack` untuk mendeklarasikan tumpukan buku dengan tipe elemen `Book`. Tumpukan buku ini akan menyimpan buku-buku yang dimasukkan oleh pengguna.

    ```cpp
    stack<Book> bookStack; // Tumpukan buku
    ```

2. **Menambahkan Buku ke Tumpukan (Push)**: Ketika pengguna memilih opsi "Push", program meminta pengguna untuk memasukkan detail buku baru, yaitu judul, penulis, dan tahun terbit. Setelah detail buku dimasukkan, buku tersebut ditambahkan ke dalam tumpukan menggunakan operasi `push`.

3. **Menghapus Buku dari Tumpukan (Pop)**: Jika pengguna memilih opsi "Pop", program memeriksa apakah tumpukan buku kosong. Jika tumpukan tidak kosong, program menghapus buku paling atas dari tumpukan menggunakan operasi `pop`.

4. **Melihat Buku Paling Atas (Peek)**: Ketika pengguna memilih opsi "Peek", program memeriksa apakah tumpukan buku kosong. Jika tidak kosong, program menampilkan detail buku paling atas di tumpukan tanpa menghapusnya dari tumpukan.

5. **Memeriksa Apakah Tumpukan Kosong (isEmpty)**: Opsi "isEmpty" digunakan untuk memeriksa apakah tumpukan buku kosong. Program mencetak pesan yang sesuai tergantung pada kondisi tumpukan.

6. **Melihat Jumlah Buku dalam Tumpukan (Size)**: Opsi "Size" digunakan untuk menampilkan jumlah buku yang ada dalam tumpukan menggunakan fungsi `size()` dari tumpukan.

7. **Membersihkan Layar Konsol (Clear)**: Program membersihkan layar konsol menggunakan perintah `system("clear")` untuk lingkungan Linux/WSL atau `system("cls")` untuk lingkungan Windows setelah setiap operasi, sehingga antarmuka pengguna tetap bersih.

Program ini menggabungkan konsep tumpukan dengan antarmuka pengguna konsol untuk memberikan pengalaman sederhana dalam mengelola kumpulan buku. Pengguna dapat menambahkan, menghapus, dan melihat buku-buku dalam tumpukan dengan mudah menggunakan opsi yang disediakan.