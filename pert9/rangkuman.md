# Rangkuman Pertemuan 9

**Nama : Muhamad Iqbal Al Kautsar**

**Nim : 20230801032**

### Array
Array adalah struktur data yang terdiri dari elemen-elemen yang memiliki tipe data yang sama, disimpan dalam lokasi memori yang berurutan. Array memungkinkan akses cepat ke elemen-elemennya melalui indeks. Contoh penggunaan array termasuk menyimpan daftar angka, nama, atau objek lain yang memiliki tipe data yang sama.

### Set
Set adalah koleksi data yang tidak berurutan (unordered), tidak dapat diubah (unchangeable), dan tidak mengandung elemen duplikat (no duplicate). Berikut adalah beberapa operasi dan fungsi yang dapat dilakukan pada set:

1. **Menambah/Memperbarui Elemen Set**:
   - Untuk menambah elemen ke dalam set, digunakan metode `add()`.
   - Contoh: `set1.add('elemen')`
   - Untuk memperbarui set dengan beberapa elemen, digunakan metode `update()`.
   - Contoh: `set1.update(['elemen1', 'elemen2'])`

2. **Menghapus/Menghilangkan Elemen Set**:
   - Untuk menghapus elemen tertentu dari set, digunakan metode `remove()` atau `discard()`.
   - Contoh: `set1.remove('elemen')`
   - Metode `discard()` tidak akan menimbulkan error jika elemen tidak ditemukan dalam set.
   - Untuk menghapus dan mengembalikan elemen acak dari set, digunakan metode `pop()`.
   - Contoh: `set1.pop()`
   - Untuk mengosongkan set, digunakan metode `clear()`.
   - Contoh: `set1.clear()`

3. Dalam Python, set adalah koleksi yang tidak berurutan, tidak dapat diubah, dan tidak mengandung elemen duplikat. Set memiliki berbagai fungsi bawaan yang berguna untuk melakukan operasi pada set. Berikut adalah daftar fungsi dan metode set beserta kegunaannya:

### Fungsi dan Metode Set Beserta Kegunaannya

1. **add()**:
   - **Kegunaan**: Menambah elemen ke dalam set.
   - **Contoh**: `s.add(4)`

2. **update()**:
   - **Kegunaan**: Memperbarui set dengan beberapa elemen baru.
   - **Contoh**: `s.update([5, 6, 7])`

3. **remove()**:
   - **Kegunaan**: Menghapus elemen dari set; menimbulkan error jika elemen tidak ditemukan.
   - **Contoh**: `s.remove(3)`

4. **discard()**:
   - **Kegunaan**: Menghapus elemen dari set; tidak menimbulkan error jika elemen tidak ditemukan.
   - **Contoh**: `s.discard(3)`

5. **pop()**:
   - **Kegunaan**: Menghapus dan mengembalikan elemen acak dari set.
   - **Contoh**: `s.pop()`

6. **clear()**:
   - **Kegunaan**: Menghapus semua elemen dari set.
   - **Contoh**: `s.clear()`

7. **union()**:
   - **Kegunaan**: Mengembalikan set yang merupakan gabungan dari dua set.
   - **Contoh**: `s.union({8, 9})`

8. **intersection()**:
   - **Kegunaan**: Mengembalikan set yang merupakan irisan dari dua set.
   - **Contoh**: `s.intersection({2, 3, 4})`

9. **difference()**:
   - **Kegunaan**: Mengembalikan set yang merupakan selisih antara dua set.
   - **Contoh**: `s.difference({2, 3})`

10. **symmetric_difference()**:
    - **Kegunaan**: Mengembalikan set yang merupakan selisih simetris antara dua set.
    - **Contoh**: `s.symmetric_difference({3, 4, 5})`

11. **issubset()**:
    - **Kegunaan**: Memeriksa apakah semua elemen set ada dalam set lain.
    - **Contoh**: `s.issubset({1, 2, 3, 4})`

12. **issuperset()**:
    - **Kegunaan**: Memeriksa apakah semua elemen set lain ada dalam set ini.
    - **Contoh**: `s.issuperset({1, 2})`

