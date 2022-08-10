
n = int(input("Qual a ordem da matriz? "))

mat = [[0 for x in range(n)] for x in range(n)]

for i in range(0, n):
    for j in range(0, n):
        mat[i][j] = float(input(f"Elemento [{i},{j}]: "))

print()
print("Maior elemento de cada linha: ")
for i in range(0, n):
    maior = mat[i][0]
    for j in range(0, n):
        if mat[i][j] > maior:
            maior = mat[i][j]
    print(f"{maior:.1f}")
