
n = int(input("Quantity of products: "))

produto = [0 for x in range(n)]
pcompra = [0 for x in range(n)]
pvenda = [0 for x in range(n)]

for i in range(0, n):
    print(f"Product {i+1}: ")
    produto[i] = str(input("Name: "))
    pcompra[i] = float(input("Buying Price: "))
    pvenda[i] = float(input("Selling Price: "))

vtcompra = 0
vtvenda = 0
for i in range(0, n):
    vtcompra = vtcompra + pcompra[i]
    vtvenda = vtvenda + pvenda[i]

lucro = vtvenda - vtcompra

cont1 = 0
cont12 = 0
cont2 = 0

for i in range(0, n):
    l = pvenda[i] / pcompra[i] - 1
    if l < 0.1:
        cont1 = cont1 + 1
    elif l < 0.2:
        cont12 = cont12 + 1
    else:
        cont2 = cont2 + 1

print()
print("Final Report: ")
print(f"Profit under 10%: {cont1:.1f}")
print(f"Profit between 10% and 20%: {cont12:.1f}")
print(f"Profit above 20%: {cont2:.1f}")
print(f"Total buying price: R${vtcompra:.2f}")
print(f"Total selling price: R${vtvenda:.2f}")
print(f"Total profit: R${lucro:.2f}")
