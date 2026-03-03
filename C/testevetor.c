// Fazer um programa para ler um número inteiro positivo N (máximo = 10), depois ler N números quaisquer e armazená-los em um vetor. Em seguida, mostrar na tela todos elementos do vetor.

#include <stdio.h>

int main(){
	int n;
	int i;
	float numeros[10];
	
	printf("Quantos numeros voce vai digitar?(max:10): ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("digite um numero: ");
		scanf("%f", &numeros[i]);
	}
	
	printf("numeros digitados: ");
	for(i = 0; i < n; i++){
		printf("%.2f\n", numeros[i]);
	}
}
