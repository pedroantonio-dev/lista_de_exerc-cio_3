#include <stdio.h>
int potencia(int x,int y){
	int i,base = x;
	for(i=1; i < y; i++){
		x = x*base;
	}
	return x;
}
void main(){
	int x,y, resultado;
	printf("Digite a base da potencia: ");
	scanf("%d", &x);
	printf("Digite o expoente da potencia: ");
	scanf("%d", &y);
	resultado = potencia(x,y);
	printf("a potencia tem como resultado: %d",resultado);
}
