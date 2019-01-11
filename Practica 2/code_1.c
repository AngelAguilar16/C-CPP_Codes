#include <stdio.h>
void main(){
	char se;
	int op;
	int m = 0;
	int h = 0;
	do{
		printf("Ingresa tu sexo: \nH) Hombre\nM)Mujer\n\n>> ");
		scanf("%c",&se);
		fflush(stdin);
		
		if((se == 'H') || (se == 'h')){
			printf("Datos almacenados.\n\n");
			h += 1;
			op += 1;	
		}
		
		if((se == 'M') || (se == 'm')){
			printf("Datos almacenados.\n\n");
			m += 1;
			op += 1;	
		}
	}while(op != 3);
	printf("En total hay %d mujeres y %d hombres.\n\n",m,h);
}
