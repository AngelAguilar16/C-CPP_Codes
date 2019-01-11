#include <stdio.h>

void main(){
	float grad,rad;
	printf("Ingresa los grados sexagesimales: ");
	scanf("%f",&grad);
	rad = grad * 0.0174533;
	printf("El valor en radianes es: %.2f\n\n",rad);
}
