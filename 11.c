#include <stdio.h>
void main(){
	float c=0,f=32;
	printf("Celsius | Fahrenheit \n");
	for(c; c<=100; c+=5){
		f = (c*9/5) + 32;
		printf("%.2f   | %.2f \n",c,f);
	}
}
