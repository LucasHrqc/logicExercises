
cod = int(input("What is the code (1, 2, 3 or 4 to leave)? "))

conta = 0
contg = 0
contd = 0

while cod != 4:
    if cod == 1:
        conta = conta + 1
    elif cod == 2:
        contg = contg + 1
    elif cod == 3:
        contd = contd + 1
    else:
        print("Invalid code! Try again ")
    cod = int(input("Inform a code (1, 2, 3 or 4 to leave): "))

print()
print("Muito obrigado!")
print(f"Alcool: {conta}")
print(f"Gasolina: {contg}")
print(f"Diesel: {contd}")

