#include <stdio.h>

void main(){
	int i,N,par=0,impar=0,Simpar=0;
	printf("Digite a quantidade de numeros interios: ");
	scanf("%d", &N);
	for(i =0; i<=N;i++){
		if(i % 2 == 0){
			par+=i;
		}else{
			Simpar+=i;
			impar++;
		}
	};
	float media = Simpar/impar;
	printf("A soma de todos os numeros pares eh: %d \nA media de todos os numeros impares eh: %.2f",par,media);
}
