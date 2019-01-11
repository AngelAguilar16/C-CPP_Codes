#include <stdio.h>

void main(){
	float d,v,t;
	char op;
	do{
		printf("Ingresa la velocidad: ");
		scanf("%f",&v);
		fflush(stdin);
		printf("Ingresa el tiempo: ");
		scanf("%f",&t);
		fflush(stdin);
		d = v * t;
		printf("La distancia es: %.2f\n",d);
		printf("Desea continuar S/N: ");
		scanf("%c",&op);
		fflush(stdin);
	}while(op != 'N');
}