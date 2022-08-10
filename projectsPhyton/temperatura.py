
e = str(input("Qual a escala desejada (C/F)? "))

if e == 'C' or e == 'c':
    T = float(input("Digite a temperatura em Celsius: "))
    Tf = T * 9 / 5 + 32
    print(f"Temperatura equivalente em Fahrenheit: {Tf:.2f}")
else:
    T = float(input("Digite a temperatura em Fahrenheit: "))
    Tc = 5 / 9 * (T - 32)
    print(f"Temperatura equivalente em Celsius: {Tc:.2f}")



