
n = int(input("Qual a ordem da matriz? "))

mat = [[0 for x in range(n)] for x in range(n)]

for i in range(0, n):
    for j in range(0, n):
        mat[i][j] = float(input(f"Elemento [{i},{j}]: "))

soma = 0
for i in range(0, n):
    for j in range(i+1, n):
        soma = soma + mat[i][j]

print(f"Soma dos elemntos acima da diagonal principal: {soma:.1f}")
