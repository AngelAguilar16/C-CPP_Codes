#include <stdio.h>

void main(){
	float mt_1,mt_2,mt_3,prom;
	printf("Ingresa la calificacion de la primera materia: ");
	scanf("%f",&mt_1);
	printf("Ingresa la calificacion de la segunda materia: ");
	scanf("%f",&mt_2);
	printf("INgresa la calificacion de la tercera materia: ");
	scanf("%f",&mt_3);
	prom = (mt_1 + mt_2 + mt_3) / 3;
	printf("EL promedio es: %.2f\n\n",prom);
}
