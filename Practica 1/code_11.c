#include <stdio.h>

void main(){
	float km,h,d;
	printf("Ingrese los km/h: ");
	scanf("%f",&km);
	printf("Ingrese las horas transcurridas: ");
	scanf("%f",&h);
	d = km * h;
	printf("La distancia recorrida es: %.2f\n\n",d);
}
