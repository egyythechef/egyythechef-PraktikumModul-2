import sys
import math

angka_input = []

while len(angka_input) < 2:
    baris = sys.stdin.readline().split()
    angka_input.extend(baris)

a = float(angka_input[0])
b = float(angka_input[1])

c =  math.sqrt((b ** 2) - (a ** 2))
keliling = a + c + b
luas = 0.5 * c * a

print(f"")
print(f"Alas = {int(c)} cm")
print(f"Tinggi = {int(a)} cm")
print(f"Keliling = {int(keliling)} cm")
print(f"Luas = {int(luas)} cm^2")