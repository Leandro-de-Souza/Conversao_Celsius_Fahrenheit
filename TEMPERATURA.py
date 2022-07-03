
escala = input("Voce vai digitar a temperatura em qual escala (C/F)? ")

if escala == 'F':
    tempF = float(input("Digite a temperatura em Fahrenheit: "))

    tempC = 5 / 9 * (tempF - 32)

    print(f"Temperatura equivalente em Celsius: {tempC:.2f}")
else:
    escala == 'C'
    tempC = float(input("Digite a temperatura em Celsius: "))

    tempF = (tempC * 9 / 5) + 32

    print(f"Temperatura equivalente em Fahrenheit: {tempF:.2f}")


