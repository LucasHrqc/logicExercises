
largura = float(input("Digite a largura do terreno: "))
comprimento = float(input("Digite o comprimento do terreno: "))
valor = float(input("Digite o valor do metro quadrado: "))

area = largura * comprimento
preco = area * valor

print(f"Área do terreno: {area:.2f}")
print(f"Preço do terreno: R${preco:.2f}")
