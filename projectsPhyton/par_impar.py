
n = int(input("Quantos números serão digitados? "))

for i in range(0, n):
    x = int(input("Digite um número: "))

    if x > 0:
        if x % 2 != 0:
            print("Ímpar positivo!")
        else:
            print("Par positivo!")
    elif x < 0:
        if x % 2 != 0:
            print("Ímpar negativo!")
        else:
            print("Par negativo!")
    else:
        print("Nulo!")

print()
print("Obrigado! Fim")