
print("Digite as idades: ")
idade = int(input())

if idade < 0:
    print("Impossível calcular!")

soma = 0
cont = 0
while idade > 0:
    soma = soma + idade
    cont = cont + 1
    idade = int(input())

media = soma / cont

print(f"Média das idades: {media:.1f}.")