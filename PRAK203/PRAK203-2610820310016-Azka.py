angka = []

while len(angka) < 6:
    angka.extend(map(float, input().split()))

a, b, i, j, x, y = angka

hasil = (a - b) * i / j - (x + y)

print(f"{hasil:.3f}")