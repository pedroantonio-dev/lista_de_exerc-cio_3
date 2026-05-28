#include <stdio.h>

int fatorial(int numero){
	int i = numero-1;
	while(i >= 1){
		numero = numero * i;
		i--;
	};
	return numero;
}

void main(){
	int numero;
	do{
		printf("Digite o numero a ser fatorado: ");
		scanf("%d", &numero);
	}while(numero<1);
	int resultado = fatorial(numero);
	printf("O resultado eh: %d",resultado);
}
