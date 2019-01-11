#include <stdio.h>

void main(){
	int tabla,x,valor;
	
	tabla = 4;
	
	for(x = 0; x <= 10; x++){
		valor = x * tabla;
		printf("%d x %d = %d\n",x,tabla,valor);
	}
}
