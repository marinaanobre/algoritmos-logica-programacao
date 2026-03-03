// Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na tela todos os números pares, e também a quantidade de números pares.

#include<stdio.h>

int main(){
	int n;
	int i;
	int vet[100];
	int quantpares = 0;
	
	printf("Quantos numeros voce vai digitar? ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("Digite um numero: ");
		scanf("%d", &vet[i]);
	}
	
	printf("Numeros pares: ");
	for(i =0; i< n; i++){
		if(vet[i] % 2 == 0){
			printf("%d ", vet[i]);
			quantpares = quantpares + 1;
		}
	}
	
	printf("\nQuantidade de pares: %d", quantpares);
	
}
