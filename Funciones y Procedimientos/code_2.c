#include <stdio.h>
#include <math.h>

void cuad(float x){
	float cuadr = pow(x,2);
	printf("El cuadrado del numero es: %.2f\n",cuadr);
}

void main(void){
	float x;
	printf("Ingresa el numero que quieres elevar: ");
	scanf("%f",&x);
	cuad(x);
}
