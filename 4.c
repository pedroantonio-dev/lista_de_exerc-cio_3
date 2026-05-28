#include <stdio.h>

int main(){
	int inte_1,inte_2,inte_3,inte_4;
	float numero;
	do{
		printf("Digite o numero: ");
		scanf("%f", &numero);
		if(numero>=0){
			if(numero<26){
				inte_1++;
			}
			else if(numero <51 && numero>25){
				inte_2++;
			}
			else if(numero <76 && numero>50){
				inte_3++;
			}
			else if(numero <= 100 && numero>75){
				inte_4++;
			}
		}
	}while(numero>=0);
	printf("\nA quantidade de numeros presentes no conjunto [0 , 25 ] eh: %d",inte_1);
	printf("\nA quantidade de numeros presentes no conjunto [26, 50 ] eh: %d",inte_2);
	printf("\nA quantidade de numeros presentes no conjunto [51, 75 ] eh: %d",inte_3);
	printf("\nA quantidade de numeros presentes no conjunto [76, 100] eh: %d",inte_4);
	return 0;
}
