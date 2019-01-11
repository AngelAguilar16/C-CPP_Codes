#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
	srand(time(NULL));
	float dado,dinero = 0;
	char a;
	do{
		dado = rand() % 11 + 2;
		printf("Tu resultado de el lanzamiento fue de %f",dado);
		if(dado <= 7){
			dinero += 5;
		}
		else{
			dinero -= 5;
		}
		printf("\nTu dinero actual es de: %.2f",dinero);
		printf("\nQuieres continuar S/N?\n>> ");
		scanf("%c",&a);
		fflush(stdin);
	}while( (a != 'n') && (a != 'N') );
	printf("Tu total de dinero fue de: %.2f\n\n",dinero);
}
