#include <stdio.h>

int main(){
	float km,millas;
	printf("Ingresa las millas a convertir: ");
	scanf("%f",&millas);
	km = millas * 1.609;
	printf("Tu valor en kms es: %.2f\n\n",km);
	return 0;
}
