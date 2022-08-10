
n = int(input("How many numbers are you typing? "))

vet = [0 for x in range(n)]

for i in range(0, n):
    vet[i] = float(input("Type a number: "))

print()
print("Negative numbers:")
for i in range(0, n):
    if vet[i] < 0:
        print(f"{vet[i]:.1f}")

