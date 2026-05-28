#include <stdio.h>
float valor(int N,int i){
	float H;
	for(i = 1; i<=N;i++){
		H += 1/(float)i;
	}	
	return H;
}

void main(){
	int N;
	printf("Digite o termo N: ");
	scanf("%d", &N);
	
	float H = valor(N,1);
	printf("%f \n",H);
	
}
