
n = int(input("Number of experiments done: "))

total = 0
coelhos = 0
ratos = 0
sapos = 0

for i in range(0, n):
    qtd = int(input("Quantity of Research Subjects: "))
    total = total + qtd
    tipoc = input("Type of Research Subjects (C, R ou S): ")
    if tipoc == 'C' or tipoc == 'c':
        coelhos = coelhos + qtd
    elif tipoc == 'R' or tipoc == 'r':
        ratos = ratos + qtd
    elif tipoc == 'S' or tipoc == 's':
        sapos = sapos + qtd
    else:
        print("Invalid type, restart.")

pc = coelhos / total * 100
pr = ratos / total * 100
ps = sapos / total * 100

print()
print("Final Report: ")
print(f"Total of Research Subjects: {total}")
print(f"Total of Rabbits: {coelhos}")
print(f"Total of Rats: {ratos}")
print(f"Total of Frogs: {sapos}")
print(f"Percentage of Rabbits: {pc:.2f}%")
print(f"Percentage of Rats: {pr:.2f}%")
print(f"Percentage of Frogs: {ps:.2f}%")