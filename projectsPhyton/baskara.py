import math
a = float(input("Digite o coeficiente A: "))
b = float(input("Digite o coeficiente B: "))
c = float(input("Digite o coeficiente C: "))

delta = b**2 - 4 * a * c

if delta < 0 or a == 0:
    print()
    print("Esta equação não apresenta raízes reais!")
else:
    x1 = (- b + math.sqrt(delta)) / (2.0 * a)
    x2 = (- b - math.sqrt(delta)) / (2.0 * a)
    print()
    print(f"X1: {x1:.4f}")
    print(f"X2: {x2:.4f}")




