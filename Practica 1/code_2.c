#include <stdio.h>

int main(){
	char nombre[30],ap_p[15],ap_m[15];
	printf("Ingresa tu nombre: ");
	scanf("%s",nombre);
	printf("Ingresa tu apellido paterno: ");
	scanf("%s",ap_p);
	printf("Ingresa tu apellido materno: ");
	scanf("%s",ap_m);
	printf("El nombre del Alumno es: %s %s %s\n\n",nombre,ap_p,ap_m);
	return 0;
}
