
n = int(input("Digite a ordem da matriz: "))

mat = [[0 for x in range(n)] for x in range(n)]

for i in range(0, n):
    for j in range(0, n):
        mat[i][j] = float(input(f"Elemento [{i},{j}]: "))

soma = 0
for i in range(0, n):
    for j in range(0, n):
        if mat[i][j] > 0:
            soma = soma + mat[i][j]

print()
print(f"Soma dos elementos positivos: {soma:.1f}")

print()
l = int(input("Escolha uma linha: "))
for j in range(0, n):
    print(f"{mat[l][j]} ", end="")

print()
print()
c = int(input("Escolha uma coluna: "))
for i in range(0, n):
    print(f"{mat[i][c]} ", end="")

print()
print()
print("Diagonal Principal: ", end="")
for i in range(0, n):
    print(f"{mat[i][i]} ", end="")

for i in range(0, n):
    for j in range(0, n):
        if mat[i][j] < 0:
            mat[i][j] = mat[i][j]**2

print()
print()
print("Matriz alterada: ")
for i in range(0, n):
    for j in range(0, n):
        print(f"{mat[i][j]} ", end="")
    print()
