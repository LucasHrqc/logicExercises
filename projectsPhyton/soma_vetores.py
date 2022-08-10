
n = int(input("How many values will each array have? "))

veta = [0 for x in range(n)]
vetb = [0 for x in range(n)]
vetc = [0 for x in range(n)]

print("Type the values of Array A: ")
for i in range(0, n):
    veta[i] = float(input())

print("Type the values of Array B: ")
for i in range(0, n):
    vetb[i] = float(input())

for i in range(0, n):
    vetc[i] = veta[i] + vetb[i]

print()
print("Resulted Array: ")
for i in range(0, n):
    print(f"{vetc[i]}")

