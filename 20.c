#include <stdio.h>
 
void main(){
	int i;
	float al, r, n;
	printf("Digite o primeiro termo da progrecao: ");
	scanf("%f", &al);
	printf("Digite a razao da progrecao: ");
	scanf("%f", &r);
	printf("Digite quantidade de termos da progrecao: ");
	scanf("%f", &n);
	for(i= 1;i<=n;i++){
		printf("%.2f \n",al);
		al = al*r;
	}
}
