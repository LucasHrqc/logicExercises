
n = int(input("How many numbers are typing? "))

vet = [0 for x in range(n)]

for i in range(0, n):
    vet[i] = float(input("Type a number: "))

soma = 0
for i in range(0, n):
    soma = soma + vet[i]

print()
print("Vector values: ", end='')
for i in range(0, n):
    print(f"{vet[i]:.1f} ", end='')

media = soma / n

print()
print(f"Sum of vector values: {soma:.1f}")
print(f"Average of all vector values: {media:.1f}")