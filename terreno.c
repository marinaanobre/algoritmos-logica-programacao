//Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida, o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com duas casas decimais, conforme exemplo.

#include<stdio.h>

int main(){
	float largura;
	float comprimento;
	float metroq;
	float area;
	float preco;
	
	printf("Digite a largura do terreno: ");
	scanf("%f", &largura);
	printf("Digite o comprimento do terreno: ");
	scanf("%f", &comprimento);
	printf("Digite o valor do metro quadrado: ");
	scanf("%f", &metroq);
	
	area = largura * comprimento;
	preco = area * metroq;
	
	printf("Area do terreno: %.2f\n", area);
	printf("Preco do terreno: %.2f", preco);
	
	return 0;

}
