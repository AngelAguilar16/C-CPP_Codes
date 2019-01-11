#include <stdio.h>

void main(){
	float mat_1,mat_2,mat_3,prom;
	printf("Ingresa la calificacion de tu primera materia: ");
	scanf("%f",&mat_1);
	fflush(stdin);
	printf("Ingresa la calificacion de tu segunda materia: ");
	scanf("%f",&mat_2);
	fflush(stdin);
	printf("Ingresa la calificacion de tu tercera materia: ");
	scanf("%f",&mat_3);
	fflush(stdin);
	prom = (mat_1 + mat_2 + mat_3) / 3;
	
	if(prom >= 6.0){
		printf("Tu promedio fue de %.2f. Aprobado\n\n",prom);
	}
	else{
		printf("Tu promedio fue de %.2f. Reprobado\n\n",prom);
	}
}
