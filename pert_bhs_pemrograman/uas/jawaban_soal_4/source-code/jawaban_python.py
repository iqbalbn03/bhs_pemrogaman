import sqlite3

# Membuat koneksi ke database SQLite
conn = sqlite3.connect('example.db')
cursor = conn.cursor()

# Membuat tabel
cursor.execute('''CREATE TABLE IF NOT EXISTS users (id INTEGER PRIMARY KEY, name TEXT, age INTEGER)''')

# Menyisipkan data
cursor.execute("INSERT INTO users (name, age) VALUES (?, ?)", ('Alice', 25))
conn.commit()  # Menyimpan perubahan

# Mengambil data
cursor.execute("SELECT * FROM users")
rows = cursor.fetchall()
for row in rows:
    print(row)

# Menutup koneksi
conn.close()
