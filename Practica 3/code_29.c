#include <stdio.h>

void main(){
	int x = 0;
	float exa_1,exa_2,exa_3,prom;
	char nom_alu[50];

	do{	
		printf("Ingresa el nombre del alumno: ");
		scanf("%s",nom_alu);
		fflush(stdin);
		printf("Ingresa la calificacion del primer examen: ");
		scanf("%f",&exa_1);
		fflush(stdin);
		printf("Ingresa la calificacion del segundo examen: ");
		scanf("%f",&exa_2);
		fflush(stdin);
		printf("Ingresa la calificacion del tercer examen: ");
		scanf("%f",&exa_3);
		fflush(stdin);
		prom = (exa_1 + exa_2 + exa_3) / 3;
		printf("El promedio del alumno %s es de: %.2f\n\n",nom_alu,prom);
	}while(x != 25);
}