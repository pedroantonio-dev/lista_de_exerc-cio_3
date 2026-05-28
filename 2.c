#include <stdio.h>

void main(){
	int ano = 0;
	float chico = 1.50, ze = 1.10;
	do{
		chico += 0.02;
		ze    += 0.03;
		ano++;
	}while(chico > ze);
	printf("foram necessarios %d anos\nCom ze tendo %.2f metros, e chico tendo %.2f metros", ano,ze,chico);
}
