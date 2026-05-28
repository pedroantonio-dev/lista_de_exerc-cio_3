#include <stdio.h>

/**
* Questão 8.1
*/
int primo(int numero){
	int i;
	if(numero == 1){
		return 0;
	}
	for(i = 2; i<=numero-1; i++){
		if(numero % i == 0){
			return 0;
		}
	}
	return 1;
}
/**
* Questão 8
*/
void main(){
	int numero;
	do{
		printf("Digite o numero: ");
		scanf("%d", &numero);
	}while(numero < 1);
	
	if(primo(numero)){
		printf("O numero %d eh primo",numero);
	}else{
		printf("O numero %d nao eh primo",numero);
	}
	
}
