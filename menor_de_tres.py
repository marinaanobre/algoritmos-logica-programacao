# Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três números lidos. Em caso de empate, mostrar apenas uma vez.

num1 = float(input("Digite o primeiro numero: "))
num2 = float(input("Digite o segundo numero: "))
num3 = float (input("Digite o terceiro numero: "))

if num1 < num2 and num1 < num3:
    menor = num1
elif num2 < num3:
    menor = num2
else:
    menor = num3

print(f"O menor numero e: {menor}")