#include<stdio.h>

int main(){
	float precounitario;
	int quant;
	float dinheiro;
	float mult;
	float troco;
	
	printf("digite o valor do produto: ");
	scanf("%f", &precounitario);
	system("cls");
	printf("digite a quantidade de produtos selecionados:");
	scanf("%d", &quant);
	system("cls");
	printf("digite o valor entregue pelo cliente: ");
	scanf("%f", &dinheiro);
	system("cls");
	system("color 5f");
		
	mult = precounitario * quant;
	troco = dinheiro - mult;
	
	printf("o troco que sera entregue tem valor de: %.2f", troco);
	
	return 0;
	
	
}
