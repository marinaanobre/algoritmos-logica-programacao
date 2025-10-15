#include<stdio.h>

int main(){
	float num;
	float resultado;
	int i;
	
	printf("digite o numero desejado: ");
	scanf("%f", &num);
	system("cls");
	
	for( i = 1; i <= 10; i++ ){
	resultado = num * i;
	printf("%.1f X %d = %.1f\n", num, i, resultado); 		
	}	
	
	return 0;
	
}
