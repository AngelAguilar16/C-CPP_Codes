#include <stdio.h>

void main(){
	char nombre[50];
	int cal;
	printf("Evaluacion trabajadores.\n\n");
	printf("Ingrese el nombre del trabajador: ");
	scanf("%s",nombre);
	fflush(stdin);
	printf("Ingrese la calificacion del trabajador(0-100): ");
	scanf("%d",&cal);
	fflush(stdin);
	if(cal >= 96){
		printf("Trabajador: %s\n",nombre);
		printf("Calificacion: %d\n",cal);
		printf("Desempeño: Excelente");
	}
	else if( (cal >= 78) && (cal <= 96) ){
		printf("Trabajador: %s\n",nombre);
		printf("Calificacion: %d\n",cal);
		printf("Desempeño: Buena");
	}
	else if(cal <= 77){
		printf("Trabajador: %s\n",nombre);
		printf("Calificacion: %d\n",cal);
		printf("Desempeño: Deficiente");
	}
}
