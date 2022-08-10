import math

base = float(input("Base do retângulo: "))
altura = float(input("Altura do retângulo: "))

area = base * altura / 2.0
perimetro = base ** 2 + altura ** 2
diagonal = math.sqrt(base**2 + altura**2)

print()
print(f"Área do retângulo: {area:.1f}")
print(f"Perímetro do retângulo: {perimetro:.1f}")
print(f"Diagonal do retângulo: {diagonal:.1f}")

