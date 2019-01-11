#include <stdio.h>

void main(){
	int x;
	float precio;
	printf("Ingresa el precio unitario por producto: ");
	scanf("%f",&precio);
	fflush(stdin);
	for(x = 0; x <= 1000; x++){
		float tot = x * precio;
		printf("El precio por %d unidad(es) es de: %.2f\n",x,tot);
	}
}