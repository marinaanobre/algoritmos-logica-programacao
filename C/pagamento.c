#include<stdio.h>

int main(){
	char nome[20];
	float valorporhora;
	float quanthr;
	float pagamento;
	
	printf("digite o nome do funcionario: ");
	scanf("%s", &nome);
	system("cls");
	printf("digite o valor por horas trabalhadas: ");
	scanf("%f", &valorporhora);
	system("cls");
	printf("digite a quantidade de horas trabalhadas: ");
	scanf("%f", &quanthr);
	system("cls");
	system("color 3f");
	
	pagamento= valorporhora * quanthr;
	

	printf("o pagamento de %c deve ser: %f", nome, pagamento);
	
	return 0;
	
	
}
