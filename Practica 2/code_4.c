#include <stdio.h>

void main(){
	float sueldo,impuesto,neto;
	printf("Ingrese su sueldo: ");
	scanf("%f",&sueldo);
	fflush(stdin);
	if(sueldo <= 10000){
		impuesto = .02;
		neto = sueldo * impuesto;
		printf("Tu sueldo neto es de %.2f\n\n",sueldo - neto);
	}
	else{
		impuesto = .045;
		neto = sueldo * impuesto;
		printf("Tu sueldo neto es de %.2f\n\n",sueldo - neto);
	}
}
