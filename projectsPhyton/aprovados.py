
n = int(input("How many students? "))

nomes = [0 for x in range(n)]
nota1 = [0 for x in range(n)]
nota2 = [0 for x in range(n)]


for i in range(0, n):
    print(f"Type the name, first and second grade of the {i+1} student: ")
    nomes[i] = str(input("Name: "))
    nota1[i] = float(input("First Grade: "))
    nota2[i] = float(input("Second Grade: "))

print("Approved Students: ")
for i in range(0, n):
    media = (nota1[i] + nota2[i]) / 2.0
    if media >= 6.0:
        print(f"{nomes[i]} ")
        print(f"{media:.1f}.")



