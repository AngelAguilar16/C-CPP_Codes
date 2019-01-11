#include <stdio.h>

void main(){
	float kt,ms;
	printf("Ingresa le velocidad en nudos: ");
	scanf("%f",&kt);
	ms = kt / 1.9438;
	printf("La velocidad en ms es: %.2f\n\n",ms);
}
