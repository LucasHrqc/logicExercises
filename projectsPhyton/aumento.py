
salario = float(input("Digite o salário da pessoa: "))

if salario <=1000:
    por100to = 20.0
elif salario <=3000:
    por100to = 15.0
elif salario <= 8000:
    por100to = 10.0
else:
    por100to = 5.0

aumento = salario * por100to / 100
nf = salario + aumento

print()
print(f"Novo salário será de: R${nf:.2f}")
print(f"O aumento será de: R${aumento:.2f}")
print(f"Porcentagem de aumento é de: {por100to:.2f}%")