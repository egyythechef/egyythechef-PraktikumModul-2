import sys

angka_input = []
while len(angka_input) < 2:
    baris = sys.stdin.readline().split()
    angka_input.extend(baris)
r = float(angka_input[0])
t = float(angka_input[1])
PI = 3.142857
volume = PI * (r ** 2) * t
luas = 2 * PI * r * (r + t)
keliling = 2 * PI * r

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")