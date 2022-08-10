
n = int(input("How many numbers? "))

vet = [0 for x in range(n)]

for i in range(0, n):
    vet[i] = int(input("Type a number: "))

maior = vet[0]

for i in range(0, n):
    if vet[i] > maior:
        maior = vet[i]
        pos = i+1

print(f"Highest value: {maior:.2f}")
print(f"Position of highest value: {pos:.2f}")
