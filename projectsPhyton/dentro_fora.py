
n = int(input("Quantos números você digitará? "))

contf = 0
contd = 0
for i in range(0, n):
    x = int(input("Digite um número: "))
    if x < 10 or x > 20:
        contf = contf + 1
    else:
        contd = contd + 1

print(f"Números dentro do intervalo: {contd}")
print(f"Números fora do intervalo: {contf}")
