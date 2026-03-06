# Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida: Imprimir todos os elementos do vetor e mostrar na tela a soma e a média dos elementos do vetor

soma = 0

n = int(input("Quantos numeros voce vai digitar? "))
vet = [ 0 for x in range (n)]

for i in range (0, n):
    vet[i] = int(input("Digite um numero: "))

for i in range (0, n):
    soma = soma + vet[i]

media = soma / n 

print(f"Valores: ")
for i in range(0, n):
    print(vet[i])

print(f"Soma: {soma}")
print(f"Media: {media}")

