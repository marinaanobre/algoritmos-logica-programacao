// Problema: Experi�ncias
//Maria acabou de iniciar seu curso de gradua��o na Faculdade de Medicina e precisa de sua ajuda para organizar os experimentos de um laborat�rio do qual ela � respons�vel. Ela quer saber, no final do ano, quantas cobaias foram utilizadas no laborat�rio e o percentual de cada tipo de cobaia utilizado.
//Este laborat�rio em especial utiliza tr�s tipos de cobaias: sapos, ratos e coelhos. Para obter essas informa��es, ela sabe exatamente o n�mero de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento. Fa�a um programa que leia um valor inteiro N que indica os v�rios casos de teste que vem a seguir. Cada caso de teste cont�m um inteiro que representa a quantidade de cobaias utilizadas e uma letra ('c', 'r' ou 's'), indicando o tipo de cobaia.
//Apresente  o total de cobaias utilizadas, o total de cada tipo de cobaias utilizadas e o percentual de cada uma em rela��o ao total de cobaias utilizadas, sendo que o percentual deve ser representado com dois d�gitos ap�s o ponto.


#include<stdio.h>

int main(){
	
	int nteste, qtcobaia, totalcobaia = 0, totalrato = 0, totalsapo = 0, totalcoelho = 0, i;
	char tipocobaia;
	float percentrato, percentsapo, percentcoelho;
	
	printf("quantos casos de teste serao digitados? ");
	scanf("%d", &nteste);
	
	for (i = 0; i < nteste; i++){
		printf("quantidade de cobaias: ");
		scanf("%d", &qtcobaia);
		printf("tipo de cobaia (c, r ou s): ");
		scanf(" %c", &tipocobaia);		
	
	if( tipocobaia == 'r'){
		totalrato = totalrato + qtcobaia;
	}
	else if( tipocobaia == 's'){
		totalsapo = totalsapo + qtcobaia;
	} else {
		totalcoelho = totalcoelho + qtcobaia;
	}
}
	
	totalcobaia = totalrato + totalsapo + totalcoelho;
	percentrato = (float)totalrato / totalcobaia * 100;
	percentsapo = (float)totalsapo / totalcobaia * 100;
	percentcoelho = (float)totalcoelho / totalcobaia * 100;
	
	printf("Relatorio Final: \n total: %d cobaias \n total de coelhos: %d \n total de ratos: %d \n total de sapos: %d \n percentual de coelhos: %.2f \n percentual de ratos: %.2f \n percentual de sapos %.2f", totalcobaia, totalcoelho, totalrato, totalsapo, percentcoelho, percentrato, percentsapo);
	
}
