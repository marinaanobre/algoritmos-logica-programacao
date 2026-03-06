# Faça um programa que leia dois números inteiros ( em qualquer ordem ) e imprima a soma dos números ímpares entre eles.

x = int(input("digite o primeiro numero: "))
y = int(input("digite o segundo numero: "))

if x > y:
    troca = x
    x = y
    y = troca

soma = 0

for i in range(x+1, y):
    if i % 2 != 0:
        soma = soma + i

print(f"Soma dos impares = {soma}")

