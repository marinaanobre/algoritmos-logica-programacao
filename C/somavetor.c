// Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida: imprimir todos os elementos do vetor; mostrar na tela a soma e a média dos elementos do vetor.
#include <stdio.h>

int main(){
	int n;
	int i;
	float numeros[100];
	float soma;
	float media;
	
	printf("Quantos numeros voce vai digitar?: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("Digite um numero: ");
		scanf("%f", &numeros[i]);
	}
	
	printf("Valores: ");
	for(i = 0; i < n; i++){
			printf("%.2f\n", numeros[i]);
		}
	
	for(i = 0; i < n; i++){
		soma = soma + numeros[i];
	}
	printf("Soma: %.2f\n", soma);
	
	for(i = 0; i < n; i++){
		media = soma / n;
	}
	printf("Media: %.2f\n", media);
}
