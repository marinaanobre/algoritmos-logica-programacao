import random
caracteres = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%&*?"
senha = ""

tamanho = int(input("Quantos caracteres deve ter a senha? "))
for x in range(0, tamanho):
    senha += random.choice(caracteres)

print(f"Senha gerada: {senha}")
