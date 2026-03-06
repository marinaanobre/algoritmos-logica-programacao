# Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor da área, perímetro e diagonal destasretângulo, com quatro casas decimais, conforme exemplos.

import math

base: float
altura: float

base = float(input("Valor da base do retângulo: "))
altura = float(input("Valor da altura do retângulo: "))

area = base * altura
perimetro = 2 * base + 2 * altura
diagonal = math.sqrt(base ** 2 + altura ** 2)

print(f"area: {area:.4f}")
print(f"perimetro: {perimetro:.4f}")
print(f"diagonal: {diagonal:.4f}")