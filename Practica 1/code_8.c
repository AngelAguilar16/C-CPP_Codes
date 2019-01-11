#include <stdio.h>

void main(){
	float b,h,area;
	printf("Ingresa la base del triangulo: ");
	scanf("%f",&b);
	printf("Ingresa la altura del trangulo: ");
	scanf("%f",&h);
	area = (b * h) / 2;
	printf("El area de triangulo es: %.2f\n\n",area);
}
