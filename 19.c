#include <stdio.h>
int somar(int numero){
	int digito,soma=0;
	do{
		digito = numero%10;
		soma += digito;
		numero = numero/10;
	}while(numero>0);
	return soma;
}

void main(){
	int numero;
	do{
		printf("Digite o numero: ");
		scanf("%d",&numero);
	}while(numero<0);
	int soma = somar(numero);
	printf("A soma dos digitos eh: %d",soma);
}
