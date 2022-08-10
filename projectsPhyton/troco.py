
precoun = float(input("Digite o valor unitário do produto: "))
qtd = int(input("Digite a quantidade comprada do produto: "))
pago = float(input("Dinheiro recebido: "))

troco = pago - precoun*qtd

print()
if troco < 0:
    troco = precoun * qtd - pago
    print(f"Faltou {troco:.2f}")
else:
    print(f"Troco {troco:.2f}")

