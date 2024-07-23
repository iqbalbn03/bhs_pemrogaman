import tkinter as tk

# Membuat instance dari Tk
root = tk.Tk()

# Mengatur judul jendela
root.title("Hello, World!")

# Membuat label dengan teks "Hello, World!"
label = tk.Label(root, text="Hello, World!")

# Menempatkan label ke dalam jendela
label.pack()

# Menjalankan aplikasi
root.mainloop()