13. **isdisjoint()**:
    - **Kegunaan**: Memeriksa apakah dua set tidak memiliki elemen yang sama.
    - **Contoh**: `s.isdisjoint({5, 6})`

14. **copy()**:
    - **Kegunaan**: Mengembalikan salinan dari set.
    - **Contoh**: `s_copy = s.copy()`

15. **len()**:
    - **Kegunaan**: Mengembalikan jumlah elemen dalam set.
    - **Contoh**: `len(s)`

16. **in**:
    - **Kegunaan**: Memeriksa apakah elemen ada dalam set.
    - **Contoh**: `4 in s`

17. **not in**:
    - **Kegunaan**: Memeriksa apakah elemen tidak ada dalam set.
    - **Contoh**: `5 not in s`




### Dictionary
Dictionary adalah koleksi data yang menyimpan pasangan kunci-nilai (key-value pairs). Setiap kunci harus unik dan dapat digunakan untuk mengakses nilai yang terkait. Berikut adalah beberapa operasi dan fungsi yang dapat dilakukan pada dictionary:

1. **Membuat Elemen Dictionary**:
   - Dictionary dapat dibuat dengan menggunakan kurung kurawal `{}` dan pasangan kunci-nilai dipisahkan oleh koma.
   - Contoh: `dict1 = {'kunci1': 'nilai1', 'kunci2': 'nilai2'}`

2. **Menambah/Memperbarui Elemen Dictionary**:
   - Untuk menambah atau memperbarui elemen dalam dictionary, cukup menggunakan tanda kurung siku `[]`.
   - Contoh: `dict1['kunci3'] = 'nilai3'`

3. **Menghapus Elemen Dictionary**:
   - Untuk menghapus elemen tertentu, digunakan metode `pop()` atau `del`.
   - Contoh: `dict1.pop('kunci1')` atau `del dict1['kunci1']`
   - Untuk menghapus semua elemen dalam dictionary, digunakan metode `clear()`.
   - Contoh: `dict1.clear()`

4. **Operator Keanggotaan**:
   - `in` digunakan untuk memeriksa apakah suatu kunci ada dalam dictionary.
   - Contoh: `'kunci1' in dict1`



5. **Fungsi dan Metode Dictionary**:

1. **all()**
   - **Kegunaan**: Mengembalikan `True` jika semua elemen dalam iterable adalah `True` atau jika iterable kosong.

2. **any()**
   - **Kegunaan**: Mengembalikan `True` jika ada setidaknya satu elemen dalam iterable yang `True`. Jika iterable kosong, mengembalikan `False`.

3. **len()**
   - **Kegunaan**: Mengembalikan jumlah item dalam dictionary.

4. **cmp()** (tidak tersedia di Python 3)
   - **Kegunaan**: Membandingkan dua objek dan mengembalikan nilai integer berdasarkan perbandingan (`< 0` jika x < y, `0` jika x == y, `> 0` jika x > y). Alternatif untuk Python 3 dapat menggunakan `functools.cmp_to_key`.

5. **sorted()**
   - **Kegunaan**: Mengembalikan daftar baru dari item dictionary yang diurutkan berdasarkan kunci atau nilai.


tiga properti utama dari dictionary:

### Rangkuman Properti Dictionary

1. **Unordered (Tidak Berurutan)**
   - **Definisi**: Item dalam dictionary tidak memiliki urutan tetap.
   - **Penjelasan**: Akses item dalam dictionary berdasarkan kunci, bukan posisi. Urutan penyimpanan item tidak dijamin tetap sama.

2. **Changeable (Mutable)**
   - **Definisi**: Isi dari dictionary dapat diubah setelah dibuat.
   - **Penjelasan**: dapat menambah, memperbarui, atau menghapus item dalam dictionary setelah membuatnya. Ini memberikan fleksibilitas untuk mengelola data secara dinamis.

3. **Unique Keys (Kunci Unik)**
   - **Definisi**: Setiap kunci dalam dictionary harus unik.
   - **Penjelasan**: Tidak boleh ada dua item dengan kunci yang sama. Jika kunci yang sudah ada ditambahkan kembali dengan nilai baru, nilai lama akan diperbarui dengan yang baru.














