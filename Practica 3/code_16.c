#include <stdio.h>
#include <math.h>

void main(){
	float x,N,z;
	printf("Ingresa el valor final de N: ");
	scanf("%f",&N);
	
	x = -10;
	
	while(x <= N){
		if(x == -5){
			printf("f(%f) = Div por cero",x);
		}
		else{
			z = (4*pow(x,4) - 3.5*pow(x,2)) / (x+5);
			printf("z = f(%f) = %f \n",x,z);
			x = x + 0.5;
		}
	}
}
