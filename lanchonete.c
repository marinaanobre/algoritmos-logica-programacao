#include<stdio.h>

int main(){
	int produtos;
	int quant;
	int mult;
	
	printf("produtos:\n 1 = R$5\n 2 = R$3.50\n 3 = R$4.80\n 4 = R$8.90\n 5 = R$7.32\n");
	printf("digite o codigo do produro desejado: ");
	scanf("%d", &produtos);
	system("cls");
	printf("digite a quantidade de produtos selecionados: ");
	scanf("%d", &quant);
	system("cls");
	
	
	if( produtos == 1 ){
		mult = quant * 5.0;
		printf("o valor pago sera: %d", mult);
	}	
	if(produtos == 2 ){
		mult = quant * 3.50;
		printf("o valor pago sera: %d", mult);
	}	
	if( produtos == 3 ){
		mult = quant * 4.80;
		printf("o valor pago sera: %d", mult);
	}	
	if( produtos == 4 ){
		mult = quant * 8.90;
		printf("o valor pago sera: %d", mult);
	}	
	if( produtos == 5 ){
		mult = quant * 7.32;
		printf("o valor pago sera: %d", mult);
	}	
	
	return 0;
	
}
