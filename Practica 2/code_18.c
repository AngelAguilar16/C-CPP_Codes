#include <stdio.h>

void main(){
	int mes = 0,dia = 0,anio = 0;
	char mes_string[20];
	printf("Fechas.\n\n");
	printf("Ingresa el mes(1-12): ");
	scanf("%d",&mes);
	fflush(stdin);
	printf("Ingresa el dia: ");
	scanf("%d",&dia);
	fflush(stdin);
	printf("Ingresa el anio: ");
	scanf("%d",&anio);
	fflush(stdin);
	if(mes == 1){
		printf("Enero, %d de %d.\n\n",dia,anio);
	}
	if(mes == 2){
		printf("Febrero, %d de %d.\n\n",dia,anio);
	}
	if(mes == 3){
		printf("Marzo, %d de %d.\n\n",dia,anio);
	}
	if(mes == 4){
		printf("Abril, %d de %d.\n\n",dia,anio);
	}
	if(mes == 5){
		printf("Mayo, %d de %d.\n\n",dia,anio);
	}
	if(mes == 6){
		printf("Junio, %d de %d.\n\n",dia,anio);
	}
	if(mes == 7){
		printf("Julio, %d de %d.\n\n",dia,anio);
	}
	if(mes == 8){
		printf("Agosto, %d de %d.\n\n",dia,anio);
	}
	if(mes == 9){
		printf("Septiembre, %d de %d.\n\n",dia,anio);
	}
	if(mes == 10){
		printf("Octubre, %d de %d.\n\n",dia,anio);
	}
	if(mes == 11){
		printf("Noviembre, %d de %d.\n\n",dia,anio);
	}
	if(mes == 12){
		printf("Diciembre, %d de %d.\n\n",dia,anio);
	}
}
