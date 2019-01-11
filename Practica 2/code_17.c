#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
	srand(time(NULL));
	float dado;
	char a;
	dado = rand() % 11 + 2;
	printf("Tu resultado de el lanzamiento fue de %f\n\n",dado);
	if( (dado == 7) || (dado == 11) ){
		printf("Usted gana\n");
	}
	else if( (dado == 2) || (dado == 12) ){
		printf("Usted pierde\n");
	}
	else {
		printf("Vuelva a tirar\n");
		dado = rand() % 11 + 2;
		printf("Tu resultado de el lanzamiento fue de %f\n\n",dado);
		if( (dado == 7) || (dado == 11) ){
			printf("Usted gana\n");
		}
		else if( (dado == 2) || (dado == 12) ){
			printf("Usted pierde\n");
		}
	}
}
