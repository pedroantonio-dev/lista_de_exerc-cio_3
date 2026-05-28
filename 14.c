#include <stdio.h>

void main(){
	int i;
	float numero,maior, menor;
	printf("Digite o numero de indice 1: ");
	scanf("%f", &numero);
	maior = numero;
	menor = numero;
	for(i =0; i<9 ;i++){
		printf("Digite o numero de indice %d: ",i+2);
		scanf("%f", &numero);
		if(numero > maior){
			maior = numero;
		}
		if(numero < menor){
			menor = numero;
		}
	}
	printf("O maior numero foi: %.2f \nO menor numero foi: %.2f",maior, menor);
}
