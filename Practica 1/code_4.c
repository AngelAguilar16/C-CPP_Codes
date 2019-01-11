#include <stdio.h>

void main(){
	double tb,gb,mb,kb,b;
	printf("Ingresa los TeraBytes a convertir: ");
	scanf("%lf",&tb);
	b = tb * 1024 * 1024 * 1024 * 1024 * 8;
	printf("Tu valor en bits es: %f\n\n",b);	
}
