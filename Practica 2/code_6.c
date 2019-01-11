#include <stdio.h>

void main(){
	int horas,minutos;
	printf("Ingresa la hora: ");
	scanf("%d",&horas);
	fflush(stdin);
	printf("Ingresa los minutos: ");
	scanf("%d",&minutos);
	fflush(stdin);
	minutos += 1;
	if(minutos >= 59){
		minutos = 0;
		horas += 1;
		printf("La hora es: %d:%d\n\n",horas,minutos);
	}
	if(minutos >= 59 && horas < 24){
		minutos = 0;
		horas += 1;
		if(horas == 24){
			horas = 0;
		}
		printf("La hora es: %d:%d\n\n",horas,minutos);
	}
}
