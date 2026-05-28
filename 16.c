#include <stdio.h>

void inverter(int numero){
	int digito;
	 if (numero == 0) {
        printf("0");
    }
	while (numero > 0) {
        digito = numero % 10;     
        printf("%d", digito);     
        numero = numero / 10;     
    }
}

void main(){
	int numero;
	do{
		printf("Digite o numero: ");
		scanf("%d", &numero);
	}while(numero<0);
	inverter(numero);
}
