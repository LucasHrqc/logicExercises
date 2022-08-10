
m = int(input("Enter the number of lines: "))
n = int(input("Enter the number of columns: "))

mat = [[0 for x in range(n)] for x in range(m)]

for i in range(0, m):
    print(f"Type the numbers of the {i+1} line:")
    for j in range(0, n):
        mat[i][j] = float(input())

print("Final Vector: ")
for i in range(0, m):
    soma = 0
    for j in range(0, n):
        soma = soma + mat[i][j]
    print(f"{soma}")

