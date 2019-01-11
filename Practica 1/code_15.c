#include <stdio.h>
#include <math.h>

void main(){
	float grad,sen,cose,tang;
	printf("Ingresa los grados: ");
	scanf("%f",&grad);
	sen = sin(grad);
	cose = cos(grad);
	tang = tan(grad);
	printf("El seno en radianes es: %.2f\n",sen);
	printf("El coseno en radianes es: %.2f\n",cose);
	printf("La tangente en radianes es: %.2f\n\n",tang);
}
