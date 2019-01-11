#include <stdio.h>

void main(){
	char cc;
	float imp,sueldo;
	printf("Impuestos por area.\n\n");
	printf("Clave de Ciudad - Tasa de Impuestos.\n");
	printf("M - 0.005\n");
	printf("R - 0.01\n");
	printf("J - 0.03\n");
	printf("B - 0.035.\n");
	printf("Otros - 0.001\n");
	printf("Ingrese sueldo mensual: ");
	scanf("%f",&sueldo);
	fflush(stdin);
	printf("Ingrese clave de ciudad: ");
	scanf("%c",&cc);
	fflush(stdin);
	
	if( (cc == 'M') || (cc == 'm')){
		imp = sueldo * 0.005;
		printf("Tu impuesto anual es: %.2f\n\n",imp * 12);
	}
	else if( (cc == 'R') || (cc == 'r')){
		imp = sueldo * 0.01;
		printf("Tu impuesto anual es: %.2f\n\n",imp * 12);
	}
	else if( (cc == 'J') || (cc == 'j')){
		imp = sueldo * 0.03;
		printf("Tu impuesto anual es: %.2f\n\n",imp * 12);
	}
	else if( (cc == 'B') || (cc == 'b')){
		imp = sueldo * 0.035;
		printf("Tu impuesto anual es: %.2f\n\n",imp * 12);
	}
	else{
		imp = sueldo * 0.001;
		printf("Tu impuesto anual es: %.2f\n\n",imp * 12);
	}
	
}
