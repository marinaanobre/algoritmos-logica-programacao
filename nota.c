#include<stdio.h>

int main(){
	float nota1;
	float nota2;
	float notafinal;
	
	system("color 1f");
	printf("digite a nota do primeiro semestre: ");
	scanf("%f", &nota1);
	system("cls");
	system("color 2f");
	printf("digite a nota do segundo semestre: ");
	scanf("%f", &nota2);
	system("cls");
	system("color 3f");

	
	notafinal = nota1 + nota2;
	
	if( notafinal < 60 ){
		printf("REPROVADO");
	}
	
	printf("APROVADO");
	
	return 0;
}
