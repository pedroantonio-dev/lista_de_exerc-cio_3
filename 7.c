#include <stdio.h>

void main(){
	int idade;
	float salario;
	char sexo;
	/**
	* IDADE
	*/
	printf("Digite a idade do usuario (0 a 150): ");
	do{
		scanf("%d", &idade);
	}while(!(idade>=0 &&idade<151));
	/**
	* SALARIO
	*/
	printf("Digite o salario do usuario (maior que 0): ");
	do{
		scanf("%f", &salario);
	}while(salario <= 0);
	/**
	* SEXO
	*/
	printf("Digite o sexo do usuario (M ou F): ");
	do{
		scanf("%c", &sexo);
	}while(!(sexo == 'M' || sexo == 'F'));
}
