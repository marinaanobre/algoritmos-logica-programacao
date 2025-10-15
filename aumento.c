#include<stdio.h>

// Uma empresa vai conceder um aumento percentual de salário aos seus funcionários dependendo de quanto cada pessoa ganha, conforme tabela ao lado.
// Fazer um programa para ler o salário de uma pessoa, dai mostrar qual o novo salário desta pessoa depois do aumento, quanto foi o aumento e qual foi a porcentagem de aumento

int main(){
	float salario;
	float novosalario;
	float aumento;
	
	printf("digite o valor do salario recebido: ");
	scanf("%f", &salario);
	system("cls");
	
	if( salario <= 1000 ){
		novosalario = salario + ( salario * 20 / 100 );
		aumento = salario * 20 / 100; 
		printf("o novo salario sera: %.2f\no aumento foi de: %.2f\na porcentagem de aumento foi: 20%%", novosalario, aumento);
	}
	
	if( salario > 1000 && salario <= 3000 ){
		novosalario = salario + ( salario * 15 / 100 );
		aumento = salario * 15 / 100; 
		printf("o novo salario sera: %.2f\no aumento foi de: %.2f\na porcentagem de aumento foi: 15%%", novosalario, aumento);
	}
	
	if( salario > 3000 && salario <= 8000 ){
		novosalario = salario + ( salario * 10 / 100 );
		aumento = salario * 10 / 100; 
		printf("o novo salario sera: %.2f\no aumento foi de: %.2f\na porcentagem de aumento foi: 10%%", novosalario, aumento);
	}
	
	if( salario > 8000 ){
		novosalario = salario + ( salario * 5 / 100 );
			aumento = salario * 5 / 100; 
		printf("o novo salario sera: %.2f\no aumento foi de: %f.2\na porcentagem de aumento foi: 5%%", novosalario, aumento);
	}

return 0;

}
