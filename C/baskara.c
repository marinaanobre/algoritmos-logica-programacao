#include<stdio.h>

int main(){
	float a;
	float b;
	float c;
	float x1;
	float x2;
	float delta;
	
	printf("digite o valor do coeficiente a: ");
	scanf("%f", &a);
	system("cls");
	printf("digite o valor do coeficiente b: ");
	scanf("%f", &b);
	system("cls");
	printf("digite o valor do coeficiente c: ");
	scanf("%f", &c);
	system("cls");
	 
	delta = pow( b, 2 ) - 4 * a * c;
	
	x1 = - b + sqrt(delta) / ( 2 * a );
	x2 = - b - sqrt(delta) / ( 2 * a );
	
	printf(" o valor de x1 e x2 sao: %f %f", x1, x2);
	
	return 0;

}
