#include <stdio.h>
int declarar(int numero){
	do{
		printf("Digite um numero de 1 a 20: ");
		scanf("%d", &numero);
		if(!(numero > 0 && numero<=20)){
			printf("Numero digitado incorretamente, digite novamente!!!\n");
		}
	}while(!(numero > 0 && numero<=20));
	return numero;
}

void render(int x){
	int j;
	for(j=0;j<x;j++){
		printf("*");
	}
	printf("\n");
}

void main(){
	int i,
		n_1 = declarar(0),
		n_2 = declarar(0),
		n_3 = declarar(0),
		n_4 = declarar(0),
		n_5 = declarar(0);
	render(n_1);
	render(n_2);
	render(n_3);
	render(n_4);
	render(n_5);
}
