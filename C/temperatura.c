#include<stdio.h>

int main(){
	float temp;
	float f;
	float c;
	char esc;
	
	printf("em que escala sera informada a temperatura? (f para fahrenheit ou c para celsius) ");
	scanf("%c", &esc);
	system("cls");
	printf("qual a temperatura? ");
	scanf("%f", &temp);
	system("cls");

	if( esc == 'f' || esc == 'F' ){
		f = 5.0 / 9.0  * ( temp - 32 );
		printf("a temperatura convertida de fahrenheit para celsius tem valor de: %.2f", f);
	}
	
	if( esc == 'c' || esc == 'C' ){
		c = ( 9.0 / 5.0 ) * temp + 32 ;
		printf("a temperatura convertida de celsius para fahrenheit tem valor de: %.2f", c);
	}
	
	return 0;
}
