#include <stdio.h>
#include <math.h>

void main(){
	float interes,capdep,cp,tasa,monto;
	printf("Ingrese el capital a ingresar: ");
	scanf("%f",&capdep);
	printf("Ingrese la cantidad de periodos: ");
	scanf("%f",&cp);
	printf("Ingrese la tasa de interes: ");
	scanf("%f",&tasa);
	monto = (capdep) * pow((1+tasa/100),cp);
	interes = monto - capdep;
	printf("El interes es: %.2f\n\n",interes);
}
