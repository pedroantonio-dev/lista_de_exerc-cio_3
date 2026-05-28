#include <stdio.h>

void main(){
	int numero;
	float resultado,n_1,n_2;
	do{
		printf("1->Somar dois numeros\n2->Subtrair dois números\n3->Multiplicar dois números\n4->Sair\nDigite a opcao desejada: ");
		scanf("%d", &numero);
		if(numero <4){
			printf("digite o primeiro numero: ");
			scanf("%f", &n_1);
			printf("digite o segundo numero: ");
			scanf("%f", &n_2);
			switch(numero){
				case 1:
					resultado = n_1 + n_2;
					break;
				case 2:
					resultado = n_1 - n_2;
					break;
				case 3:
					resultado = n_1 * n_2;
					break;
			}
			printf("O resultado da operação feita do numero %.2f com o numero %.2f eh: %.2f \n",n_1,n_2,resultado);
		}
	}while(numero <4);
}
