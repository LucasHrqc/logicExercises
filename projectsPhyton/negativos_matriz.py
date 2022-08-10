
m = int(input("Digite o número de linhas da matriz: "))
n = int(input("Digite o número de colunas da matriz: "))

mat = [[0 for x in range(n)] for x in range(m)]

for i in range(0, m):
    for j in range(0, n):
        mat[i][j] = float(input(f"Elemento [{i},{j}]: "))

print("Valores negativos: ")
for i in range(0, m):
    for j in range(0, n):
        if mat[i][j] < 0:
            print(f"{mat[i][j]}")

