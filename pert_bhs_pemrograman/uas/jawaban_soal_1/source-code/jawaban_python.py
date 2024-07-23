def factorial(n):
    # Basis kasus: jika n adalah 1 atau 0, kembalikan 1
    if n == 1 or n == 0:
        return 1
    # Rekursif kasus: kalikan n dengan faktorial dari (n-1)
    else:
        result = n * factorial(n - 1)
        print(f"{n} * factorial({n - 1}) = {result}")
        return result

# Contoh penggunaan
print(factorial(5))  # Output: 120
