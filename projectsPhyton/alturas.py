
n = int(input("How many people info are being typed? "))

nomes = [0 for x in range(n)]
idades = [0 for x in range(n)]
alturas = [0 for x in range(n)]

for i in range(0, n):
    print(f"Data of the {i+1} person: ")
    nomes[i] = str(input("Name: "))
    idades[i] = int(input("Age: "))
    alturas[i] = float(input("Height: "))

soma = 0
cont = 0
for i in range(0, n):
    soma = soma + alturas[i]
    if idades[i] < 16:
        cont = cont + 1

media = soma / n
percentual = cont / n * 100
print(f"Average Height: {media:.2f} m")
print(f"Percentage of people under 16 y.o.: {percentual:.1f} %")

for i in range(0, n):
    if idades[i] < 16:
        cont = cont + 1
        print(nomes[i])
