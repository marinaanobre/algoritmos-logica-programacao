//Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". 
//Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a senha correta é o valor 2002.

#include<stdio.h>

int main(){
	int senha;
	
	printf("digite sua senha: ");
	scanf("%d", &senha);
	
	while( senha != 2002 ){
		printf("Senha invalida! Tente novamente:\n ");
		scanf("%d", &senha);
		system("cls");
	}
	
	printf("Acesso permitido!");
	
	return 0;
	
	}

