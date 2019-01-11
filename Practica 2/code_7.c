#include <stdio.h>

void main(){
	float ventas,com;
	printf("Ingrese el monto de ventas: ");
	scanf("%f",&ventas);
	fflush(stdin);
	if(ventas >= 1540){
		com = ventas * .45;
		printf("Tu comision es de: $%.2f",com);
	}
	else{
		com = ventas * .39;
		printf("Tu comision es de: $%.2f",com);
	}
}
