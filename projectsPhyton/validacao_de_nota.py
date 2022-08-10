
nota1 = float(input("Enter the first grade: "))

while (nota1 < 0) or (nota1 > 10):
    nota1 = float(input("Invalid Value. Try again: "))


nota2 = float(input("Enter the second grade: "))
while (nota2 < 0) or (nota2 > 10):
    nota2 = float(input("Invalid Value. Try again: "))

media = (nota1 + nota2) / 2.0

print(f"Média semestral: {media:.2f}.")