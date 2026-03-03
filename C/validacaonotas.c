#include<stdio.h>

int main(){
	float nota1;
	float nota2;
	float media;
	
	printf("digite a primeira nota: ");
	scanf("%f", &nota1);
	
	while( nota1 < 0 || nota1 > 10){
		printf("Nota invalida. Tente novamente!");
	}
	
	printf("digite a segunda nota: ");
	scanf("%f", &nota2);
	
	while( nota2 < 0 || nota2 > 10){
		printf("Nota invalida. Tente novamente!");
	}
	
	media = ( nota1 + nota2 ) / 2;
	
	printf("a media das notas e: %.2f", media);
	
	return 0;
}
