#include <stdio.h>

void main(){
	char nombre[30];
	float h,sal,paga;
	printf("Ingresa el nombre del trabajador: ");
	scanf("%s",nombre);
	printf("Ingresa su paga por hora: ");
	scanf("%f",&paga);
	printf("Ingresa las horas trabajadas: ");
	scanf("%f",&h);
	sal = paga * h;
	printf("El salario de %s es: %.2f\n\n",nombre,sal);
}
