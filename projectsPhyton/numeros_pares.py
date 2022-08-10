
n = int(input("How many numbers? "))

vet = [0 for x in range(n)]

for i in range(0, n):
    vet[i] = int(input("Type a number: "))

print()
print("Number of evens: ")
cont = 0
for i in range(0, n):
    if vet[i] % 2 == 0:
        cont = cont + 1
        print(f"{vet[i]:.1f} ", end='')

print()
print()
print(f"Quantity of evens: {cont:.1f}.")