
n = int(input("What is the Array's size? "))

mat = [[0 for x in range(n)] for x in range(n)]

for i in range(0, n):
    for j in range(0, n):
        print(f"Element [{i},{j}]: ", end='')
        mat[i][j] = int(input())

print("Main diagonal: ")
for i in range(0, n):
    print(f"{mat[i][i]} ", end='')

cont = 0
for i in range(0, n):
    for j in range(0, n):
        if mat[i][j] < 0:
            cont = cont + 1

print()
print(f"Number of negative values: {cont:.1f}")