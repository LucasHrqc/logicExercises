
a = float(input("Digite o primeiro valor: "))
b = float(input("Digite o segundo valor: "))
c = float(input("Digite o terceiro valor: "))

if a < b and a < c:
    menor = a
elif b < c:
    menor = b
else:
    menor = c

print()
print(f"Menor valor: {menor:.2f}")
