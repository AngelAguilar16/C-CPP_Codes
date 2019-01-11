#include <stdio.h>

void main(){
	int valor_1,valor_2,x,tot;
	
	valor_1 = 4;
	valor_2 = 5;
	
	for(x = 0; x <= 10; x++){
		tot = x * valor_1;
		printf("Tabla de %d) %d x %d = %d\n",valor_1,x,valor_1,tot);
	}
	
	for(x = 0; x <= 10; x++){
		tot = x * valor_2;
		printf("Tabla de %d) %d x %d = %d\n",valor_2,x,valor_2,tot);
	}
}
