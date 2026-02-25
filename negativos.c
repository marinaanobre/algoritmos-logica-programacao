// Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.
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
	
	printf("numeros negativos: ");
	for(i = 0; i < n; i++){
		if(numeros[i] < 0){
			printf("%.2f\n", numeros[i]);
		}
	}
}
