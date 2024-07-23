try:
    # Blok kode yang mungkin menghasilkan kesalahan
    angka = int(input("Masukkan sebuah angka: "))
    hasil = 10 / angka
    print("Hasil pembagian: ", hasil)
except ZeroDivisionError:
    # Menangani kesalahan jika pembagian dengan nol
    print("Error: Pembagian dengan nol tidak diperbolehkan.")
except ValueError:
    # Menangani kesalahan jika input tidak valid (bukan angka)
    print("Error: Input tidak valid. Harus berupa angka.")
finally:
    # Blok kode yang akan selalu dijalankan, baik terjadi kesalahan atau tidak
    print("Terima kasih telah menggunakan program ini.")
