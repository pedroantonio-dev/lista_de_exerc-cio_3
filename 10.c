#include <stdio.h>

void main(){
	int nota,i=0,j=0,soma=0;
	do{
		printf("Digite a nota do aluno: ");
		scanf("%d", &nota);
		if(nota >= 0){
			soma += nota;
			i++;
			if(nota>=7){
				j++;
			}
		}
	}while(nota >= 0);
	float media = (float)soma/i;
	printf("A media aritmetica das notas eh: %.2f \nA quantidade de alunos aprovados foi de: %d",media,j);
}
