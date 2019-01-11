#include <stdio.h>

void main(){
	float fah,cel;
	printf("Ingresa la temperatura en Fahrenheit: ");
	scanf("%f",&fah);
	cel = fah / 32;
	printf("La temperatura en Celsius es: %.2f\n\n",cel);
}
