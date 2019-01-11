#include <stdio.h>
#include <math.h>

void main(){
	int x;
	float y;
	
	for(x = 1; x <= 45; x++){
		y = ((2.6*pow(x,6)) - (3.9756*pow(x,4))) + 12;
		printf("El valor de la f(X) es: %.2f\n",y);
	}
}
