#include <stdio.h>

void main(){
	float pulgadas, cm;
	do{
		printf("Ingresa las pulgadas: ");
		scanf("%f",&pulgadas);
		cm = pulgadas * 2.54;
		printf("El valor en cm es: %.2f\n",cm);
	}while(pulgadas != 0);
}