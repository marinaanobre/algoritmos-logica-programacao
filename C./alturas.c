// Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos, bem como os nomes dessas pessoas caso houver.

#include<stdio.h>

int main(){
	int n;
	int i;
	char nomes[10][50];
	int idades[10];
	float alturas[10];
	float soma = 0, media;
	int quant = 0; 
	float porcentagem;
	
	printf("Quantas pessoas serao digitadas?\n ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
	printf("Dados da pessoa:\n", i + 1);		
	printf("Nome:");
	scanf("%s", nomes[i]);
	printf("Idade:");
	scanf("%d", &idades[i]);	
	printf("Altura:");
	scanf("%f", &alturas[i]);
	}
	
	for(i = 0; i < n; i++){
		soma = soma + alturas[i];
	}
	
	media = soma / n;
	printf("Altura media: %.2f\n", media);
	
	for(i = 0; i < n; i++){
		if(idades[i] < 16 ){
			quant = quant + 1;
		}
	}
	 
	porcentagem = quant * 100 / n;
	printf("Pessoas com menos de 16 anos: %.2f por cento\n", porcentagem);	
	for(i = 0; i < n; i++){
		if(idades[i] < 16 ){
			printf("%s\n", nomes[i]);
		}
	}
}

