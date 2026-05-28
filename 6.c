#include <stdio.h>
int fibonacci(int N){
    printf("%d termos da serie de Fibonacci",N);
    if (N == 1) {
    	printf("\n0");
        return 0;
    }
    int n1 = 0, n2 = 1,prox,i;
    int soma = n2;
    printf("\n%d \n%d", n1, n2);
	if(N>2){
		for(i = 3; i <= N;i++){
			prox = n1 + n2;
			printf("\n%d",prox);
			
			soma += prox;
			
			n1 = n2;
			n2 = prox;
		}
	}
	return soma;
}

void main(){
	int N, total;
	printf("Digite o numero de termos: ");
	scanf("%d", &N);
	
	total = fibonacci(N);
	printf("\nA soma dos %d primeiros termos eh: %d",N, total);
}
