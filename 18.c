#include <stdio.h>

void main(){
	int horas=0,A = 1000, B = 200;
	while(B<=A){
		horas++;
		if(horas % 3 == 0){	
			A = A*2;
		}
		if(horas %4 == 0 ){	
			B = B*3;
			
		}
		
	};
	 printf("Tempo necessario: %d horas\n", horas);
    printf("Populacao final da Colonia A: %d bacterias\n", A);
    printf("Populacao final da Colonia B: %d bacterias\n", B);

}
