#include <stdio.h>

void main(){
	int x;
	x = 1;
	char nombre[50];
	float sueldo;
	do{
		printf("Ingresa el nombre del trabajador %d: ",x);
		scanf("%s",nombre);
		fflush(stdin);
		printf("Ingresa su sueldo: ");
		scanf("%f",&sueldo);
		fflush(stdin);
		printf("%d) %s - %.2f\n\n",x,nombre,sueldo);
		x++;
	}while(x != 120);
}