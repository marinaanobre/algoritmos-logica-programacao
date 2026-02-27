// Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram no 1° e 2° semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou igual a 6.0

#include<stdio.h>
#include<string.h>

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){
	int n;
	int i;
	float nota1[50];
	float nota2[50];
	char nome[50][50];
	float media;
	
	printf("Quantos alunos serao digitados?\n ");
	scanf("%d", &n);
	limpar_entrada();

	for(i = 0; i < n; i++){
	printf("Dados do aluno:\n");		
	printf("Nome:");
	fgets(nome[i], 50, stdin);
	printf("Primeira nota:");
	scanf("%f", &nota1[i]);	
	printf("Segunda nota:");
	scanf("%f", &nota2[i]);
	limpar_entrada();
	}
	
	printf("Alunos Aprovados: ");
	for(i = 0; i < n; i++){
		media = (nota1[i] + nota2[i])/ 2;
		if(media >= 6){
			printf("%s", nome[i]);
		}
	}
	
}
