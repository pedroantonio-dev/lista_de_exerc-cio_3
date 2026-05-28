#include <stdio.h>

void main(){
    int   boneco,bonecoM= 0,habitante = 0;
    float salario,salarioM =0,maior=0,necessidade=0;
    do{
    	printf("Digite o salario do habitante : ");
        scanf("%f",&salario);
        if(salario >= 0){	
	        printf("Digite a quantidade de filhos do habitante : ");
	        scanf("%d",&boneco);
	        if(salario > maior){
	            maior = salario;
	        }
	        if(salario < 100){
	            necessidade++;
	        }
	        bonecoM  = bonecoM  + boneco;
	        salarioM = salarioM + salario;
	        habitante++;
		}
    }while(!(salario < 0));
    bonecoM  = bonecoM/habitante;
    salarioM = salarioM/habitante;
    printf("\n\nA media de salario na cidade ozymandias eh: %.2f \nA media de filhos na cidade eh: %d \nO maior salario eh: %.2f \nE o percentual de pessoas com renda de até 100 reais eh: %.2f por cento",salarioM,bonecoM,maior,(necessidade/habitante)*100);
}
