
nome = str(input("Digite o nome do funcionário: "))
valorh = float(input("Digite o valor pago por hora: R$"))
qtdh = float(input("Digite a quantidade de horas trabalhadas: "))

salario = valorh * qtdh

print()
print(f"O pagamento de {nome} deve ser de R${salario:.2f}.")

