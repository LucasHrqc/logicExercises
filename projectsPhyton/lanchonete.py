
cod = float(input("Digite o código do produto: "))
qtd = float(input("Digite a quantidade a ser comprada: "))

valor = 0

if cod == 1:
    valor = qtd * 5.0
elif cod == 2:
    valor = qtd * 3.5
elif cod == 3:
    valor = qtd * 4.8
elif cod == 4:
    valor = qtd * 8.90
elif cod == 5:
    valor = qtd * 7.32
else:
    print("Valor invalido!")

print(f"Valor total a ser pago: R${valor:.2f}")


