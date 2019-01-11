#include <stdio.h>
#include <math.h>

void main(){
	float f_x;
	int x;
	for(x = 13; x <= 26; x++){
		f_x = (pow(x,4)) + (pow(x,3)) - (pow(x,2)) + 5;
		printf("El resultado de f(X) es: %.2f\n",f_x);
	}
}
